/********************************************************************************
** Form generated from reading UI file 'eventwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTWINDOW_H
#define UI_EVENTWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_EventWindow
{
public:
    QLabel *label_6;
    QComboBox *comboBox_Details;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_4;
    QPlainTextEdit *teMinute_2;
    QPlainTextEdit *teLine;
    QLabel *label_9;
    QPlainTextEdit *teHour;
    QLabel *label_8;
    QPlainTextEdit *teHour_2;
    QComboBox *comboBox;
    QLabel *label_5;
    QLabel *label_2;
    QPlainTextEdit *teMinute;
    QPushButton *pbOk;
    QPushButton *pbClose;
    QPlainTextEdit *teBus;

    void setupUi(QDialog *EventWindow)
    {
        if (EventWindow->objectName().isEmpty())
            EventWindow->setObjectName(QString::fromUtf8("EventWindow"));
        EventWindow->resize(558, 430);
        EventWindow->setAutoFillBackground(false);
        EventWindow->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        label_6 = new QLabel(EventWindow);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(396, 80, 101, 51));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);
        label_6->setWordWrap(false);
        comboBox_Details = new QComboBox(EventWindow);
        comboBox_Details->setObjectName(QString::fromUtf8("comboBox_Details"));
        comboBox_Details->setGeometry(QRect(20, 204, 481, 60));
        QFont font1;
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        comboBox_Details->setFont(font1);
        label_3 = new QLabel(EventWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 0, 171, 51));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(false);
        label_7 = new QLabel(EventWindow);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(387, 166, 111, 51));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);
        label_7->setWordWrap(false);
        label_4 = new QLabel(EventWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 250, 190, 51));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setWordWrap(false);
        teMinute_2 = new QPlainTextEdit(EventWindow);
        teMinute_2->setObjectName(QString::fromUtf8("teMinute_2"));
        teMinute_2->setGeometry(QRect(400, 290, 100, 70));
        teMinute_2->setFont(font1);
        teMinute_2->setInputMethodHints(Qt::ImhPreferNumbers);
        teLine = new QPlainTextEdit(EventWindow);
        teLine->setObjectName(QString::fromUtf8("teLine"));
        teLine->setGeometry(QRect(330, 40, 171, 61));
        teLine->setFont(font1);
        teLine->setReadOnly(true);
        label_9 = new QLabel(EventWindow);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(310, 250, 171, 51));
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignCenter);
        label_9->setWordWrap(false);
        teHour = new QPlainTextEdit(EventWindow);
        teHour->setObjectName(QString::fromUtf8("teHour"));
        teHour->setGeometry(QRect(50, 290, 100, 70));
        teHour->setFont(font1);
        teHour->setInputMethodHints(Qt::ImhPreferNumbers);
        label_8 = new QLabel(EventWindow);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(387, 300, 16, 60));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);
        label_8->setWordWrap(false);
        teHour_2 = new QPlainTextEdit(EventWindow);
        teHour_2->setObjectName(QString::fromUtf8("teHour_2"));
        teHour_2->setGeometry(QRect(290, 290, 100, 70));
        teHour_2->setFont(font1);
        teHour_2->setInputMethodHints(Qt::ImhPreferNumbers);
        comboBox = new QComboBox(EventWindow);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(20, 120, 481, 60));
        comboBox->setMaximumSize(QSize(481, 60));
        comboBox->setFont(font1);
        label_5 = new QLabel(EventWindow);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(140, 300, 35, 60));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);
        label_5->setWordWrap(false);
        label_2 = new QLabel(EventWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(330, 0, 151, 51));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(false);
        teMinute = new QPlainTextEdit(EventWindow);
        teMinute->setObjectName(QString::fromUtf8("teMinute"));
        teMinute->setGeometry(QRect(170, 290, 100, 70));
        teMinute->setFont(font1);
        teMinute->setInputMethodHints(Qt::ImhPreferNumbers);
        pbOk = new QPushButton(EventWindow);
        pbOk->setObjectName(QString::fromUtf8("pbOk"));
        pbOk->setGeometry(QRect(320, 370, 200, 51));
        QFont font2;
        font2.setPointSize(28);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        pbOk->setFont(font2);
        pbClose = new QPushButton(EventWindow);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        pbClose->setGeometry(QRect(50, 370, 200, 51));
        pbClose->setFont(font2);
        teBus = new QPlainTextEdit(EventWindow);
        teBus->setObjectName(QString::fromUtf8("teBus"));
        teBus->setGeometry(QRect(140, 40, 171, 61));
        teBus->setFont(font1);
        teBus->setReadOnly(true);

        retranslateUi(EventWindow);

        QMetaObject::connectSlotsByName(EventWindow);
    } // setupUi

    void retranslateUi(QDialog *EventWindow)
    {
        EventWindow->setWindowTitle(QApplication::translate("EventWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("EventWindow", "<html><head/><body><p>\331\206\331\210\330\271 \330\261\331\210\333\214\330\257\330\247\330\257</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("EventWindow", "<html><head/><body><p>\330\264\331\205\330\247\330\261\331\207 \330\247\330\252\331\210\330\250\331\210\330\263</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("EventWindow", "<html><head/><body><p>\331\206\330\247\331\205 \330\261\331\210\333\214\330\257\330\247\330\257</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("EventWindow", "<html><head/><body><p>\330\247\330\262 \330\263\330\247\330\271\330\252</p></body></html>", 0, QApplication::UnicodeUTF8));
        teLine->setStyleSheet(QApplication::translate("EventWindow", "background-color: rgb(226, 226, 226);", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("EventWindow", "<html><head/><body><p>\330\252\330\247 \330\263\330\247\330\271\330\252</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("EventWindow", "<html><head/><body><p><span style=\" font-style:normal;\">:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("EventWindow", "<html><head/><body><p><span style=\" font-style:normal;\">:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("EventWindow", "<html><head/><body><p>\330\264\331\205\330\247\330\261\331\207 \330\256\330\267</p></body></html>", 0, QApplication::UnicodeUTF8));
        pbOk->setText(QApplication::translate("EventWindow", "\330\252\330\247\333\214\333\214\330\257", 0, QApplication::UnicodeUTF8));
        pbClose->setText(QApplication::translate("EventWindow", "\330\247\331\206\330\265\330\261\330\247\331\201", 0, QApplication::UnicodeUTF8));
        teBus->setStyleSheet(QApplication::translate("EventWindow", "background-color: rgb(226, 226, 226);", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EventWindow: public Ui_EventWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTWINDOW_H
