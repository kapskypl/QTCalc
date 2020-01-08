/********************************************************************************
** Form generated from reading UI file 'kalkulator.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KALKULATOR_H
#define UI_KALKULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KalkulatorClass
{
public:
    QWidget *centralWidget;
    QLineEdit *screen;
    QPushButton *num7;
    QPushButton *num8;
    QPushButton *num9;
    QPushButton *num4;
    QPushButton *num5;
    QPushButton *num6;
    QPushButton *num3;
    QPushButton *num2;
    QPushButton *num1;
    QPushButton *num0;
    QPushButton *num00;
    QPushButton *dot;
    QPushButton *add;
    QPushButton *equals;
    QPushButton *subtract;
    QPushButton *multiply;
    QPushButton *divide;
    QPushButton *square;
    QPushButton *percent;
    QPushButton *backspace;
    QPushButton *ac;
    QLineEdit *arythm;
    QPushButton *plusminus;

    void setupUi(QMainWindow *KalkulatorClass)
    {
        if (KalkulatorClass->objectName().isEmpty())
            KalkulatorClass->setObjectName(QString::fromUtf8("KalkulatorClass"));
        KalkulatorClass->resize(391, 270);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(KalkulatorClass->sizePolicy().hasHeightForWidth());
        KalkulatorClass->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(KalkulatorClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        screen = new QLineEdit(centralWidget);
        screen->setObjectName(QString::fromUtf8("screen"));
        screen->setGeometry(QRect(40, 10, 341, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        screen->setFont(font);
        screen->setStyleSheet(QString::fromUtf8("background-color: grey; border: 0; color: white;"));
        screen->setMaxLength(9);
        screen->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        screen->setReadOnly(true);
        num7 = new QPushButton(centralWidget);
        num7->setObjectName(QString::fromUtf8("num7"));
        num7->setGeometry(QRect(10, 110, 93, 31));
        num8 = new QPushButton(centralWidget);
        num8->setObjectName(QString::fromUtf8("num8"));
        num8->setGeometry(QRect(110, 110, 93, 31));
        num9 = new QPushButton(centralWidget);
        num9->setObjectName(QString::fromUtf8("num9"));
        num9->setGeometry(QRect(210, 110, 93, 31));
        num4 = new QPushButton(centralWidget);
        num4->setObjectName(QString::fromUtf8("num4"));
        num4->setGeometry(QRect(10, 150, 93, 31));
        num5 = new QPushButton(centralWidget);
        num5->setObjectName(QString::fromUtf8("num5"));
        num5->setGeometry(QRect(110, 150, 93, 31));
        num6 = new QPushButton(centralWidget);
        num6->setObjectName(QString::fromUtf8("num6"));
        num6->setGeometry(QRect(210, 150, 93, 31));
        num3 = new QPushButton(centralWidget);
        num3->setObjectName(QString::fromUtf8("num3"));
        num3->setGeometry(QRect(10, 190, 93, 31));
        num2 = new QPushButton(centralWidget);
        num2->setObjectName(QString::fromUtf8("num2"));
        num2->setGeometry(QRect(110, 190, 93, 31));
        num1 = new QPushButton(centralWidget);
        num1->setObjectName(QString::fromUtf8("num1"));
        num1->setGeometry(QRect(210, 190, 93, 31));
        num0 = new QPushButton(centralWidget);
        num0->setObjectName(QString::fromUtf8("num0"));
        num0->setGeometry(QRect(10, 230, 93, 31));
        num00 = new QPushButton(centralWidget);
        num00->setObjectName(QString::fromUtf8("num00"));
        num00->setGeometry(QRect(110, 230, 93, 31));
        dot = new QPushButton(centralWidget);
        dot->setObjectName(QString::fromUtf8("dot"));
        dot->setGeometry(QRect(210, 230, 93, 31));
        add = new QPushButton(centralWidget);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(310, 190, 31, 71));
        equals = new QPushButton(centralWidget);
        equals->setObjectName(QString::fromUtf8("equals"));
        equals->setGeometry(QRect(350, 230, 31, 31));
        subtract = new QPushButton(centralWidget);
        subtract->setObjectName(QString::fromUtf8("subtract"));
        subtract->setGeometry(QRect(350, 190, 31, 31));
        multiply = new QPushButton(centralWidget);
        multiply->setObjectName(QString::fromUtf8("multiply"));
        multiply->setGeometry(QRect(310, 150, 31, 31));
        divide = new QPushButton(centralWidget);
        divide->setObjectName(QString::fromUtf8("divide"));
        divide->setGeometry(QRect(350, 150, 31, 31));
        square = new QPushButton(centralWidget);
        square->setObjectName(QString::fromUtf8("square"));
        square->setGeometry(QRect(310, 110, 31, 31));
        percent = new QPushButton(centralWidget);
        percent->setObjectName(QString::fromUtf8("percent"));
        percent->setGeometry(QRect(350, 110, 31, 31));
        backspace = new QPushButton(centralWidget);
        backspace->setObjectName(QString::fromUtf8("backspace"));
        backspace->setGeometry(QRect(210, 70, 91, 31));
        ac = new QPushButton(centralWidget);
        ac->setObjectName(QString::fromUtf8("ac"));
        ac->setGeometry(QRect(10, 70, 191, 31));
        arythm = new QLineEdit(centralWidget);
        arythm->setObjectName(QString::fromUtf8("arythm"));
        arythm->setGeometry(QRect(10, 10, 31, 51));
        arythm->setStyleSheet(QString::fromUtf8("background-color: grey; border: 0; color: white;"));
        arythm->setAlignment(Qt::AlignCenter);
        arythm->setReadOnly(true);
        plusminus = new QPushButton(centralWidget);
        plusminus->setObjectName(QString::fromUtf8("plusminus"));
        plusminus->setGeometry(QRect(310, 70, 71, 31));
        KalkulatorClass->setCentralWidget(centralWidget);

        retranslateUi(KalkulatorClass);

        QMetaObject::connectSlotsByName(KalkulatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *KalkulatorClass)
    {
        KalkulatorClass->setWindowTitle(QApplication::translate("KalkulatorClass", "Kalkulator", nullptr));
        screen->setText(QApplication::translate("KalkulatorClass", "0", nullptr));
        num7->setText(QApplication::translate("KalkulatorClass", "7", nullptr));
        num8->setText(QApplication::translate("KalkulatorClass", "8", nullptr));
        num9->setText(QApplication::translate("KalkulatorClass", "9", nullptr));
        num4->setText(QApplication::translate("KalkulatorClass", "4", nullptr));
        num5->setText(QApplication::translate("KalkulatorClass", "5", nullptr));
        num6->setText(QApplication::translate("KalkulatorClass", "6", nullptr));
        num3->setText(QApplication::translate("KalkulatorClass", "3", nullptr));
        num2->setText(QApplication::translate("KalkulatorClass", "2", nullptr));
        num1->setText(QApplication::translate("KalkulatorClass", "1", nullptr));
        num0->setText(QApplication::translate("KalkulatorClass", "0", nullptr));
        num00->setText(QApplication::translate("KalkulatorClass", "00", nullptr));
        dot->setText(QApplication::translate("KalkulatorClass", ".", nullptr));
        add->setText(QApplication::translate("KalkulatorClass", "+", nullptr));
        equals->setText(QApplication::translate("KalkulatorClass", "=", nullptr));
        subtract->setText(QApplication::translate("KalkulatorClass", "\342\200\224", nullptr));
        multiply->setText(QApplication::translate("KalkulatorClass", "X", nullptr));
        divide->setText(QApplication::translate("KalkulatorClass", "\303\267", nullptr));
        square->setText(QApplication::translate("KalkulatorClass", "\342\210\232", nullptr));
        percent->setText(QApplication::translate("KalkulatorClass", "%", nullptr));
        backspace->setText(QApplication::translate("KalkulatorClass", "<-", nullptr));
        ac->setText(QApplication::translate("KalkulatorClass", "AC", nullptr));
        plusminus->setText(QApplication::translate("KalkulatorClass", "+/-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KalkulatorClass: public Ui_KalkulatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KALKULATOR_H
