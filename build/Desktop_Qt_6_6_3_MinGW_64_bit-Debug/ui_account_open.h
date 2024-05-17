/********************************************************************************
** Form generated from reading UI file 'account_open.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNT_OPEN_H
#define UI_ACCOUNT_OPEN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_account_open
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *ao_groupbox_acc;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *ao_acc_no;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *ao_type;
    QGroupBox *ao_groupbox_name_dob;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *ao_name;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_9;
    QDateEdit *ao_dob;
    QGroupBox *ao_groupbox_gender_mob;
    QHBoxLayout *horizontalLayout_13;
    QGroupBox *ao_gender;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QRadioButton *ao_male;
    QRadioButton *ao_female;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *ao_mobno;
    QGroupBox *ao_groupbox_address;
    QHBoxLayout *horizontalLayout_14;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QLineEdit *ao_nationality;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *ao_address;
    QGroupBox *ao_groupbox_parent;
    QHBoxLayout *horizontalLayout_15;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QLineEdit *ao_fname;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *ao_gfname;
    QFrame *line;
    QHBoxLayout *horizontalLayout_17;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *ao_back;
    QPushButton *ao_push;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *account_open)
    {
        if (account_open->objectName().isEmpty())
            account_open->setObjectName("account_open");
        account_open->resize(445, 309);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/Resource/Login.png"), QSize(), QIcon::Normal, QIcon::Off);
        account_open->setWindowIcon(icon);
        account_open->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 255, 195);"));
        verticalLayout = new QVBoxLayout(account_open);
        verticalLayout->setObjectName("verticalLayout");
        ao_groupbox_acc = new QGroupBox(account_open);
        ao_groupbox_acc->setObjectName("ao_groupbox_acc");
        horizontalLayout_11 = new QHBoxLayout(ao_groupbox_acc);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(ao_groupbox_acc);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        ao_acc_no = new QLineEdit(ao_groupbox_acc);
        ao_acc_no->setObjectName("ao_acc_no");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ao_acc_no->sizePolicy().hasHeightForWidth());
        ao_acc_no->setSizePolicy(sizePolicy);
        ao_acc_no->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(ao_acc_no);


        horizontalLayout_11->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(ao_groupbox_acc);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_2);

        ao_type = new QComboBox(ao_groupbox_acc);
        ao_type->addItem(QString());
        ao_type->addItem(QString());
        ao_type->setObjectName("ao_type");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ao_type->sizePolicy().hasHeightForWidth());
        ao_type->setSizePolicy(sizePolicy2);
        ao_type->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(ao_type);


        horizontalLayout_11->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(ao_groupbox_acc);

        ao_groupbox_name_dob = new QGroupBox(account_open);
        ao_groupbox_name_dob->setObjectName("ao_groupbox_name_dob");
        horizontalLayout_12 = new QHBoxLayout(ao_groupbox_name_dob);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(ao_groupbox_name_dob);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        ao_name = new QLineEdit(ao_groupbox_name_dob);
        ao_name->setObjectName("ao_name");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(ao_name->sizePolicy().hasHeightForWidth());
        ao_name->setSizePolicy(sizePolicy3);
        ao_name->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(ao_name);


        horizontalLayout_12->addLayout(horizontalLayout_3);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_9 = new QLabel(ao_groupbox_name_dob);
        label_9->setObjectName("label_9");

        horizontalLayout_10->addWidget(label_9);

        ao_dob = new QDateEdit(ao_groupbox_name_dob);
        ao_dob->setObjectName("ao_dob");
        sizePolicy2.setHeightForWidth(ao_dob->sizePolicy().hasHeightForWidth());
        ao_dob->setSizePolicy(sizePolicy2);
        ao_dob->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_10->addWidget(ao_dob);


        horizontalLayout_12->addLayout(horizontalLayout_10);


        verticalLayout->addWidget(ao_groupbox_name_dob);

        ao_groupbox_gender_mob = new QGroupBox(account_open);
        ao_groupbox_gender_mob->setObjectName("ao_groupbox_gender_mob");
        horizontalLayout_13 = new QHBoxLayout(ao_groupbox_gender_mob);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        ao_gender = new QGroupBox(ao_groupbox_gender_mob);
        ao_gender->setObjectName("ao_gender");
        horizontalLayout_5 = new QHBoxLayout(ao_gender);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(ao_gender);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        ao_male = new QRadioButton(ao_gender);
        ao_male->setObjectName("ao_male");
        ao_male->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_5->addWidget(ao_male);

        ao_female = new QRadioButton(ao_gender);
        ao_female->setObjectName("ao_female");
        ao_female->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_5->addWidget(ao_female);


        horizontalLayout_13->addWidget(ao_gender);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(ao_groupbox_gender_mob);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        ao_mobno = new QLineEdit(ao_groupbox_gender_mob);
        ao_mobno->setObjectName("ao_mobno");
        sizePolicy.setHeightForWidth(ao_mobno->sizePolicy().hasHeightForWidth());
        ao_mobno->setSizePolicy(sizePolicy);
        ao_mobno->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(ao_mobno);


        horizontalLayout_13->addLayout(horizontalLayout_6);


        verticalLayout->addWidget(ao_groupbox_gender_mob);

        ao_groupbox_address = new QGroupBox(account_open);
        ao_groupbox_address->setObjectName("ao_groupbox_address");
        horizontalLayout_14 = new QHBoxLayout(ao_groupbox_address);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_10 = new QLabel(ao_groupbox_address);
        label_10->setObjectName("label_10");

        horizontalLayout_9->addWidget(label_10);

        ao_nationality = new QLineEdit(ao_groupbox_address);
        ao_nationality->setObjectName("ao_nationality");
        ao_nationality->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_9->addWidget(ao_nationality);


        horizontalLayout_14->addLayout(horizontalLayout_9);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(ao_groupbox_address);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        ao_address = new QLineEdit(ao_groupbox_address);
        ao_address->setObjectName("ao_address");
        ao_address->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(ao_address);


        horizontalLayout_14->addLayout(horizontalLayout_4);


        verticalLayout->addWidget(ao_groupbox_address);

        ao_groupbox_parent = new QGroupBox(account_open);
        ao_groupbox_parent->setObjectName("ao_groupbox_parent");
        horizontalLayout_15 = new QHBoxLayout(ao_groupbox_parent);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_7 = new QLabel(ao_groupbox_parent);
        label_7->setObjectName("label_7");

        horizontalLayout_8->addWidget(label_7);

        ao_fname = new QLineEdit(ao_groupbox_parent);
        ao_fname->setObjectName("ao_fname");
        sizePolicy3.setHeightForWidth(ao_fname->sizePolicy().hasHeightForWidth());
        ao_fname->setSizePolicy(sizePolicy3);
        ao_fname->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_8->addWidget(ao_fname);


        horizontalLayout_15->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_8 = new QLabel(ao_groupbox_parent);
        label_8->setObjectName("label_8");

        horizontalLayout_7->addWidget(label_8);

        ao_gfname = new QLineEdit(ao_groupbox_parent);
        ao_gfname->setObjectName("ao_gfname");
        ao_gfname->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_7->addWidget(ao_gfname);


        horizontalLayout_15->addLayout(horizontalLayout_7);


        verticalLayout->addWidget(ao_groupbox_parent);

        line = new QFrame(account_open);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        ao_back = new QPushButton(account_open);
        ao_back->setObjectName("ao_back");
        ao_back->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_16->addWidget(ao_back);

        ao_push = new QPushButton(account_open);
        ao_push->setObjectName("ao_push");
        ao_push->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_16->addWidget(ao_push);


        horizontalLayout_17->addLayout(horizontalLayout_16);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_17);


        retranslateUi(account_open);

        QMetaObject::connectSlotsByName(account_open);
    } // setupUi

    void retranslateUi(QWidget *account_open)
    {
        account_open->setWindowTitle(QCoreApplication::translate("account_open", "Account Open", nullptr));
        ao_groupbox_acc->setTitle(QString());
        label->setText(QCoreApplication::translate("account_open", "Account No:", nullptr));
        label_2->setText(QCoreApplication::translate("account_open", "Account Type:", nullptr));
        ao_type->setItemText(0, QCoreApplication::translate("account_open", "Saving", nullptr));
        ao_type->setItemText(1, QCoreApplication::translate("account_open", "Current", nullptr));

        ao_groupbox_name_dob->setTitle(QString());
        label_3->setText(QCoreApplication::translate("account_open", "Name:", nullptr));
        label_9->setText(QCoreApplication::translate("account_open", "Date of Birth:", nullptr));
        ao_groupbox_gender_mob->setTitle(QString());
        ao_gender->setTitle(QString());
        label_5->setText(QCoreApplication::translate("account_open", "Gender:", nullptr));
        ao_male->setText(QCoreApplication::translate("account_open", "Male", nullptr));
        ao_female->setText(QCoreApplication::translate("account_open", "Female", nullptr));
        label_6->setText(QCoreApplication::translate("account_open", "Mobile No:", nullptr));
        ao_groupbox_address->setTitle(QString());
        label_10->setText(QCoreApplication::translate("account_open", "Nationality:", nullptr));
        label_4->setText(QCoreApplication::translate("account_open", "Address:", nullptr));
        ao_groupbox_parent->setTitle(QString());
        label_7->setText(QCoreApplication::translate("account_open", "Father Name:", nullptr));
        label_8->setText(QCoreApplication::translate("account_open", "Grand Father Name:", nullptr));
        ao_back->setText(QCoreApplication::translate("account_open", "Back", nullptr));
        ao_push->setText(QCoreApplication::translate("account_open", "Create Account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class account_open: public Ui_account_open {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNT_OPEN_H
