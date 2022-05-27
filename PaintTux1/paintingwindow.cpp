#include "paintingwindow.h"
#include "ui_paintingwindow.h"
#include <QDebug>
using namespace std;
paintingWindow::paintingWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::paintingWindow)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);
    backButton = new QPushButton("Close and Save",this);

    backButton->setGeometry(20,10, 150, 30);
    backButton->show();

}

paintingWindow::~paintingWindow()
{
    delete ui;
}


void paintingWindow::setDimensions(string width, string height){
    Width=width;
    Height=height;

}


void paintingWindow::on_returnButton_clicked()
{

}

