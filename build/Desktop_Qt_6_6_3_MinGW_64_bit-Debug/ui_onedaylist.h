/********************************************************************************
** Form generated from reading UI file 'onedaylist.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONEDAYLIST_H
#define UI_ONEDAYLIST_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_onedaylist
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateEdit *onedaylist_date;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QTableView *onedaylist_table;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *onedaylist_back;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *onedaylist)
    {
        if (onedaylist->objectName().isEmpty())
            onedaylist->setObjectName("onedaylist");
        onedaylist->resize(703, 281);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/Resource/Login.png"), QSize(), QIcon::Normal, QIcon::Off);
        onedaylist->setWindowIcon(icon);
        onedaylist->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 255, 195);"));
        verticalLayout = new QVBoxLayout(onedaylist);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(onedaylist);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        onedaylist_date = new QDateEdit(onedaylist);
        onedaylist_date->setObjectName("onedaylist_date");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(onedaylist_date->sizePolicy().hasHeightForWidth());
        onedaylist_date->setSizePolicy(sizePolicy);
        onedaylist_date->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(onedaylist_date);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        line = new QFrame(onedaylist);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        onedaylist_table = new QTableView(onedaylist);
        onedaylist_table->setObjectName("onedaylist_table");
        onedaylist_table->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(onedaylist_table);

        line_2 = new QFrame(onedaylist);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        onedaylist_back = new QPushButton(onedaylist);
        onedaylist_back->setObjectName("onedaylist_back");
        onedaylist_back->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(onedaylist_back);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(onedaylist);

        QMetaObject::connectSlotsByName(onedaylist);
    } // setupUi

    void retranslateUi(QWidget *onedaylist)
    {
        onedaylist->setWindowTitle(QCoreApplication::translate("onedaylist", "Form", nullptr));
        label->setText(QCoreApplication::translate("onedaylist", "Date:", nullptr));
        onedaylist_back->setText(QCoreApplication::translate("onedaylist", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class onedaylist: public Ui_onedaylist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONEDAYLIST_H
