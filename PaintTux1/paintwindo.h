#ifndef PAINTWINDO_H
#define PAINTWINDO_H

#include <QMainWindow>
#include <QFileDialog>
#include "image.h"
using namespace std;
namespace Ui {
class paintWindo;
}
class QPainter;
class QImage;
class paintWindo : public QMainWindow
{
    Q_OBJECT

public:
    string Width;
    string Height;
    bool pen=false;
    bool fill=false;
    explicit paintWindo(QWidget *parent = nullptr, string type="",string x="0", string y="0",QString file="");
    ~paintWindo();
    void setDimensions(string width, string height);
    void openBitmap(QString file);
    void enabled(string type);
    Image bmImage;
    QImage canvas;
    Color selectedColor;
protected:
    void paintEvent (QPaintEvent *e)override;
    void mousePressEvent (QMouseEvent *e)override;
    void mouseMoveEvent(QMouseEvent *e)override;
    void mouseReleaseEvent (QMouseEvent *e)override;
    void paint(int x, int y);

private slots:
    void on_actionsize_triggered();
    void on_actioncolor_triggered();
    void on_actioncolorFill_triggered();
    void on_actionSelectPen_triggered();
    void on_actionSaveClose_triggered();


private:
    Ui::paintWindo *ui;
    QPainter *mPainter;//pinta
    QImage *mImage= &canvas;    //imagen
    QPoint mBegin;     //inicia
    QPoint mEnd;       //final
    QColor mColor;     //color
    bool mEnabled;     //activado
    int mSize;         //tamano
};

#endif // PAINTWINDO_H
