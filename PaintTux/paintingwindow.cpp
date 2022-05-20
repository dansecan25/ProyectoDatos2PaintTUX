#include "paintingwindow.h"
#include "ui_paintingwindow.h"

paintingWindow::paintingWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::paintingWindow)
{
    ui->setupUi(this);
}

paintingWindow::~paintingWindow()
{
    delete ui;
}
