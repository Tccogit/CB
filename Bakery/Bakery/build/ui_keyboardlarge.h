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
    QPushButton *pbClose;

    void setupUi(QDialog *KeyBoardLarge)
    {
        if (KeyBoardLarge->objectName().isEmpty())
            KeyBoardLarge->setObjectName(QString::fromUtf8("KeyBoardLarge"));
        KeyBoardLarge->resize(245, 327);
        pb7 = new QPushButton(KeyBoardLarge);
        pb7->setObjectName(QString::fromUtf8("pb7"));
        pb7->setGeometry(QRect(10, 10, 70, 70));
        QFont font;
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        pb7->setFont(font);
        pb6 = new QPushButton(KeyBoardLarge);
        pb6->setObjectName(QString::fromUtf8("pb6"));
        pb6->setGeometry(QRect(170, 90, 70, 70));
        pb6->setFont(font);
        pb0 = new QPushButton(KeyBoardLarge);
        pb0->setObjectName(QString::fromUtf8("pb0"));
        pb0->setGeometry(QRect(90, 250, 70, 70));
        pb0->setFont(font);
        pb2 = new QPushButton(KeyBoardLarge);
        pb2->setObjectName(QString::fromUtf8("pb2"));
        pb2->setGeometry(QRect(90, 170, 70, 70));
        pb2->setFont(font);
        pb4 = new QPushButton(KeyBoardLarge);
        pb4->setObjectName(QString::fromUtf8("pb4"));
        pb4->setGeometry(QRect(10, 90, 70, 70));
        pb4->setFont(font);
        pb1 = new QPushButton(KeyBoardLarge);
        pb1->setObjectName(QString::fromUtf8("pb1"));
        pb1->setGeometry(QRect(10, 170, 70, 70));
        pb1->setFont(font);
        pb8 = new QPushButton(KeyBoardLarge);
        pb8->setObjectName(QString::fromUtf8("pb8"));
        pb8->setGeometry(QRect(90, 10, 70, 70));
        pb8->setFont(font);
        pb3 = new QPushButton(KeyBoardLarge);
        pb3->setObjectName(QString::fromUtf8("pb3"));
        pb3->setGeometry(QRect(170, 170, 70, 70));
        pb3->setFont(font);
        pb9 = new QPushButton(KeyBoardLarge);
        pb9->setObjectName(QString::fromUtf8("pb9"));
        pb9->setGeometry(QRect(170, 10, 70, 70));
        pb9->setFont(font);
        pb5 = new QPushButton(KeyBoardLarge);
        pb5->setObjectName(QString::fromUtf8("pb5"));
        pb5->setGeometry(QRect(90, 90, 70, 70));
        pb5->setFont(font);
        pbBack = new QPushButton(KeyBoardLarge);
        pbBack->setObjectName(QString::fromUtf8("pbBack"));
        pbBack->setGeometry(QRect(170, 250, 70, 70));
        pbBack->setFont(font);
        plainTextEdit = new QPlainTextEdit(KeyBoardLarge);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(60, 90, 111, 41));
        pbClose = new QPushButton(KeyBoardLarge);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        pbClose->setGeometry(QRect(10, 250, 70, 70));
        pbClose->setFont(font);

        retranslateUi(KeyBoardLarge);

        QMetaObject::connectSlotsByName(KeyBoardLarge);
    } // setupUi

    void retranslateUi(QDialog *KeyBoardLarge)
    {
        KeyBoardLarge->setWindowTitle(QApplication::translate("KeyBoardLarge", "Dialog", 0, QApplication::UnicodeUTF8));
        pb7->setText(QApplication::translate("KeyBoardLarge", "\333\267", 0, QApplication::UnicodeUTF8));
        pb6->setText(QApplication::translate("KeyBoardLarge", "\333\266", 0, QApplication::UnicodeUTF8));
        pb0->setText(QApplication::translate("KeyBoardLarge", "0", 0, QApplication::UnicodeUTF8));
        pb2->setText(QApplication::translate("KeyBoardLarge", "\333\262", 0, QApplication::UnicodeUTF8));
        pb4->setText(QApplication::translate("KeyBoardLarge", "\333\264", 0, QApplication::UnicodeUTF8));
        pb1->setText(QApplication::translate("KeyBoardLarge", "\333\261", 0, QApplication::UnicodeUTF8));
        pb8->setText(QApplication::translate("KeyBoardLarge", "\333\270", 0, QApplication::UnicodeUTF8));
        pb3->setText(QApplication::translate("KeyBoardLarge", "\333\263", 0, QApplication::UnicodeUTF8));
        pb9->setText(QApplication::translate("KeyBoardLarge", "\333\271", 0, QApplication::UnicodeUTF8));
        pb5->setText(QApplication::translate("KeyBoardLarge", "\333\265", 0, QApplication::UnicodeUTF8));
        pbBack->setText(QApplication::translate("KeyBoardLarge", "<-", 0, QApplication::UnicodeUTF8));
        plainTextEdit->setPlainText(QString());
        pbClose->setText(QApplication::translate("KeyBoardLarge", "C", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class KeyBoardLarge: public Ui_KeyBoardLarge {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYBOARDLARGE_H
