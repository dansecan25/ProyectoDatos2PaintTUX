#ifndef PAINTWINDO_H
#define PAINTWINDO_H

#include <QMainWindow>
using namespace std;
namespace Ui {
class paintWindo;
}

class paintWindo : public QMainWindow
{
    Q_OBJECT

public:
    string Width;
    string Height;
    explicit paintWindo(QWidget *parent = nullptr);
    ~paintWindo();
    void setDimensions(string width, string height);

private:
    Ui::paintWindo *ui;
};

#endif // PAINTWINDO_H
