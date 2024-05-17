/********************************************************************************
** Form generated from reading UI file 'twodaylist.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TWODAYLIST_H
#define UI_TWODAYLIST_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_twodaylist
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateEdit *twodaylist_from;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDateEdit *twodaylist_to;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QTableView *twodaylist_table;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *twodaylist_back;
    QPushButton *twodaylist_show;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *twodaylist)
    {
        if (twodaylist->objectName().isEmpty())
            twodaylist->setObjectName("twodaylist");
        twodaylist->resize(705, 319);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/Resource/Login.png"), QSize(), QIcon::Normal, QIcon::Off);
        twodaylist->setWindowIcon(icon);
        twodaylist->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 255, 195);"));
        verticalLayout = new QVBoxLayout(twodaylist);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        groupBox = new QGroupBox(twodaylist);
        groupBox->setObjectName("groupBox");
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        twodaylist_from = new QDateEdit(groupBox);
        twodaylist_from->setObjectName("twodaylist_from");
        twodaylist_from->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(twodaylist_from);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        twodaylist_to = new QDateEdit(groupBox);
        twodaylist_to->setObjectName("twodaylist_to");
        twodaylist_to->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(twodaylist_to);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_4->addWidget(groupBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_4);

        line = new QFrame(twodaylist);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        twodaylist_table = new QTableView(twodaylist);
        twodaylist_table->setObjectName("twodaylist_table");
        twodaylist_table->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(twodaylist_table);

        line_2 = new QFrame(twodaylist);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        twodaylist_back = new QPushButton(twodaylist);
        twodaylist_back->setObjectName("twodaylist_back");
        twodaylist_back->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(twodaylist_back);

        twodaylist_show = new QPushButton(twodaylist);
        twodaylist_show->setObjectName("twodaylist_show");
        twodaylist_show->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(twodaylist_show);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(twodaylist);

        QMetaObject::connectSlotsByName(twodaylist);
    } // setupUi

    void retranslateUi(QWidget *twodaylist)
    {
        twodaylist->setWindowTitle(QCoreApplication::translate("twodaylist", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("twodaylist", "Date:", nullptr));
        label->setText(QCoreApplication::translate("twodaylist", "From:", nullptr));
        label_2->setText(QCoreApplication::translate("twodaylist", "To:", nullptr));
        twodaylist_back->setText(QCoreApplication::translate("twodaylist", "Close", nullptr));
        twodaylist_show->setText(QCoreApplication::translate("twodaylist", "Show", nullptr));
    } // retranslateUi

};

namespace Ui {
    class twodaylist: public Ui_twodaylist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TWODAYLIST_H
