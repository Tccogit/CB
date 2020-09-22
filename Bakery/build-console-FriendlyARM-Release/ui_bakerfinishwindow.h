/********************************************************************************
** Form generated from reading UI file 'bakerfinishwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAKERFINISHWINDOW_H
#define UI_BAKERFINISHWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BakerFinishWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_ReminPrice;
    QPushButton *pushButton_Cancel;
    QPushButton *pushButton_Price;
    QGraphicsView *graphicsView;
    QGraphicsView *graphicsView_2;
    QLabel *label_Error;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BakerFinishWindow)
    {
        if (BakerFinishWindow->objectName().isEmpty())
            BakerFinishWindow->setObjectName(QString::fromUtf8("BakerFinishWindow"));
        BakerFinishWindow->resize(670, 400);
        BakerFinishWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"\n"
"BakerFinishWindow\n"
"{\n"
"border: 5px solid blak;\n"
"border-radius: 40px;\n"
"background: white;\n"
"}"));
        centralwidget = new QWidget(BakerFinishWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_ReminPrice = new QPushButton(centralwidget);
        pushButton_ReminPrice->setObjectName(QString::fromUtf8("pushButton_ReminPrice"));
        pushButton_ReminPrice->setGeometry(QRect(10, 123, 300, 131));
        QFont font;
        font.setPointSize(50);
        pushButton_ReminPrice->setFont(font);
        pushButton_ReminPrice->setStyleSheet(QString::fromUtf8("background-image: url(:/Graphics3/priceblock.png);\n"
"border-radius: 25px;"));
        pushButton_Cancel = new QPushButton(centralwidget);
        pushButton_Cancel->setObjectName(QString::fromUtf8("pushButton_Cancel"));
        pushButton_Cancel->setGeometry(QRect(20, 270, 101, 71));
        pushButton_Cancel->setStyleSheet(QString::fromUtf8("background-image: url(:/Graphics3/cancelbuttonkeyboardd.png);\n"
"border-radius: 25px;"));
        pushButton_Price = new QPushButton(centralwidget);
        pushButton_Price->setObjectName(QString::fromUtf8("pushButton_Price"));
        pushButton_Price->setGeometry(QRect(10, -3, 301, 131));
        pushButton_Price->setFont(font);
        pushButton_Price->setStyleSheet(QString::fromUtf8("background-image: url(:/Graphics3/priceblock.png);\n"
"border-radius: 25px;"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(290, 40, 171, 51));
        graphicsView->setStyleSheet(QString::fromUtf8("background-image: url(:/Graphics3/price.png);\n"
"border-color: rgb(255, 170, 127);"));
        graphicsView->setFrameShape(QFrame::NoFrame);
        graphicsView->setLineWidth(0);
        graphicsView_2 = new QGraphicsView(centralwidget);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(269, 142, 371, 81));
        graphicsView_2->setStyleSheet(QString::fromUtf8("background-image: url(:/Graphics3/reminpricelable.png);"));
        graphicsView_2->setFrameShape(QFrame::NoFrame);
        label_Error = new QLabel(centralwidget);
        label_Error->setObjectName(QString::fromUtf8("label_Error"));
        label_Error->setGeometry(QRect(133, 254, 521, 111));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_Error->setFont(font1);
        label_Error->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));
        label_Error->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_Error->setWordWrap(true);
        label_Error->setMargin(10);
        BakerFinishWindow->setCentralWidget(centralwidget);
        graphicsView_2->raise();
        graphicsView->raise();
        pushButton_ReminPrice->raise();
        pushButton_Cancel->raise();
        pushButton_Price->raise();
        label_Error->raise();
        menubar = new QMenuBar(BakerFinishWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 670, 20));
        BakerFinishWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(BakerFinishWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        BakerFinishWindow->setStatusBar(statusbar);

        retranslateUi(BakerFinishWindow);

        QMetaObject::connectSlotsByName(BakerFinishWindow);
    } // setupUi

    void retranslateUi(QMainWindow *BakerFinishWindow)
    {
        BakerFinishWindow->setWindowTitle(QApplication::translate("BakerFinishWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        pushButton_ReminPrice->setText(QApplication::translate("BakerFinishWindow", "0", 0, QApplication::UnicodeUTF8));
        pushButton_Cancel->setText(QString());
        pushButton_Price->setText(QApplication::translate("BakerFinishWindow", "0", 0, QApplication::UnicodeUTF8));
        label_Error->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BakerFinishWindow: public Ui_BakerFinishWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAKERFINISHWINDOW_H
