/********************************************************************************
** Form generated from reading UI file 'enquiry.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENQUIRY_H
#define UI_ENQUIRY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_enquiry
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *enquiry_sban;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *enquiry_acc_no;
    QGroupBox *enquiry_sbn;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *enquiry_name;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *enquiry_back;
    QPushButton *enquiry_search;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *enquiry_account_detail;
    QVBoxLayout *verticalLayout;
    QTableView *enquiry_table;
    QFrame *line;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *enquiry_maintenance;
    QPushButton *enquiry_statement;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *enquiry)
    {
        if (enquiry->objectName().isEmpty())
            enquiry->setObjectName("enquiry");
        enquiry->resize(578, 366);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/Resource/Login.png"), QSize(), QIcon::Normal, QIcon::Off);
        enquiry->setWindowIcon(icon);
        enquiry->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 255, 195);"));
        verticalLayout_2 = new QVBoxLayout(enquiry);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        enquiry_sban = new QGroupBox(enquiry);
        enquiry_sban->setObjectName("enquiry_sban");
        horizontalLayout_4 = new QHBoxLayout(enquiry_sban);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(enquiry_sban);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        enquiry_acc_no = new QLineEdit(enquiry_sban);
        enquiry_acc_no->setObjectName("enquiry_acc_no");
        enquiry_acc_no->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(enquiry_acc_no);


        horizontalLayout_4->addLayout(horizontalLayout);


        horizontalLayout_3->addWidget(enquiry_sban);

        enquiry_sbn = new QGroupBox(enquiry);
        enquiry_sbn->setObjectName("enquiry_sbn");
        horizontalLayout_5 = new QHBoxLayout(enquiry_sbn);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(enquiry_sbn);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        enquiry_name = new QLineEdit(enquiry_sbn);
        enquiry_name->setObjectName("enquiry_name");
        enquiry_name->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(enquiry_name);


        horizontalLayout_5->addLayout(horizontalLayout_2);


        horizontalLayout_3->addWidget(enquiry_sbn);


        verticalLayout_2->addLayout(horizontalLayout_3);

        line_2 = new QFrame(enquiry);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalSpacer = new QSpacerItem(168, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        enquiry_back = new QPushButton(enquiry);
        enquiry_back->setObjectName("enquiry_back");
        enquiry_back->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(enquiry_back);

        enquiry_search = new QPushButton(enquiry);
        enquiry_search->setObjectName("enquiry_search");
        enquiry_search->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(enquiry_search);


        horizontalLayout_9->addLayout(horizontalLayout_6);

        horizontalSpacer_2 = new QSpacerItem(188, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        verticalSpacer_2 = new QSpacerItem(0, 228, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_10->addItem(verticalSpacer_2);

        enquiry_account_detail = new QGroupBox(enquiry);
        enquiry_account_detail->setObjectName("enquiry_account_detail");
        verticalLayout = new QVBoxLayout(enquiry_account_detail);
        verticalLayout->setObjectName("verticalLayout");
        enquiry_table = new QTableView(enquiry_account_detail);
        enquiry_table->setObjectName("enquiry_table");
        enquiry_table->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(enquiry_table);

        line = new QFrame(enquiry_account_detail);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        enquiry_maintenance = new QPushButton(enquiry_account_detail);
        enquiry_maintenance->setObjectName("enquiry_maintenance");
        enquiry_maintenance->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_7->addWidget(enquiry_maintenance);

        enquiry_statement = new QPushButton(enquiry_account_detail);
        enquiry_statement->setObjectName("enquiry_statement");
        enquiry_statement->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_7->addWidget(enquiry_statement);


        horizontalLayout_8->addLayout(horizontalLayout_7);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_8);


        horizontalLayout_10->addWidget(enquiry_account_detail);

        verticalSpacer = new QSpacerItem(0, 218, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_10->addItem(verticalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_10);


        retranslateUi(enquiry);

        QMetaObject::connectSlotsByName(enquiry);
    } // setupUi

    void retranslateUi(QWidget *enquiry)
    {
        enquiry->setWindowTitle(QCoreApplication::translate("enquiry", "Enquiry", nullptr));
        enquiry_sban->setTitle(QCoreApplication::translate("enquiry", "Search By Account No:", nullptr));
        label_2->setText(QCoreApplication::translate("enquiry", "Account No:", nullptr));
        enquiry_sbn->setTitle(QCoreApplication::translate("enquiry", "Search By Name:", nullptr));
        label->setText(QCoreApplication::translate("enquiry", "Name:", nullptr));
        enquiry_back->setText(QCoreApplication::translate("enquiry", "Back", nullptr));
        enquiry_search->setText(QCoreApplication::translate("enquiry", "Search", nullptr));
        enquiry_account_detail->setTitle(QCoreApplication::translate("enquiry", "Account List", nullptr));
        enquiry_maintenance->setText(QCoreApplication::translate("enquiry", "Maintenance", nullptr));
        enquiry_statement->setText(QCoreApplication::translate("enquiry", "Statement", nullptr));
    } // retranslateUi

};

namespace Ui {
    class enquiry: public Ui_enquiry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENQUIRY_H
