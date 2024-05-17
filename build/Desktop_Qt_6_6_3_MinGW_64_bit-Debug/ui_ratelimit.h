/********************************************************************************
** Form generated from reading UI file 'ratelimit.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RATELIMIT_H
#define UI_RATELIMIT_H

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

class Ui_ratelimit
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *rate_acc_no;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *rate_name;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *rate_address;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *rate_rate;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *rate_limit;
    QFrame *line;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *rate_back;
    QPushButton *rate_push;

    void setupUi(QWidget *ratelimit)
    {
        if (ratelimit->objectName().isEmpty())
            ratelimit->setObjectName("ratelimit");
        ratelimit->resize(257, 210);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/Resource/Login.png"), QSize(), QIcon::Normal, QIcon::Off);
        ratelimit->setWindowIcon(icon);
        ratelimit->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 255, 195);"));
        verticalLayout = new QVBoxLayout(ratelimit);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(ratelimit);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        rate_acc_no = new QLineEdit(ratelimit);
        rate_acc_no->setObjectName("rate_acc_no");
        rate_acc_no->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(rate_acc_no);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(ratelimit);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_2);

        rate_name = new QLineEdit(ratelimit);
        rate_name->setObjectName("rate_name");
        rate_name->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(rate_name);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(ratelimit);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_3);

        rate_address = new QLineEdit(ratelimit);
        rate_address->setObjectName("rate_address");
        rate_address->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(rate_address);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(ratelimit);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(label_4);

        rate_rate = new QLineEdit(ratelimit);
        rate_rate->setObjectName("rate_rate");
        rate_rate->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(rate_rate);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(ratelimit);
        label_5->setObjectName("label_5");
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(label_5);

        rate_limit = new QLineEdit(ratelimit);
        rate_limit->setObjectName("rate_limit");
        rate_limit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(rate_limit);


        verticalLayout->addLayout(horizontalLayout_5);

        line = new QFrame(ratelimit);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        rate_back = new QPushButton(ratelimit);
        rate_back->setObjectName("rate_back");
        rate_back->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(rate_back);

        rate_push = new QPushButton(ratelimit);
        rate_push->setObjectName("rate_push");
        rate_push->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(rate_push);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(ratelimit);

        QMetaObject::connectSlotsByName(ratelimit);
    } // setupUi

    void retranslateUi(QWidget *ratelimit)
    {
        ratelimit->setWindowTitle(QCoreApplication::translate("ratelimit", "Rate/Limit", nullptr));
        label->setText(QCoreApplication::translate("ratelimit", "Account No:", nullptr));
        label_2->setText(QCoreApplication::translate("ratelimit", "Name:", nullptr));
        label_3->setText(QCoreApplication::translate("ratelimit", "Address:", nullptr));
        label_4->setText(QCoreApplication::translate("ratelimit", "Rate:", nullptr));
        label_5->setText(QCoreApplication::translate("ratelimit", "Withdraw Limit:", nullptr));
        rate_back->setText(QCoreApplication::translate("ratelimit", "Back", nullptr));
        rate_push->setText(QCoreApplication::translate("ratelimit", "Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ratelimit: public Ui_ratelimit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RATELIMIT_H
