/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_sign;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_multiply;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_subtract;
    QPushButton *pushButton_2;
    QPushButton *pushButton_1;
    QPushButton *pushButton_3;
    QPushButton *pushButton_add;
    QPushButton *pushButton_0;
    QPushButton *pushButton_decimal;
    QPushButton *pushButton_equals;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(241, 361);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 241, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Lato")});
        font.setPointSize(17);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel \n"
"{\n"
"  	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  	border: 1px solid gray;\n"
"}"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(0, 60, 61, 61));
        pushButton_clear->setFont(font);
        pushButton_clear->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_sign = new QPushButton(centralwidget);
        pushButton_sign->setObjectName(QString::fromUtf8("pushButton_sign"));
        pushButton_sign->setGeometry(QRect(60, 60, 61, 61));
        pushButton_sign->setFont(font);
        pushButton_sign->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_percent = new QPushButton(centralwidget);
        pushButton_percent->setObjectName(QString::fromUtf8("pushButton_percent"));
        pushButton_percent->setGeometry(QRect(120, 60, 61, 61));
        pushButton_percent->setFont(font);
        pushButton_percent->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_divide = new QPushButton(centralwidget);
        pushButton_divide->setObjectName(QString::fromUtf8("pushButton_divide"));
        pushButton_divide->setGeometry(QRect(180, 60, 61, 61));
        pushButton_divide->setFont(font);
        pushButton_divide->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(60, 120, 61, 61));
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(0, 120, 61, 61));
        pushButton_7->setFont(font);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(120, 120, 61, 61));
        pushButton_9->setFont(font);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_multiply = new QPushButton(centralwidget);
        pushButton_multiply->setObjectName(QString::fromUtf8("pushButton_multiply"));
        pushButton_multiply->setGeometry(QRect(180, 120, 61, 61));
        pushButton_multiply->setFont(font);
        pushButton_multiply->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(60, 180, 61, 61));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 180, 61, 61));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(120, 180, 61, 61));
        pushButton_6->setFont(font);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_subtract = new QPushButton(centralwidget);
        pushButton_subtract->setObjectName(QString::fromUtf8("pushButton_subtract"));
        pushButton_subtract->setGeometry(QRect(180, 180, 61, 61));
        pushButton_subtract->setFont(font);
        pushButton_subtract->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 240, 61, 61));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(0, 240, 61, 61));
        pushButton_1->setFont(font);
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(120, 240, 61, 61));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_add = new QPushButton(centralwidget);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        pushButton_add->setGeometry(QRect(180, 240, 61, 61));
        pushButton_add->setFont(font);
        pushButton_add->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(0, 300, 121, 61));
        pushButton_0->setFont(font);
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_decimal = new QPushButton(centralwidget);
        pushButton_decimal->setObjectName(QString::fromUtf8("pushButton_decimal"));
        pushButton_decimal->setGeometry(QRect(120, 300, 61, 61));
        pushButton_decimal->setFont(font);
        pushButton_decimal->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_decimal->setIconSize(QSize(16, 16));
        pushButton_equals = new QPushButton(centralwidget);
        pushButton_equals->setObjectName(QString::fromUtf8("pushButton_equals"));
        pushButton_equals->setGeometry(QRect(180, 300, 61, 61));
        pushButton_equals->setFont(font);
        pushButton_equals->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        Calculator->setCentralWidget(centralwidget);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("Calculator", "C", nullptr));
        pushButton_sign->setText(QCoreApplication::translate("Calculator", "+/-", nullptr));
        pushButton_percent->setText(QCoreApplication::translate("Calculator", "%", nullptr));
        pushButton_divide->setText(QCoreApplication::translate("Calculator", "\303\267", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        pushButton_multiply->setText(QCoreApplication::translate("Calculator", "\303\227", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        pushButton_subtract->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        pushButton_1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        pushButton_add->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        pushButton_0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        pushButton_decimal->setText(QCoreApplication::translate("Calculator", ".", nullptr));
        pushButton_equals->setText(QCoreApplication::translate("Calculator", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
