/********************************************************************************
** Form generated from reading UI file 'maintenance.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTENANCE_H
#define UI_MAINTENANCE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_maintenance
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QRadioButton *maintenance_general;
    QRadioButton *maintenance_rate;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *maintenance)
    {
        if (maintenance->objectName().isEmpty())
            maintenance->setObjectName("maintenance");
        maintenance->resize(176, 84);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/Resource/Login.png"), QSize(), QIcon::Normal, QIcon::Off);
        maintenance->setWindowIcon(icon);
        maintenance->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 255, 195);"));
        verticalLayout = new QVBoxLayout(maintenance);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(maintenance);
        groupBox->setObjectName("groupBox");
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        maintenance_general = new QRadioButton(groupBox);
        maintenance_general->setObjectName("maintenance_general");

        horizontalLayout->addWidget(maintenance_general);

        maintenance_rate = new QRadioButton(groupBox);
        maintenance_rate->setObjectName("maintenance_rate");

        horizontalLayout->addWidget(maintenance_rate);


        verticalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(maintenance);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(maintenance);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, maintenance, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, maintenance, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(maintenance);
    } // setupUi

    void retranslateUi(QDialog *maintenance)
    {
        maintenance->setWindowTitle(QCoreApplication::translate("maintenance", "Maintenance", nullptr));
        groupBox->setTitle(QString());
        maintenance_general->setText(QCoreApplication::translate("maintenance", "General", nullptr));
        maintenance_rate->setText(QCoreApplication::translate("maintenance", "Rate/Limit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class maintenance: public Ui_maintenance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTENANCE_H
