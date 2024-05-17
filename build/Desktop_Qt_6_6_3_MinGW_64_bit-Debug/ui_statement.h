/********************************************************************************
** Form generated from reading UI file 'statement.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATEMENT_H
#define UI_STATEMENT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
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

class Ui_statement
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *statement_acc_no;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *statement_name;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *statement_address;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_11;
    QGroupBox *statement_date;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_4;
    QDateEdit *statement_from;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_5;
    QDateEdit *statement_to;
    QSpacerItem *horizontalSpacer_6;
    QFrame *line;
    QTableView *statement_table;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *statement_back;
    QPushButton *statement_show;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *statement)
    {
        if (statement->objectName().isEmpty())
            statement->setObjectName("statement");
        statement->resize(581, 362);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/Resource/Login.png"), QSize(), QIcon::Normal, QIcon::Off);
        statement->setWindowIcon(icon);
        statement->setAutoFillBackground(false);
        statement->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 255, 195);"));
        verticalLayout = new QVBoxLayout(statement);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(statement);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        statement_acc_no = new QLineEdit(statement);
        statement_acc_no->setObjectName("statement_acc_no");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(statement_acc_no->sizePolicy().hasHeightForWidth());
        statement_acc_no->setSizePolicy(sizePolicy1);
        statement_acc_no->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(statement_acc_no);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(statement);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_2);

        statement_name = new QLineEdit(statement);
        statement_name->setObjectName("statement_name");
        sizePolicy1.setHeightForWidth(statement_name->sizePolicy().hasHeightForWidth());
        statement_name->setSizePolicy(sizePolicy1);
        statement_name->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(statement_name);


        horizontalLayout_5->addLayout(horizontalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(statement);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_3);

        statement_address = new QLineEdit(statement);
        statement_address->setObjectName("statement_address");
        statement_address->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(statement_address);


        horizontalLayout_6->addLayout(horizontalLayout_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        statement_date = new QGroupBox(statement);
        statement_date->setObjectName("statement_date");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(statement_date->sizePolicy().hasHeightForWidth());
        statement_date->setSizePolicy(sizePolicy2);
        horizontalLayout_10 = new QHBoxLayout(statement_date);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_4 = new QLabel(statement_date);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(label_4);

        statement_from = new QDateEdit(statement_date);
        statement_from->setObjectName("statement_from");
        sizePolicy1.setHeightForWidth(statement_from->sizePolicy().hasHeightForWidth());
        statement_from->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(statement_from);


        horizontalLayout_10->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_5 = new QLabel(statement_date);
        label_5->setObjectName("label_5");
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        horizontalLayout_9->addWidget(label_5);

        statement_to = new QDateEdit(statement_date);
        statement_to->setObjectName("statement_to");
        sizePolicy1.setHeightForWidth(statement_to->sizePolicy().hasHeightForWidth());
        statement_to->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(statement_to);


        horizontalLayout_10->addLayout(horizontalLayout_9);


        horizontalLayout_11->addWidget(statement_date);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_11);

        line = new QFrame(statement);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        statement_table = new QTableView(statement);
        statement_table->setObjectName("statement_table");
        statement_table->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(statement_table);

        line_2 = new QFrame(statement);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        statement_back = new QPushButton(statement);
        statement_back->setObjectName("statement_back");
        statement_back->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_7->addWidget(statement_back);

        statement_show = new QPushButton(statement);
        statement_show->setObjectName("statement_show");
        statement_show->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_7->addWidget(statement_show);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_7);


        retranslateUi(statement);

        QMetaObject::connectSlotsByName(statement);
    } // setupUi

    void retranslateUi(QWidget *statement)
    {
        statement->setWindowTitle(QCoreApplication::translate("statement", "Statement", nullptr));
        label->setText(QCoreApplication::translate("statement", "Account No:", nullptr));
        label_2->setText(QCoreApplication::translate("statement", "Name:", nullptr));
        label_3->setText(QCoreApplication::translate("statement", "Address:", nullptr));
        statement_date->setTitle(QCoreApplication::translate("statement", "Date:", nullptr));
        label_4->setText(QCoreApplication::translate("statement", "From:", nullptr));
        label_5->setText(QCoreApplication::translate("statement", "To:", nullptr));
        statement_back->setText(QCoreApplication::translate("statement", "Back", nullptr));
        statement_show->setText(QCoreApplication::translate("statement", "Show", nullptr));
    } // retranslateUi

};

namespace Ui {
    class statement: public Ui_statement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATEMENT_H
