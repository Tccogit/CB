/********************************************************************************
** Form generated from reading UI file 'baker.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAKER_H
#define UI_BAKER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Baker
{
public:
    QPushButton *pushButton_Sangak;
    QPushButton *pushButton_Taftoon;
    QPushButton *pushButton_Lavash;
    QPushButton *pushButton_Barbari;
    QPushButton *pushButton_tost;
    QPushButton *pushButton_baget;
    QPushButton *pushButton_F1;
    QPushButton *pushButton_F2;
    QPushButton *pushButton_F3;
    QPushButton *pushButton_F4;
    QPushButton *pushButton_Number;
    QPushButton *pushButton_Up;
    QPushButton *pushButton_Down;
    QPushButton *pushButton_Price;
    QPushButton *pushButton_Apply;
    QGraphicsView *graphicsView;
    QGraphicsView *graphicsView_2;
    QLabel *label_F4;
    QLabel *label_F3;
    QLabel *label_F2;
    QLabel *label_F1;

    void setupUi(QDialog *Baker)
    {
        if (Baker->objectName().isEmpty())
            Baker->setObjectName(QString::fromUtf8("Baker"));
        Baker->resize(800, 474);
        Baker->setStyleSheet(QString::fromUtf8("background-image: url(:/Graphics3/background.jpg);"));
        pushButton_Sangak = new QPushButton(Baker);
        pushButton_Sangak->setObjectName(QString::fromUtf8("pushButton_Sangak"));
        pushButton_Sangak->setGeometry(QRect(10, 150, 220, 96));
        pushButton_Sangak->setStyleSheet(QString::fromUtf8("border-radius: 5px;\n"
"background-image: url(:/Graphics3/sangak.png);"));
        pushButton_Taftoon = new QPushButton(Baker);
        pushButton_Taftoon->setObjectName(QString::fromUtf8("pushButton_Taftoon"));
        pushButton_Taftoon->setGeometry(QRect(240, 150, 220, 96));
        pushButton_Taftoon->setStyleSheet(QString::fromUtf8("border-radius: 5px;\n"
"background-image: url(:/Graphics3/taftoon.png);"));
        pushButton_Lavash = new QPushButton(Baker);
        pushButton_Lavash->setObjectName(QString::fromUtf8("pushButton_Lavash"));
        pushButton_Lavash->setGeometry(QRect(240, 260, 220, 96));
        pushButton_Lavash->setStyleSheet(QString::fromUtf8("border-radius: 5px;\n"
"background-image: url(:/Graphics3/lavash.png);"));
        pushButton_Barbari = new QPushButton(Baker);
        pushButton_Barbari->setObjectName(QString::fromUtf8("pushButton_Barbari"));
        pushButton_Barbari->setGeometry(QRect(10, 260, 220, 96));
        pushButton_Barbari->setStyleSheet(QString::fromUtf8("border-radius: 5px;\n"
"background-image: url(:/Graphics3/barbari.png);"));
        pushButton_tost = new QPushButton(Baker);
        pushButton_tost->setObjectName(QString::fromUtf8("pushButton_tost"));
        pushButton_tost->setGeometry(QRect(10, 370, 220, 96));
        pushButton_tost->setStyleSheet(QString::fromUtf8("border-radius: 5px;\n"
"background-image: url(:/Graphics3/tost.png);"));
        pushButton_baget = new QPushButton(Baker);
        pushButton_baget->setObjectName(QString::fromUtf8("pushButton_baget"));
        pushButton_baget->setGeometry(QRect(240, 370, 220, 96));
        pushButton_baget->setStyleSheet(QString::fromUtf8("border-radius: 5px;\n"
"background-image: url(:/Graphics3/baget.png);"));
        pushButton_F1 = new QPushButton(Baker);
        pushButton_F1->setObjectName(QString::fromUtf8("pushButton_F1"));
        pushButton_F1->setGeometry(QRect(10, 30, 100, 110));
        QFont font;
        font.setPointSize(30);
        pushButton_F1->setFont(font);
        pushButton_F1->setStyleSheet(QString::fromUtf8("background-image: url(:/Graphics3/f1button.png);\n"
"border-radius: 15px;"));
        pushButton_F2 = new QPushButton(Baker);
        pushButton_F2->setObjectName(QString::fromUtf8("pushButton_F2"));
        pushButton_F2->setGeometry(QRect(130, 30, 100, 110));
        pushButton_F2->setFont(font);
        pushButton_F2->setStyleSheet(QString::fromUtf8("background-image: url(:/Graphics3/f2button.png);\n"
"border-radius: 15px;"));
        pushButton_F3 = new QPushButton(Baker);
        pushButton_F3->setObjectName(QString::fromUtf8("pushButton_F3"));
        pushButton_F3->setGeometry(QRect(240, 30, 100, 110));
        pushButton_F3->setFont(font);
        pushButton_F3->setStyleSheet(QString::fromUtf8("background-image: url(:/Graphics3/f3button.png);\n"
"border-radius: 15px;"));
        pushButton_F4 = new QPushButton(Baker);
        pushButton_F4->setObjectName(QString::fromUtf8("pushButton_F4"));
        pushButton_F4->setGeometry(QRect(360, 30, 100, 111));
        pushButton_F4->setFont(font);
        pushButton_F4->setStyleSheet(QString::fromUtf8("background-image: url(:/Graphics3/f4button.png);\n"
"border-radius: 15px;"));
        pushButton_Number = new QPushButton(Baker);
        pushButton_Number->setObjectName(QString::fromUtf8("pushButton_Number"));
        pushButton_Number->setGeometry(QRect(480, 250, 210, 141));
        QFont font1;
        font1.setPointSize(50);
        pushButton_Number->setFont(font1);
        pushButton_Number->setStyleSheet(QString::fromUtf8("background-image: url(:/Graphics3/number.png);\n"
"border-radius: 25px;"));
        pushButton_Up = new QPushButton(Baker);
        pushButton_Up->setObjectName(QString::fromUtf8("pushButton_Up"));
        pushButton_Up->setGeometry(QRect(690, 220, 81, 81));
        pushButton_Up->setStyleSheet(QString::fromUtf8("background-image: url(:/Graphics3/up.png);\n"
"border-radius: 25px;"));
        pushButton_Down = new QPushButton(Baker);
        pushButton_Down->setObjectName(QString::fromUtf8("pushButton_Down"));
        pushButton_Down->setGeometry(QRect(690, 310, 81, 81));
        pushButton_Down->setStyleSheet(QString::fromUtf8("background-image: url(:/Graphics3/down.png);\n"
"border-radius: 25px;"));
        pushButton_Price = new QPushButton(Baker);
        pushButton_Price->setObjectName(QString::fromUtf8("pushButton_Price"));
        pushButton_Price->setGeometry(QRect(480, 60, 300, 131));
        pushButton_Price->setFont(font1);
        pushButton_Price->setStyleSheet(QString::fromUtf8("background-image: url(:/Graphics3/priceblock.png);\n"
"border-radius: 25px;"));
        pushButton_Apply = new QPushButton(Baker);
        pushButton_Apply->setObjectName(QString::fromUtf8("pushButton_Apply"));
        pushButton_Apply->setGeometry(QRect(530, 396, 197, 74));
        pushButton_Apply->setStyleSheet(QString::fromUtf8("border-radius: 25px;\n"
"background-image: url(:/Graphics3/applybutton.png);"));
        graphicsView = new QGraphicsView(Baker);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(540, 10, 171, 51));
        graphicsView->setStyleSheet(QString::fromUtf8("background-image: url(:/Graphics3/price.png);"));
        graphicsView->setFrameShape(QFrame::NoFrame);
        graphicsView_2 = new QGraphicsView(Baker);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(510, 185, 171, 71));
        graphicsView_2->setStyleSheet(QString::fromUtf8("background-image: url(:/Graphics3/numberlabel.png);"));
        graphicsView_2->setFrameShape(QFrame::NoFrame);
        label_F4 = new QLabel(Baker);
        label_F4->setObjectName(QString::fromUtf8("label_F4"));
        label_F4->setGeometry(QRect(361, 70, 100, 70));
        label_F4->setFont(font);
        label_F4->setAutoFillBackground(false);
        label_F4->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0%);"));
        label_F4->setAlignment(Qt::AlignCenter);
        label_F3 = new QLabel(Baker);
        label_F3->setObjectName(QString::fromUtf8("label_F3"));
        label_F3->setGeometry(QRect(240, 70, 100, 70));
        label_F3->setFont(font);
        label_F3->setAutoFillBackground(false);
        label_F3->setStyleSheet(QString::fromUtf8(""));
        label_F3->setAlignment(Qt::AlignCenter);
        label_F2 = new QLabel(Baker);
        label_F2->setObjectName(QString::fromUtf8("label_F2"));
        label_F2->setGeometry(QRect(131, 70, 100, 70));
        label_F2->setFont(font);
        label_F2->setAutoFillBackground(false);
        label_F2->setStyleSheet(QString::fromUtf8(""));
        label_F2->setAlignment(Qt::AlignCenter);
        label_F1 = new QLabel(Baker);
        label_F1->setObjectName(QString::fromUtf8("label_F1"));
        label_F1->setGeometry(QRect(10, 70, 100, 70));
        label_F1->setFont(font);
        label_F1->setAutoFillBackground(false);
        label_F1->setStyleSheet(QString::fromUtf8(""));
        label_F1->setAlignment(Qt::AlignCenter);
        graphicsView_2->raise();
        pushButton_Sangak->raise();
        pushButton_Taftoon->raise();
        pushButton_Lavash->raise();
        pushButton_Barbari->raise();
        pushButton_tost->raise();
        pushButton_baget->raise();
        pushButton_F1->raise();
        pushButton_F2->raise();
        pushButton_F3->raise();
        pushButton_F4->raise();
        pushButton_Up->raise();
        pushButton_Down->raise();
        pushButton_Price->raise();
        pushButton_Apply->raise();
        graphicsView->raise();
        pushButton_Number->raise();
        label_F4->raise();
        label_F3->raise();
        label_F2->raise();
        label_F1->raise();

        retranslateUi(Baker);

        QMetaObject::connectSlotsByName(Baker);
    } // setupUi

    void retranslateUi(QDialog *Baker)
    {
        Baker->setWindowTitle(QApplication::translate("Baker", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton_Sangak->setText(QString());
        pushButton_Taftoon->setText(QString());
        pushButton_Lavash->setText(QString());
        pushButton_Barbari->setText(QString());
        pushButton_tost->setText(QString());
        pushButton_baget->setText(QString());
        pushButton_F1->setText(QString());
        pushButton_F2->setText(QString());
        pushButton_F3->setText(QString());
        pushButton_F4->setText(QString());
        pushButton_Number->setText(QApplication::translate("Baker", "1", 0, QApplication::UnicodeUTF8));
        pushButton_Up->setText(QString());
        pushButton_Down->setText(QString());
        pushButton_Price->setText(QApplication::translate("Baker", "0", 0, QApplication::UnicodeUTF8));
        pushButton_Apply->setText(QString());
        label_F4->setText(QApplication::translate("Baker", "0", 0, QApplication::UnicodeUTF8));
        label_F3->setText(QApplication::translate("Baker", "0", 0, QApplication::UnicodeUTF8));
        label_F2->setText(QApplication::translate("Baker", "0", 0, QApplication::UnicodeUTF8));
        label_F1->setText(QApplication::translate("Baker", "0", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Baker: public Ui_Baker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAKER_H
