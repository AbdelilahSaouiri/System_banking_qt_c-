/********************************************************************************
** Form generated from reading UI file 'multipleentry.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTIPLEENTRY_H
#define UI_MULTIPLEENTRY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_multipleentry
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_16;
    QGroupBox *multipleentry_from;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *multipleentry_acc_no_from;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *multipleentry_name_from;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *multipleentry_address_from;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_12;
    QLineEdit *multipleentry_balance_from;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLineEdit *multipleentry_password_from;
    QGroupBox *multipleentry_to;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLineEdit *multipleentry_acc_no_to;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLineEdit *multipleentry_name_to;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QLineEdit *multipleentry_address_to;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_11;
    QLineEdit *multipleentry_balance_to;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *multipleentry_amount;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QDateEdit *multipleentry_date;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QLineEdit *multipleentry_narration;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *multipleentry_back;
    QPushButton *multipleentry_deposit;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *multipleentry)
    {
        if (multipleentry->objectName().isEmpty())
            multipleentry->setObjectName("multipleentry");
        multipleentry->resize(467, 337);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/Resource/Login.png"), QSize(), QIcon::Normal, QIcon::Off);
        multipleentry->setWindowIcon(icon);
        multipleentry->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 255, 195);"));
        verticalLayout_3 = new QVBoxLayout(multipleentry);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        multipleentry_from = new QGroupBox(multipleentry);
        multipleentry_from->setObjectName("multipleentry_from");
        verticalLayout = new QVBoxLayout(multipleentry_from);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(multipleentry_from);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        multipleentry_acc_no_from = new QLineEdit(multipleentry_from);
        multipleentry_acc_no_from->setObjectName("multipleentry_acc_no_from");
        multipleentry_acc_no_from->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(multipleentry_acc_no_from);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(multipleentry_from);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_3);

        multipleentry_name_from = new QLineEdit(multipleentry_from);
        multipleentry_name_from->setObjectName("multipleentry_name_from");
        multipleentry_name_from->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(multipleentry_name_from);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_5 = new QLabel(multipleentry_from);
        label_5->setObjectName("label_5");
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_5);

        multipleentry_address_from = new QLineEdit(multipleentry_from);
        multipleentry_address_from->setObjectName("multipleentry_address_from");
        multipleentry_address_from->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(multipleentry_address_from);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        label_12 = new QLabel(multipleentry_from);
        label_12->setObjectName("label_12");
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);

        horizontalLayout_18->addWidget(label_12);

        multipleentry_balance_from = new QLineEdit(multipleentry_from);
        multipleentry_balance_from->setObjectName("multipleentry_balance_from");
        multipleentry_balance_from->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_18->addWidget(multipleentry_balance_from);


        verticalLayout->addLayout(horizontalLayout_18);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_7 = new QLabel(multipleentry_from);
        label_7->setObjectName("label_7");
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(label_7);

        multipleentry_password_from = new QLineEdit(multipleentry_from);
        multipleentry_password_from->setObjectName("multipleentry_password_from");
        multipleentry_password_from->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(multipleentry_password_from);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout_16->addWidget(multipleentry_from);

        multipleentry_to = new QGroupBox(multipleentry);
        multipleentry_to->setObjectName("multipleentry_to");
        verticalLayout_2 = new QVBoxLayout(multipleentry_to);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_2 = new QLabel(multipleentry_to);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(label_2);

        multipleentry_acc_no_to = new QLineEdit(multipleentry_to);
        multipleentry_acc_no_to->setObjectName("multipleentry_acc_no_to");
        multipleentry_acc_no_to->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(multipleentry_acc_no_to);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_4 = new QLabel(multipleentry_to);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(label_4);

        multipleentry_name_to = new QLineEdit(multipleentry_to);
        multipleentry_name_to->setObjectName("multipleentry_name_to");
        multipleentry_name_to->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(multipleentry_name_to);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_6 = new QLabel(multipleentry_to);
        label_6->setObjectName("label_6");
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(label_6);

        multipleentry_address_to = new QLineEdit(multipleentry_to);
        multipleentry_address_to->setObjectName("multipleentry_address_to");
        multipleentry_address_to->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_7->addWidget(multipleentry_address_to);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        label_11 = new QLabel(multipleentry_to);
        label_11->setObjectName("label_11");
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);

        horizontalLayout_17->addWidget(label_11);

        multipleentry_balance_to = new QLineEdit(multipleentry_to);
        multipleentry_balance_to->setObjectName("multipleentry_balance_to");
        multipleentry_balance_to->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_17->addWidget(multipleentry_balance_to);


        verticalLayout_2->addLayout(horizontalLayout_17);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_16->addWidget(multipleentry_to);


        verticalLayout_3->addLayout(horizontalLayout_16);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_8 = new QLabel(multipleentry);
        label_8->setObjectName("label_8");
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(label_8);

        multipleentry_amount = new QLineEdit(multipleentry);
        multipleentry_amount->setObjectName("multipleentry_amount");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(multipleentry_amount->sizePolicy().hasHeightForWidth());
        multipleentry_amount->setSizePolicy(sizePolicy1);
        multipleentry_amount->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_8->addWidget(multipleentry_amount);


        horizontalLayout_11->addLayout(horizontalLayout_8);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_9 = new QLabel(multipleentry);
        label_9->setObjectName("label_9");
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        horizontalLayout_9->addWidget(label_9);

        multipleentry_date = new QDateEdit(multipleentry);
        multipleentry_date->setObjectName("multipleentry_date");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(multipleentry_date->sizePolicy().hasHeightForWidth());
        multipleentry_date->setSizePolicy(sizePolicy2);

        horizontalLayout_9->addWidget(multipleentry_date);


        horizontalLayout_12->addLayout(horizontalLayout_9);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_10 = new QLabel(multipleentry);
        label_10->setObjectName("label_10");
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);

        horizontalLayout_10->addWidget(label_10);

        multipleentry_narration = new QLineEdit(multipleentry);
        multipleentry_narration->setObjectName("multipleentry_narration");
        multipleentry_narration->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_10->addWidget(multipleentry_narration);


        horizontalLayout_13->addLayout(horizontalLayout_10);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_13);

        line = new QFrame(multipleentry);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_4);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        multipleentry_back = new QPushButton(multipleentry);
        multipleentry_back->setObjectName("multipleentry_back");
        multipleentry_back->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_14->addWidget(multipleentry_back);

        multipleentry_deposit = new QPushButton(multipleentry);
        multipleentry_deposit->setObjectName("multipleentry_deposit");
        multipleentry_deposit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_14->addWidget(multipleentry_deposit);


        horizontalLayout_15->addLayout(horizontalLayout_14);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_15);


        retranslateUi(multipleentry);

        QMetaObject::connectSlotsByName(multipleentry);
    } // setupUi

    void retranslateUi(QWidget *multipleentry)
    {
        multipleentry->setWindowTitle(QCoreApplication::translate("multipleentry", "Multiple Entry", nullptr));
        multipleentry_from->setTitle(QCoreApplication::translate("multipleentry", "From", nullptr));
        label->setText(QCoreApplication::translate("multipleentry", "Account No:", nullptr));
        label_3->setText(QCoreApplication::translate("multipleentry", "Name:", nullptr));
        label_5->setText(QCoreApplication::translate("multipleentry", "Address:", nullptr));
        label_12->setText(QCoreApplication::translate("multipleentry", "Balance:", nullptr));
        label_7->setText(QCoreApplication::translate("multipleentry", "Password:", nullptr));
        multipleentry_to->setTitle(QCoreApplication::translate("multipleentry", "To", nullptr));
        label_2->setText(QCoreApplication::translate("multipleentry", "Account No:", nullptr));
        label_4->setText(QCoreApplication::translate("multipleentry", "Name:", nullptr));
        label_6->setText(QCoreApplication::translate("multipleentry", "Address:", nullptr));
        label_11->setText(QCoreApplication::translate("multipleentry", "Balance:", nullptr));
        label_8->setText(QCoreApplication::translate("multipleentry", "Amount:", nullptr));
        label_9->setText(QCoreApplication::translate("multipleentry", "Date:", nullptr));
        label_10->setText(QCoreApplication::translate("multipleentry", "Narration:", nullptr));
        multipleentry_back->setText(QCoreApplication::translate("multipleentry", "Back", nullptr));
        multipleentry_deposit->setText(QCoreApplication::translate("multipleentry", "Deposit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class multipleentry: public Ui_multipleentry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTIPLEENTRY_H
