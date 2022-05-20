#ifndef PAINTINGWINDOW_H
#define PAINTINGWINDOW_H

#include <QDialog>

namespace Ui {
class paintingWindow;
}

class paintingWindow : public QDialog
{
    Q_OBJECT

public:
    explicit paintingWindow(QWidget *parent = nullptr);
    ~paintingWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::paintingWindow *ui;
};

#endif // PAINTINGWINDOW_H
