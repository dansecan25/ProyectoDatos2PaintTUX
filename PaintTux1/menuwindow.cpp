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


//Button that creates a bitmap to draw
void menuWindow::on_newBitmapButton_clicked()
{
    hide();
    string width="800";
    string height="800";

    if(!ui->widthEntry->toPlainText().isEmpty() && !ui->heightEntry->toPlainText().isEmpty()){
        width=ui->widthEntry->toPlainText().toStdString();
        height=ui->heightEntry->toPlainText().toStdString();
    }

    paintWin = new paintWindo(this, "new",width, height,"");
    paintWin->show();
}


void menuWindow::on_openBmpButton_clicked()
{
    QString file = QFileDialog::getOpenFileName(this, tr("Select bitmap"),"",tr("Images(*.bmp)"));

    hide();
    paintWin = new paintWindo(this,"open","0","0",file);
    paintWin->show();
}

