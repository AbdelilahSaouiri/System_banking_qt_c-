/********************************************************************************
** Form generated from reading UI file 'password.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORD_H
#define UI_PASSWORD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Password
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *password_account_no;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *password_name;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *password_address;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *password_pass;
    QFrame *line;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *password_back;
    QPushButton *password_push;

    void setupUi(QWidget *Password)
    {
        if (Password->objectName().isEmpty())
            Password->setObjectName("Password");
        Password->resize(231, 164);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/Resource/Login.png"), QSize(), QIcon::Normal, QIcon::Off);
        Password->setWindowIcon(icon);
        Password->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 255, 195);"));
        verticalLayout = new QVBoxLayout(Password);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(Password);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        password_account_no = new QLineEdit(Password);
        password_account_no->setObjectName("password_account_no");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(password_account_no->sizePolicy().hasHeightForWidth());
        password_account_no->setSizePolicy(sizePolicy1);
        password_account_no->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(password_account_no);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(Password);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_2);

        password_name = new QLineEdit(Password);
        password_name->setObjectName("password_name");
        password_name->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(password_name);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(Password);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_3);

        password_address = new QLineEdit(Password);
        password_address->setObjectName("password_address");
        password_address->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(password_address);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(Password);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(label_4);

        password_pass = new QLineEdit(Password);
        password_pass->setObjectName("password_pass");
        password_pass->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(password_pass);


        verticalLayout->addLayout(horizontalLayout_4);

        line = new QFrame(Password);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        password_back = new QPushButton(Password);
        password_back->setObjectName("password_back");
        password_back->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(password_back);

        password_push = new QPushButton(Password);
        password_push->setObjectName("password_push");
        password_push->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(password_push);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(Password);

        QMetaObject::connectSlotsByName(Password);
    } // setupUi

    void retranslateUi(QWidget *Password)
    {
        Password->setWindowTitle(QCoreApplication::translate("Password", "Password", nullptr));
        label->setText(QCoreApplication::translate("Password", "Account No:", nullptr));
        label_2->setText(QCoreApplication::translate("Password", "Name:", nullptr));
        label_3->setText(QCoreApplication::translate("Password", "Address:", nullptr));
        label_4->setText(QCoreApplication::translate("Password", "Password:", nullptr));
        password_back->setText(QCoreApplication::translate("Password", "Back", nullptr));
        password_push->setText(QCoreApplication::translate("Password", "Set New Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Password: public Ui_Password {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORD_H
