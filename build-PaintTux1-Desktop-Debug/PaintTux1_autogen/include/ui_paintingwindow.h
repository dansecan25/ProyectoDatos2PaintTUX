/********************************************************************************
** Form generated from reading UI file 'paintingwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINTINGWINDOW_H
#define UI_PAINTINGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_paintingWindow
{
public:
    QPushButton *pushButton;
    QFrame *line;

    void setupUi(QDialog *paintingWindow)
    {
        if (paintingWindow->objectName().isEmpty())
            paintingWindow->setObjectName(QString::fromUtf8("paintingWindow"));
        paintingWindow->resize(1200, 600);
        pushButton = new QPushButton(paintingWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1100, 10, 91, 25));
        line = new QFrame(paintingWindow);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(-10, 100, 1221, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(paintingWindow);

        QMetaObject::connectSlotsByName(paintingWindow);
    } // setupUi

    void retranslateUi(QDialog *paintingWindow)
    {
        paintingWindow->setWindowTitle(QCoreApplication::translate("paintingWindow", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("paintingWindow", "Close and Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class paintingWindow: public Ui_paintingWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINTINGWINDOW_H
