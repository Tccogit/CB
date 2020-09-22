/********************************************************************************
** Form generated from reading UI file 'bazrasmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAZRASMAINWINDOW_H
#define UI_BAZRASMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BazrasMainWindow
{
public:
    QWidget *centralwidget;
    QTableWidget *twGrid;
    QPlainTextEdit *teHour;
    QPlainTextEdit *teMonth;
    QLabel *label;
    QPlainTextEdit *teYear;
    QPlainTextEdit *teDay;
    QPlainTextEdit *teBus;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QPlainTextEdit *teLine;
    QPlainTextEdit *teMinute;
    QPushButton *pbSave;
    QLabel *TempLabel;
    QLabel *lbConsoleNumber;
    QProgressBar *progressBar;
    QPushButton *pbSave_Event;
    QLabel *label_time;
    QPushButton *pbSaveCancel;
    QLabel *lbStartMove;
    QWidget *Antwidget;
    QLabel *TempLabel_Sharj;
    QWidget *widgetSendAll;
    QCheckBox *JustBuscheckBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BazrasMainWindow)
    {
        if (BazrasMainWindow->objectName().isEmpty())
            BazrasMainWindow->setObjectName(QString::fromUtf8("BazrasMainWindow"));
        BazrasMainWindow->resize(797, 547);
        BazrasMainWindow->setLayoutDirection(Qt::RightToLeft);
        BazrasMainWindow->setAutoFillBackground(false);
        BazrasMainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(BazrasMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        twGrid = new QTableWidget(centralwidget);
        twGrid->setObjectName(QString::fromUtf8("twGrid"));
        twGrid->setGeometry(QRect(180, 110, 401, 271));
        QFont font;
        font.setPointSize(19);
        twGrid->setFont(font);
        twGrid->horizontalHeader()->setDefaultSectionSize(150);
        twGrid->horizontalHeader()->setMinimumSectionSize(90);
        teHour = new QPlainTextEdit(centralwidget);
        teHour->setObjectName(QString::fromUtf8("teHour"));
        teHour->setGeometry(QRect(10, 310, 71, 70));
        QFont font1;
        font1.setPointSize(16);
        teHour->setFont(font1);
        teHour->setInputMethodHints(Qt::ImhPreferNumbers);
        teMonth = new QPlainTextEdit(centralwidget);
        teMonth->setObjectName(QString::fromUtf8("teMonth"));
        teMonth->setGeometry(QRect(670, 110, 51, 41));
        QFont font2;
        font2.setPointSize(10);
        teMonth->setFont(font2);
        teMonth->setInputMethodHints(Qt::ImhPreferNumbers);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 50, 351, 51));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        label->setFont(font3);
        label->setAlignment(Qt::AlignCenter);
        teYear = new QPlainTextEdit(centralwidget);
        teYear->setObjectName(QString::fromUtf8("teYear"));
        teYear->setGeometry(QRect(583, 110, 81, 41));
        teYear->setFont(font2);
        teYear->setInputMethodHints(Qt::ImhPreferNumbers);
        teDay = new QPlainTextEdit(centralwidget);
        teDay->setObjectName(QString::fromUtf8("teDay"));
        teDay->setGeometry(QRect(730, 110, 51, 41));
        teDay->setFont(font2);
        teDay->setInputMethodHints(Qt::ImhPreferNumbers);
        teBus = new QPlainTextEdit(centralwidget);
        teBus->setObjectName(QString::fromUtf8("teBus"));
        teBus->setGeometry(QRect(10, 210, 161, 70));
        teBus->setFont(font1);
        teBus->setInputMethodHints(Qt::ImhPreferNumbers);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(127, 330, 16, 31));
        QFont font4;
        font4.setPointSize(16);
        font4.setBold(true);
        font4.setWeight(75);
        label_5->setFont(font4);
        label_5->setAlignment(Qt::AlignCenter);
        label_5->setWordWrap(false);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 50, 181, 51));
        QFont font5;
        font5.setPointSize(20);
        font5.setBold(true);
        font5.setItalic(false);
        font5.setWeight(75);
        label_2->setFont(font5);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(false);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 270, 161, 51));
        QFont font6;
        font6.setPointSize(16);
        font6.setBold(true);
        font6.setItalic(false);
        font6.setWeight(75);
        label_4->setFont(font6);
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setWordWrap(false);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 170, 161, 51));
        label_3->setFont(font6);
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(false);
        teLine = new QPlainTextEdit(centralwidget);
        teLine->setObjectName(QString::fromUtf8("teLine"));
        teLine->setGeometry(QRect(10, 110, 161, 70));
        teLine->setFont(font1);
        teMinute = new QPlainTextEdit(centralwidget);
        teMinute->setObjectName(QString::fromUtf8("teMinute"));
        teMinute->setGeometry(QRect(100, 310, 71, 70));
        teMinute->setFont(font1);
        teMinute->setInputMethodHints(Qt::ImhPreferNumbers);
        pbSave = new QPushButton(centralwidget);
        pbSave->setObjectName(QString::fromUtf8("pbSave"));
        pbSave->setGeometry(QRect(590, 230, 191, 61));
        QFont font7;
        font7.setPointSize(26);
        font7.setBold(true);
        font7.setItalic(true);
        font7.setWeight(75);
        pbSave->setFont(font7);
        TempLabel = new QLabel(centralwidget);
        TempLabel->setObjectName(QString::fromUtf8("TempLabel"));
        TempLabel->setGeometry(QRect(320, 470, 44, 41));
        lbConsoleNumber = new QLabel(centralwidget);
        lbConsoleNumber->setObjectName(QString::fromUtf8("lbConsoleNumber"));
        lbConsoleNumber->setGeometry(QRect(580, 10, 191, 81));
        QFont font8;
        font8.setPointSize(50);
        font8.setBold(true);
        font8.setItalic(true);
        font8.setWeight(75);
        lbConsoleNumber->setFont(font8);
        lbConsoleNumber->setAlignment(Qt::AlignCenter);
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(400, 470, 181, 61));
        progressBar->setValue(24);
        pbSave_Event = new QPushButton(centralwidget);
        pbSave_Event->setObjectName(QString::fromUtf8("pbSave_Event"));
        pbSave_Event->setGeometry(QRect(590, 320, 191, 61));
        pbSave_Event->setFont(font7);
        label_time = new QLabel(centralwidget);
        label_time->setObjectName(QString::fromUtf8("label_time"));
        label_time->setGeometry(QRect(590, 160, 191, 51));
        QFont font9;
        font9.setPointSize(20);
        font9.setBold(true);
        font9.setWeight(75);
        label_time->setFont(font9);
        label_time->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_time->setAlignment(Qt::AlignCenter);
        pbSaveCancel = new QPushButton(centralwidget);
        pbSaveCancel->setObjectName(QString::fromUtf8("pbSaveCancel"));
        pbSaveCancel->setGeometry(QRect(590, 400, 191, 61));
        pbSaveCancel->setFont(font7);
        lbStartMove = new QLabel(centralwidget);
        lbStartMove->setObjectName(QString::fromUtf8("lbStartMove"));
        lbStartMove->setGeometry(QRect(230, 390, 361, 51));
        sizePolicy.setHeightForWidth(lbStartMove->sizePolicy().hasHeightForWidth());
        lbStartMove->setSizePolicy(sizePolicy);
        lbStartMove->setFont(font3);
        lbStartMove->setAlignment(Qt::AlignCenter);
        Antwidget = new QWidget(centralwidget);
        Antwidget->setObjectName(QString::fromUtf8("Antwidget"));
        Antwidget->setGeometry(QRect(0, 390, 231, 111));
        Antwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 15, 135);"));
        TempLabel_Sharj = new QLabel(Antwidget);
        TempLabel_Sharj->setObjectName(QString::fromUtf8("TempLabel_Sharj"));
        TempLabel_Sharj->setGeometry(QRect(0, 0, 231, 31));
        QFont font10;
        font10.setPointSize(10);
        font10.setBold(true);
        font10.setWeight(75);
        TempLabel_Sharj->setFont(font10);
        TempLabel_Sharj->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        TempLabel_Sharj->setAlignment(Qt::AlignCenter);
        widgetSendAll = new QWidget(Antwidget);
        widgetSendAll->setObjectName(QString::fromUtf8("widgetSendAll"));
        widgetSendAll->setGeometry(QRect(200, 50, 30, 30));
        widgetSendAll->setStyleSheet(QString::fromUtf8("image: url(:/Graphics2/green-led.png);"));
        JustBuscheckBox = new QCheckBox(centralwidget);
        JustBuscheckBox->setObjectName(QString::fromUtf8("JustBuscheckBox"));
        JustBuscheckBox->setGeometry(QRect(30, 10, 171, 41));
        QFont font11;
        font11.setPointSize(16);
        font11.setBold(false);
        font11.setItalic(false);
        font11.setWeight(50);
        JustBuscheckBox->setFont(font11);
        BazrasMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BazrasMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 797, 20));
        BazrasMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(BazrasMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        BazrasMainWindow->setStatusBar(statusbar);

        retranslateUi(BazrasMainWindow);

        QMetaObject::connectSlotsByName(BazrasMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *BazrasMainWindow)
    {
        BazrasMainWindow->setWindowTitle(QApplication::translate("BazrasMainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("BazrasMainWindow", "\331\201\330\261\331\205 \330\263\330\247\330\271\330\252 \330\262\331\206\333\214 \330\261\331\210\330\262\330\247\331\206\331\207", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("BazrasMainWindow", "<html><head/><body><p><span style=\" font-style:normal;\">:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("BazrasMainWindow", "<html><head/><body><p>\330\264\331\205\330\247\330\261\331\207 \330\256\330\267</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("BazrasMainWindow", "<html><head/><body><p>\330\263\330\247\330\271\330\252 \330\255\330\261\332\251\330\252</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("BazrasMainWindow", "<html><head/><body><p>\330\264\331\205\330\247\330\261\331\207 \330\247\330\252\331\210\330\250\331\210\330\263</p></body></html>", 0, QApplication::UnicodeUTF8));
        pbSave->setText(QApplication::translate("BazrasMainWindow", "\330\253\330\250\330\252", 0, QApplication::UnicodeUTF8));
        TempLabel->setText(QApplication::translate("BazrasMainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        lbConsoleNumber->setText(QApplication::translate("BazrasMainWindow", "2259", 0, QApplication::UnicodeUTF8));
        pbSave_Event->setText(QApplication::translate("BazrasMainWindow", "\330\253\330\250\330\252 \331\210\331\202\330\247\333\214\330\271", 0, QApplication::UnicodeUTF8));
        label_time->setText(QApplication::translate("BazrasMainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        pbSaveCancel->setText(QApplication::translate("BazrasMainWindow", "\330\247\331\206\330\265\330\261\330\247\331\201", 0, QApplication::UnicodeUTF8));
        lbStartMove->setText(QApplication::translate("BazrasMainWindow", "\330\263\330\247\330\271\330\252 \330\255\330\261\332\251\330\252 \331\202\330\250\331\204:", 0, QApplication::UnicodeUTF8));
        TempLabel_Sharj->setText(QString());
        JustBuscheckBox->setText(QApplication::translate("BazrasMainWindow", "\331\201\331\202\330\267 \333\214\332\251 \330\247\330\252\331\210\330\250\331\210\330\263", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BazrasMainWindow: public Ui_BazrasMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAZRASMAINWINDOW_H
