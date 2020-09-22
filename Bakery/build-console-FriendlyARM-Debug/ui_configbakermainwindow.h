/********************************************************************************
** Form generated from reading UI file 'configbakermainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGBAKERMAINWINDOW_H
#define UI_CONFIGBAKERMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigBakerMainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPlainTextEdit *plainTextEdit;
    QPlainTextEdit *plainTextEdit_2;
    QPlainTextEdit *plainTextEdit_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ConfigBakerMainWindow)
    {
        if (ConfigBakerMainWindow->objectName().isEmpty())
            ConfigBakerMainWindow->setObjectName(QString::fromUtf8("ConfigBakerMainWindow"));
        ConfigBakerMainWindow->resize(583, 358);
        centralwidget = new QWidget(ConfigBakerMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(390, 280, 80, 23));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(480, 280, 80, 23));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 10, 104, 70));
        plainTextEdit_2 = new QPlainTextEdit(centralwidget);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(10, 90, 104, 70));
        plainTextEdit_3 = new QPlainTextEdit(centralwidget);
        plainTextEdit_3->setObjectName(QString::fromUtf8("plainTextEdit_3"));
        plainTextEdit_3->setGeometry(QRect(10, 170, 104, 70));
        ConfigBakerMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ConfigBakerMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 583, 20));
        ConfigBakerMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ConfigBakerMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ConfigBakerMainWindow->setStatusBar(statusbar);

        retranslateUi(ConfigBakerMainWindow);

        QMetaObject::connectSlotsByName(ConfigBakerMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ConfigBakerMainWindow)
    {
        ConfigBakerMainWindow->setWindowTitle(QApplication::translate("ConfigBakerMainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ConfigBakerMainWindow", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ConfigBakerMainWindow", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ConfigBakerMainWindow: public Ui_ConfigBakerMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGBAKERMAINWINDOW_H
