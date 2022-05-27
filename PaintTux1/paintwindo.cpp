#include "paintwindo.h"
#include "ui_paintwindo.h"

paintWindo::paintWindo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::paintWindo)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);

}

paintWindo::~paintWindo()
{
    delete ui;
}
void paintWindo::setDimensions(string width, string height){
    Width=width;
    Height=height;
}
