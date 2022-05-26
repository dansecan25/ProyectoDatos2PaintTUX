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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menuWindow
{
public:
    QWidget *centralwidget;
    QPushButton *openBmpButton;
    QPushButton *newBitmapButton;
    QLabel *titleLabel;
    QPlainTextEdit *widthEntry;
    QPlainTextEdit *heightEntry;
    QLabel *label;
    QLabel *label_2;
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
        openBmpButton = new QPushButton(centralwidget);
        openBmpButton->setObjectName(QString::fromUtf8("openBmpButton"));
        openBmpButton->setGeometry(QRect(240, 170, 121, 41));
        newBitmapButton = new QPushButton(centralwidget);
        newBitmapButton->setObjectName(QString::fromUtf8("newBitmapButton"));
        newBitmapButton->setGeometry(QRect(240, 260, 121, 41));
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        titleLabel->setGeometry(QRect(240, 30, 141, 81));
        QFont font;
        font.setPointSize(20);
        titleLabel->setFont(font);
        widthEntry = new QPlainTextEdit(centralwidget);
        widthEntry->setObjectName(QString::fromUtf8("widthEntry"));
        widthEntry->setGeometry(QRect(230, 340, 51, 41));
        heightEntry = new QPlainTextEdit(centralwidget);
        heightEntry->setObjectName(QString::fromUtf8("heightEntry"));
        heightEntry->setGeometry(QRect(320, 340, 51, 41));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 320, 51, 17));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(320, 320, 51, 17));
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
        openBmpButton->setText(QCoreApplication::translate("menuWindow", "Abrir bitmap", nullptr));
        newBitmapButton->setText(QCoreApplication::translate("menuWindow", "Crear nuevo bitmap", nullptr));
        titleLabel->setText(QCoreApplication::translate("menuWindow", "Paint Tux", nullptr));
        label->setText(QCoreApplication::translate("menuWindow", "Width", nullptr));
        label_2->setText(QCoreApplication::translate("menuWindow", "Height", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("menuWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menuWindow: public Ui_menuWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUWINDOW_H
