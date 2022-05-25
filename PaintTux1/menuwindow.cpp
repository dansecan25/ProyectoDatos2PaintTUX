#include "menuwindow.h"
#include "ui_menuwindow.h"

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


void menuWindow::on_pushButton_2_clicked()
{
    hide();
    paintWin = new paintingWindow(this);
    paintWin->show();
}

