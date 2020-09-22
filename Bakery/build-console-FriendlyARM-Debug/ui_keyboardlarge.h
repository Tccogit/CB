/********************************************************************************
** Form generated from reading UI file 'keyboardlarge.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYBOARDLARGE_H
#define UI_KEYBOARDLARGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_KeyBoardLarge
{
public:
    QPushButton *pb7;
    QPushButton *pb6;
    QPushButton *pb0;
    QPushButton *pb2;
    QPushButton *pb4;
    QPushButton *pb1;
    QPushButton *pb8;
    QPushButton *pb3;
    QPushButton *pb9;
    QPushButton *pb5;
    QPushButton *pbBack;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pbStar;
    QPushButton *pbApply;
    QPushButton *pbClose;

    void setupUi(QDialog *KeyBoardLarge)
    {
        if (KeyBoardLarge->objectName().isEmpty())
            KeyBoardLarge->setObjectName(QString::fromUtf8("KeyBoardLarge"));
        KeyBoardLarge->resize(244, 417);
        KeyBoardLarge->setAutoFillBackground(true);
        KeyBoardLarge->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 127);"));
        pb7 = new QPushButton(KeyBoardLarge);
        pb7->setObjectName(QString::fromUtf8("pb7"));
        pb7->setGeometry(QRect(10, 170, 63, 64));
        QFont font;
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        pb7->setFont(font);
        pb7->setStyleSheet(QString::fromUtf8("background-image: url(:/Graphics3/7button.png);\n"
"border-radius: 5px;"));
        pb6 = new QPushButton(KeyBoardLarge);
        pb6->setObjectName(QString::fromUtf8("pb6"));
        pb6->setGeometry(QRect(170, 90, 63, 64));
        pb6->setFont(font);
        pb6->setStyleSheet(QString::fromUtf8("background-image: url(:/Graphics3/6button.png);\n"
"border-radius: 5px;"));
        pb0 = new QPushButton(KeyBoardLarge);
        pb0->setObjectName(QString::fromUtf8("pb0"));
        pb0->setGeometry(QRect(90, 250, 63, 64));
        pb0->setFont(font);
        pb0->setStyleSheet(QString::fromUtf8("background-image: url(:/Graphics3/0button.png);\n"
"border-radius: 5px;"));
        pb2 = new QPushButton(KeyBoardLarge);
        pb2->setObjectName(QString::fromUtf8("pb2"));
        pb2->setGeometry(QRect(90, 10, 63, 64));
        pb2->setFont(font);
        pb2->setStyleSheet(QString::fromUtf8("background-image: url(:/Graphics3/2button.png);\n"
"border-radius: 5px;"));
        pb4 = new QPushButton(KeyBoardLarge);
        pb4->setObjectName(QString::fromUtf8("pb4"));
        pb4->setGeometry(QRect(10, 90, 63, 64));
        pb4->setFont(font);
        pb4->setStyleSheet(QString::fromUtf8("background-image: url(:/Graphics3/4button.png);\n"
"border-radius: 5px;"));
        pb1 = new QPushButton(KeyBoardLarge);
        pb1->setObjectName(QString::fromUtf8("pb1"));
        pb1->setGeometry(QRect(10, 10, 63, 64));
        QFont font1;
        font1.setPointSize(28);
        font1.setBold(false);
        font1.setWeight(50);
        font1.setKerning(false);
        pb1->setFont(font1);
        pb1->setStyleSheet(QString::fromUtf8("background-image: url(:/Graphics3/1button.png);\n"
"border-radius: 5px;"));
        pb1->setText(QString::fromUtf8(""));
        pb1->setAutoRepeatDelay(0);
        pb1->setAutoRepeatInterval(0);
        pb8 = new QPushButton(KeyBoardLarge);
        pb8->setObjectName(QString::fromUtf8("pb8"));
        pb8->setGeometry(QRect(90, 170, 63, 64));
        pb8->setFont(font);
        pb8->setStyleSheet(QString::fromUtf8("background-image: url(:/Graphics3/8button.png);\n"
"border-radius: 5px;"));
        pb3 = new QPushButton(KeyBoardLarge);
        pb3->setObjectName(QString::fromUtf8("pb3"));
        pb3->setGeometry(QRect(170, 10, 63, 64));
        pb3->setFont(font);
        pb3->setStyleSheet(QString::fromUtf8("background-image: url(:/Graphics3/3button.png);\n"
"border-radius: 5px;"));
        pb9 = new QPushButton(KeyBoardLarge);
        pb9->setObjectName(QString::fromUtf8("pb9"));
        pb9->setGeometry(QRect(170, 170, 63, 64));
        pb9->setFont(font);
        pb9->setStyleSheet(QString::fromUtf8("background-image: url(:/Graphics3/9button.png);\n"
"border-radius: 5px;"));
        pb5 = new QPushButton(KeyBoardLarge);
        pb5->setObjectName(QString::fromUtf8("pb5"));
        pb5->setGeometry(QRect(90, 90, 63, 64));
        pb5->setFont(font);
        pb5->setStyleSheet(QString::fromUtf8("background-image: url(:/Graphics3/5button.png);\n"
"border-radius: 5px;"));
        pbBack = new QPushButton(KeyBoardLarge);
        pbBack->setObjectName(QString::fromUtf8("pbBack"));
        pbBack->setGeometry(QRect(170, 250, 63, 64));
        pbBack->setFont(font);
        pbBack->setStyleSheet(QString::fromUtf8("background-image: url(:/Graphics3/backspace.png);\n"
"border-radius: 5px;"));
        plainTextEdit = new QPlainTextEdit(KeyBoardLarge);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(60, 90, 111, 41));
        pbStar = new QPushButton(KeyBoardLarge);
        pbStar->setObjectName(QString::fromUtf8("pbStar"));
        pbStar->setGeometry(QRect(10, 250, 63, 64));
        pbStar->setFont(font);
        pbStar->setStyleSheet(QString::fromUtf8("background-image: url(:/Graphics3/Sbutton.png);\n"
"border-radius: 5px;"));
        pbApply = new QPushButton(KeyBoardLarge);
        pbApply->setObjectName(QString::fromUtf8("pbApply"));
        pbApply->setGeometry(QRect(133, 330, 100, 70));
        pbApply->setFont(font);
        pbApply->setStyleSheet(QString::fromUtf8("background-image: url(:/Graphics3/applybuttonkeyboardd.png);\n"
"border-radius: 5px;"));
        pbClose = new QPushButton(KeyBoardLarge);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        pbClose->setGeometry(QRect(10, 330, 100, 70));
        pbClose->setFont(font);
        pbClose->setStyleSheet(QString::fromUtf8("background-image: url(:/Graphics3/cancelbuttonkeyboardd.png);\n"
"border-radius: 5px;"));
        plainTextEdit->raise();
        pb7->raise();
        pb6->raise();
        pb0->raise();
        pb2->raise();
        pb4->raise();
        pb1->raise();
        pb8->raise();
        pb3->raise();
        pb9->raise();
        pb5->raise();
        pbBack->raise();
        pbStar->raise();
        pbApply->raise();
        pbClose->raise();

        retranslateUi(KeyBoardLarge);

        QMetaObject::connectSlotsByName(KeyBoardLarge);
    } // setupUi

    void retranslateUi(QDialog *KeyBoardLarge)
    {
        KeyBoardLarge->setWindowTitle(QApplication::translate("KeyBoardLarge", "Dialog", 0, QApplication::UnicodeUTF8));
        pb7->setText(QString());
        pb6->setText(QString());
        pb0->setText(QString());
        pb2->setText(QString());
        pb4->setText(QString());
        pb8->setText(QString());
        pb3->setText(QString());
        pb9->setText(QString());
        pb5->setText(QString());
        pbBack->setText(QString());
        plainTextEdit->setPlainText(QString());
        pbStar->setText(QString());
        pbApply->setText(QString());
        pbClose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class KeyBoardLarge: public Ui_KeyBoardLarge {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYBOARDLARGE_H
