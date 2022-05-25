/********************************************************************************
** Form generated from reading UI file 'menuwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUWINDOW_H
#define UI_MENUWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menuWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *menuWindow)
    {
        if (menuWindow->objectName().isEmpty())
            menuWindow->setObjectName(QString::fromUtf8("menuWindow"));
        menuWindow->resize(600, 446);
        centralwidget = new QWidget(menuWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(240, 170, 121, 41));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 260, 121, 41));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 30, 141, 81));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        menuWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(menuWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 22));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        menuWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(menuWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        menuWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());

        retranslateUi(menuWindow);

        QMetaObject::connectSlotsByName(menuWindow);
    } // setupUi

    void retranslateUi(QMainWindow *menuWindow)
    {
        menuWindow->setWindowTitle(QCoreApplication::translate("menuWindow", "menuWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("menuWindow", "Abrir bitmap", nullptr));
        pushButton_2->setText(QCoreApplication::translate("menuWindow", "Crear nuevo bitmap", nullptr));
        label->setText(QCoreApplication::translate("menuWindow", "Paint Tux", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("menuWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menuWindow: public Ui_menuWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUWINDOW_H
