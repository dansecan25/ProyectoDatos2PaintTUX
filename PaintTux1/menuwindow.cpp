#include "menuwindow.h"
#include "ui_menuwindow.h"

using namespace std;
menuWindow::menuWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::menuWindow)
{
    ui->setupUi(this);
}

menuWindow::~menuWindow()
{
    delete ui;
}



void menuWindow::on_newBitmapButton_clicked()
{
    hide();
    string width="1000";
    string height="1000";

    if(!ui->widthEntry->toPlainText().isEmpty() && !ui->heightEntry->toPlainText().isEmpty()){
        width=ui->widthEntry->toPlainText().toStdString();
        height=ui->heightEntry->toPlainText().toStdString();
    }

    paintWin = new paintWindo(this);
    paintWin->setDimensions(width,height);
    paintWin->show();
}


void menuWindow::on_openBmpButton_clicked()
{
    QString file = QFileDialog::getOpenFileName(this, tr("Select bitmap"),"",tr("Images(*.bmp)"));
    qtImage.load(file);
}

