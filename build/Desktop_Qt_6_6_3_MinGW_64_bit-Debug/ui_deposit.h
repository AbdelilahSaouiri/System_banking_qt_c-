/********************************************************************************
** Form generated from reading UI file 'deposit.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSIT_H
#define UI_DEPOSIT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deposit
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *deposit_acc_no;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *deposit_amount;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QDateEdit *deposit_date;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *deposit_narration;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *deposit_cancel;
    QPushButton *deposit_push;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *deposit_detail;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_5;
    QLineEdit *deposit_name;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_6;
    QLineEdit *deposit_address;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_7;
    QLineEdit *deposit_balance;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_8;
    QLineEdit *deposit_password;

    void setupUi(QWidget *deposit)
    {
        if (deposit->objectName().isEmpty())
            deposit->setObjectName("deposit");
        deposit->resize(429, 307);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/Resource/Login.png"), QSize(), QIcon::Normal, QIcon::Off);
        deposit->setWindowIcon(icon);
        deposit->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 255, 195);"));
        verticalLayout_3 = new QVBoxLayout(deposit);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(deposit);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label);

        deposit_acc_no = new QLineEdit(deposit);
        deposit_acc_no->setObjectName("deposit_acc_no");
        deposit_acc_no->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(deposit_acc_no);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(deposit);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_2);

        deposit_amount = new QLineEdit(deposit);
        deposit_amount->setObjectName("deposit_amount");
        deposit_amount->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(deposit_amount);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(deposit);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_3);

        deposit_date = new QDateEdit(deposit);
        deposit_date->setObjectName("deposit_date");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(deposit_date->sizePolicy().hasHeightForWidth());
        deposit_date->setSizePolicy(sizePolicy1);
        deposit_date->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(deposit_date);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(deposit);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(label_4);

        deposit_narration = new QLineEdit(deposit);
        deposit_narration->setObjectName("deposit_narration");
        deposit_narration->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(deposit_narration);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        deposit_cancel = new QPushButton(deposit);
        deposit_cancel->setObjectName("deposit_cancel");
        deposit_cancel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(deposit_cancel);

        deposit_push = new QPushButton(deposit);
        deposit_push->setObjectName("deposit_push");
        deposit_push->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(deposit_push);


        verticalLayout_2->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_7->addItem(verticalSpacer);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        deposit_detail = new QGroupBox(deposit);
        deposit_detail->setObjectName("deposit_detail");
        verticalLayout = new QVBoxLayout(deposit_detail);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_5 = new QLabel(deposit_detail);
        label_5->setObjectName("label_5");

        horizontalLayout_10->addWidget(label_5);

        deposit_name = new QLineEdit(deposit_detail);
        deposit_name->setObjectName("deposit_name");
        deposit_name->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_10->addWidget(deposit_name);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_6 = new QLabel(deposit_detail);
        label_6->setObjectName("label_6");

        horizontalLayout_11->addWidget(label_6);

        deposit_address = new QLineEdit(deposit_detail);
        deposit_address->setObjectName("deposit_address");
        deposit_address->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_11->addWidget(deposit_address);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_7 = new QLabel(deposit_detail);
        label_7->setObjectName("label_7");

        horizontalLayout_12->addWidget(label_7);

        deposit_balance = new QLineEdit(deposit_detail);
        deposit_balance->setObjectName("deposit_balance");
        deposit_balance->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_12->addWidget(deposit_balance);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_8 = new QLabel(deposit_detail);
        label_8->setObjectName("label_8");

        horizontalLayout_13->addWidget(label_8);

        deposit_password = new QLineEdit(deposit_detail);
        deposit_password->setObjectName("deposit_password");
        deposit_password->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_13->addWidget(deposit_password);


        verticalLayout->addLayout(horizontalLayout_13);


        horizontalLayout_7->addWidget(deposit_detail);


        verticalLayout_3->addLayout(horizontalLayout_7);


        retranslateUi(deposit);

        QMetaObject::connectSlotsByName(deposit);
    } // setupUi

    void retranslateUi(QWidget *deposit)
    {
        deposit->setWindowTitle(QCoreApplication::translate("deposit", "Form", nullptr));
        label->setText(QCoreApplication::translate("deposit", "Account No:", nullptr));
        label_2->setText(QCoreApplication::translate("deposit", "Amount:", nullptr));
        label_3->setText(QCoreApplication::translate("deposit", "Date:", nullptr));
        label_4->setText(QCoreApplication::translate("deposit", "Narration", nullptr));
        deposit_cancel->setText(QCoreApplication::translate("deposit", "Cancel", nullptr));
        deposit_push->setText(QCoreApplication::translate("deposit", "Deposit", nullptr));
        deposit_detail->setTitle(QCoreApplication::translate("deposit", "Detail:", nullptr));
        label_5->setText(QCoreApplication::translate("deposit", "Name:", nullptr));
        label_6->setText(QCoreApplication::translate("deposit", "Address:", nullptr));
        label_7->setText(QCoreApplication::translate("deposit", "Balance:", nullptr));
        label_8->setText(QCoreApplication::translate("deposit", "Password:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deposit: public Ui_deposit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOSIT_H
