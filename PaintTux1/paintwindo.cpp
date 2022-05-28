#include "paintwindo.h"
#include "ui_paintwindo.h"
#include<QInputDialog>
#include<QColorDialog>
#include <QDesktopWidget>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QPainter>
#include <QImage>
#include <QMessageBox>
#include <QWidget>

#define DEFAULT_SIZE 5

paintWindo::paintWindo(QWidget *parent, string type, string x, string y, QString file) :
    QMainWindow(parent),
    ui(new Ui::paintWindo)
{

    ui->setupUi(this);
    this->setFixedSize(900,600);
    mImage = new QImage (QApplication:: desktop() ->size(), QImage::Format_ARGB32_Premultiplied);
    mPainter = new QPainter(mImage);
    mEnabled = false;
    mColor = QColor (Qt::black);
    mSize = DEFAULT_SIZE;
    if(type=="new"){
        setDimensions(x,y);
    }else if(type=="open"){
        openBitmap(file);
    }

}

paintWindo::~paintWindo()
{
    delete ui;
    delete mPainter;
    delete mImage;
}
//Function for creating a new bitmap
void paintWindo::setDimensions(string width, string height){
    Width=width;
    Height=height;
    paintWindo::bmImage=Image(std::stoi(width),std::stoi(height));
    for(int y=0;y<std::stoi(height);y++){
        for(int x=0; x<std::stoi(height);x++){
            paintWindo::bmImage.SetColor(Color(1.0,1.0,1.0),x,y);
        }
    }

    paintWindo::bmImage.Export("newBitmap.bmp");
    canvas.load("newBitmap.bmp");
    paintWindo::bmImage.Retrieve("newBitmap.bmp");

    ui->bmpLabel->resize(paintWindo::bmImage.width(),paintWindo::bmImage.height());
    ui->bmpLabel->setPixmap(QPixmap::fromImage(canvas));

}
void paintWindo:: paintEvent (QPaintEvent *e){
    QPainter painter (this);
    painter.fillRect(mImage->rect(),Qt::white);
    painter.drawImage(0,0, *mImage);
    e->accept();

}
void paintWindo:: mousePressEvent (QMouseEvent *e){
    mEnabled = true;
    mBegin = e->pos();
    e->accept();

}
void paintWindo:: mouseMoveEvent (QMouseEvent *e){
    if(!mEnabled){
        e->accept();
        return;
    }
    if(pen){
        QPen pen (mColor);
        pen.setCapStyle(Qt::RoundCap);
        pen.setWidth(mSize);
        mEnd = e->pos();
        mPainter->setPen(pen);
        mPainter->drawLine(mBegin , mEnd);
        mBegin = mEnd;
        update();
        e->accept();
    }else if(fill){

    }

}

void paintWindo:: mouseReleaseEvent (QMouseEvent *e){
    mEnabled = false;
    e->accept();
}

void paintWindo::on_actionsize_triggered()
{
    mSize = QInputDialog::getInt(this, "Tam lapiz","Ingrese tam", 5,1);
}


void paintWindo::on_actioncolor_triggered()
{
    mColor= QColorDialog:: getColor(Qt::black,this,"color lapiz");
}

void paintWindo::on_actioncolorFill_triggered()
{
    mColor= QColorDialog:: getColor(Qt::black,this,"color lapiz");
}


void paintWindo::enabled(string type)
{
    if(type!="pen"){
        pen=false;
    }
    if(type!="fill"){
        fill=false;
    }
}
void paintWindo::openBitmap(QString file)
{
    canvas.load(file);
    paintWindo::bmImage.Retrieve(file.toStdString().c_str());

    ui->bmpLabel->resize(paintWindo::bmImage.width(),paintWindo::bmImage.height());
    ui->bmpLabel->setPixmap(QPixmap::fromImage(canvas));
}
void paintWindo::on_actionSelectPen_triggered()
{
    pen=true;
    enabled("pen");
}


void paintWindo::on_actionSaveClose_triggered()
{
    close();
    QFileDialog saveFile;
    saveFile.setOptions(QFileDialog::DontUseNativeDialog);
    saveFile.setDefaultSuffix(".bmp");
    std::string file = saveFile.getSaveFileName(this,tr("save"),"",tr("Images(*.bmp)")).toStdString();
    paintWindo::bmImage.Export(file.c_str());
    if(!file.empty())
    {
        QMessageBox popup;
        popup.setText("SUCCESS:image has been saved as bitmap");
        popup.exec();
    }else{
        QMessageBox popup;
        popup.setText("ERROR: image couldnt be saved");
        popup.exec();
    }
}

