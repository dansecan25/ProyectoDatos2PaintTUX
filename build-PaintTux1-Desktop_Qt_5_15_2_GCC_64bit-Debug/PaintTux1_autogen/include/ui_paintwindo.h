/********************************************************************************
** Form generated from reading UI file 'paintwindo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINTWINDO_H
#define UI_PAINTWINDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_paintWindo
{
public:
    QAction *actionsize;
    QAction *actioncolor;
    QAction *actioncolorFill;
    QAction *actionSelectPen;
    QAction *actionSelectFill;
    QAction *actionSaveClose;
    QAction *actionGreyscale;
    QAction *actionInverse_color;
    QWidget *centralwidget;
    QLabel *bmpLabel;
    QMenuBar *menubar;
    QMenu *menuDibujar;
    QMenu *menuLapiz;
    QMenu *menuFill;
    QMenu *menuFilters;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *paintWindo)
    {
        if (paintWindo->objectName().isEmpty())
            paintWindo->setObjectName(QString::fromUtf8("paintWindo"));
        paintWindo->resize(800, 600);
        actionsize = new QAction(paintWindo);
        actionsize->setObjectName(QString::fromUtf8("actionsize"));
        actioncolor = new QAction(paintWindo);
        actioncolor->setObjectName(QString::fromUtf8("actioncolor"));
        actioncolorFill = new QAction(paintWindo);
        actioncolorFill->setObjectName(QString::fromUtf8("actioncolorFill"));
        actionSelectPen = new QAction(paintWindo);
        actionSelectPen->setObjectName(QString::fromUtf8("actionSelectPen"));
        actionSelectFill = new QAction(paintWindo);
        actionSelectFill->setObjectName(QString::fromUtf8("actionSelectFill"));
        actionSaveClose = new QAction(paintWindo);
        actionSaveClose->setObjectName(QString::fromUtf8("actionSaveClose"));
        actionGreyscale = new QAction(paintWindo);
        actionGreyscale->setObjectName(QString::fromUtf8("actionGreyscale"));
        actionInverse_color = new QAction(paintWindo);
        actionInverse_color->setObjectName(QString::fromUtf8("actionInverse_color"));
        centralwidget = new QWidget(paintWindo);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        bmpLabel = new QLabel(centralwidget);
        bmpLabel->setObjectName(QString::fromUtf8("bmpLabel"));
        bmpLabel->setGeometry(QRect(130, 40, 241, 131));
        paintWindo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(paintWindo);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuDibujar = new QMenu(menubar);
        menuDibujar->setObjectName(QString::fromUtf8("menuDibujar"));
        menuLapiz = new QMenu(menubar);
        menuLapiz->setObjectName(QString::fromUtf8("menuLapiz"));
        menuFill = new QMenu(menubar);
        menuFill->setObjectName(QString::fromUtf8("menuFill"));
        menuFilters = new QMenu(menubar);
        menuFilters->setObjectName(QString::fromUtf8("menuFilters"));
        paintWindo->setMenuBar(menubar);
        statusbar = new QStatusBar(paintWindo);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        paintWindo->setStatusBar(statusbar);

        menubar->addAction(menuDibujar->menuAction());
        menubar->addAction(menuLapiz->menuAction());
        menubar->addAction(menuFill->menuAction());
        menubar->addAction(menuFilters->menuAction());
        menuDibujar->addAction(actionSaveClose);
        menuLapiz->addAction(actionsize);
        menuLapiz->addAction(actioncolor);
        menuLapiz->addAction(actionSelectPen);
        menuFill->addAction(actioncolorFill);
        menuFill->addAction(actionSelectFill);
        menuFilters->addAction(actionGreyscale);
        menuFilters->addSeparator();
        menuFilters->addAction(actionInverse_color);

        retranslateUi(paintWindo);

        QMetaObject::connectSlotsByName(paintWindo);
    } // setupUi

    void retranslateUi(QMainWindow *paintWindo)
    {
        paintWindo->setWindowTitle(QCoreApplication::translate("paintWindo", "MainWindow", nullptr));
        actionsize->setText(QCoreApplication::translate("paintWindo", "size", nullptr));
        actioncolor->setText(QCoreApplication::translate("paintWindo", "color", nullptr));
        actioncolorFill->setText(QCoreApplication::translate("paintWindo", "Color", nullptr));
        actionSelectPen->setText(QCoreApplication::translate("paintWindo", "select", nullptr));
        actionSelectFill->setText(QCoreApplication::translate("paintWindo", "Select", nullptr));
        actionSaveClose->setText(QCoreApplication::translate("paintWindo", "Save and Close", nullptr));
        actionGreyscale->setText(QCoreApplication::translate("paintWindo", "Greyscale", nullptr));
        actionInverse_color->setText(QCoreApplication::translate("paintWindo", "Inverse color", nullptr));
        bmpLabel->setText(QString());
        menuDibujar->setTitle(QCoreApplication::translate("paintWindo", "Save", nullptr));
        menuLapiz->setTitle(QCoreApplication::translate("paintWindo", "Pen", nullptr));
        menuFill->setTitle(QCoreApplication::translate("paintWindo", "Fill", nullptr));
        menuFilters->setTitle(QCoreApplication::translate("paintWindo", "Filters", nullptr));
    } // retranslateUi

};

namespace Ui {
    class paintWindo: public Ui_paintWindo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINTWINDO_H
