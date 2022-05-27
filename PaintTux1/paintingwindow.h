#ifndef PAINTINGWINDOW_H
#define PAINTINGWINDOW_H

#include <QDialog>
using namespace std;
namespace Ui {
class paintingWindow;
}

class paintingWindow : public QDialog
{
    Q_OBJECT

public:
    string Width;
    string Height;
    explicit paintingWindow(QWidget *parent = nullptr);
    ~paintingWindow();
    void setDimensions(string width, string height);

private slots:

    void on_returnButton_clicked();

private:
    Ui::paintingWindow *ui;
    QPushButton *backButton=NULL;
};

#endif // PAINTINGWINDOW_H
