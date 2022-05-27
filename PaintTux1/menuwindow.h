#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include <QMainWindow>
#include "paintwindo.h"

QT_BEGIN_NAMESPACE
namespace Ui { class menuWindow; }
QT_END_NAMESPACE

class menuWindow : public QMainWindow
{
    Q_OBJECT

public:
    menuWindow(QWidget *parent = nullptr);
    ~menuWindow();

private slots:


    void on_newBitmapButton_clicked();

private:
    Ui::menuWindow *ui;
    paintWindo *paintWin;
};
#endif // MENUWINDOW_H
