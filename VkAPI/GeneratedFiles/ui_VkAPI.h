/********************************************************************************
** Form generated from reading UI file 'VkAPI.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VKAPI_H
#define UI_VKAPI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VkAPIClass
{
public:
    QWidget *centralWidget;
    QGroupBox *wallPostBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *wallPostEdit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *wallPostButton;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *userIDEdit;
    QLabel *label_2;
    QTextEdit *messageEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *messageSendButton;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *getAccountInfoButton;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *getProfileInfoButton;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_4;

    void setupUi(QMainWindow *VkAPIClass)
    {
        if (VkAPIClass->objectName().isEmpty())
            VkAPIClass->setObjectName(QString::fromUtf8("VkAPIClass"));
        VkAPIClass->setEnabled(false);
        VkAPIClass->resize(390, 439);
        centralWidget = new QWidget(VkAPIClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        wallPostBox = new QGroupBox(centralWidget);
        wallPostBox->setObjectName(QString::fromUtf8("wallPostBox"));
        wallPostBox->setGeometry(QRect(10, 10, 371, 131));
        verticalLayoutWidget = new QWidget(wallPostBox);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 351, 104));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        wallPostEdit = new QTextEdit(verticalLayoutWidget);
        wallPostEdit->setObjectName(QString::fromUtf8("wallPostEdit"));

        verticalLayout->addWidget(wallPostEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        wallPostButton = new QPushButton(verticalLayoutWidget);
        wallPostButton->setObjectName(QString::fromUtf8("wallPostButton"));

        horizontalLayout_3->addWidget(wallPostButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 150, 371, 161));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 351, 136));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        userIDEdit = new QLineEdit(gridLayoutWidget);
        userIDEdit->setObjectName(QString::fromUtf8("userIDEdit"));

        gridLayout->addWidget(userIDEdit, 0, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        messageEdit = new QTextEdit(gridLayoutWidget);
        messageEdit->setObjectName(QString::fromUtf8("messageEdit"));

        gridLayout->addWidget(messageEdit, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        messageSendButton = new QPushButton(gridLayoutWidget);
        messageSendButton->setObjectName(QString::fromUtf8("messageSendButton"));

        horizontalLayout_2->addWidget(messageSendButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 2);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 320, 371, 111));
        gridLayoutWidget_2 = new QWidget(groupBox_2);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 20, 351, 80));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 1, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 1, 2, 1, 1);

        getAccountInfoButton = new QPushButton(gridLayoutWidget_2);
        getAccountInfoButton->setObjectName(QString::fromUtf8("getAccountInfoButton"));

        gridLayout_2->addWidget(getAccountInfoButton, 1, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 1, 3, 1, 1);

        getProfileInfoButton = new QPushButton(gridLayoutWidget_2);
        getProfileInfoButton->setObjectName(QString::fromUtf8("getProfileInfoButton"));

        gridLayout_2->addWidget(getProfileInfoButton, 1, 4, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_8, 1, 5, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 0, 3, 1, 3);

        VkAPIClass->setCentralWidget(centralWidget);

        retranslateUi(VkAPIClass);

        QMetaObject::connectSlotsByName(VkAPIClass);
    } // setupUi

    void retranslateUi(QMainWindow *VkAPIClass)
    {
        VkAPIClass->setWindowTitle(QApplication::translate("VkAPIClass", "VkAPI", nullptr));
        wallPostBox->setTitle(QApplication::translate("VkAPIClass", "\320\237\320\276\321\201\321\202\320\270\320\275\320\263 \320\267\320\260\320\277\320\270\321\201\320\270 \320\275\320\260 \321\201\321\202\320\265\320\275\321\203", nullptr));
        wallPostButton->setText(QApplication::translate("VkAPIClass", "\320\227\320\260\320\277\320\276\321\201\321\202\320\270\321\202\321\214", nullptr));
        groupBox->setTitle(QApplication::translate("VkAPIClass", "\320\236\321\202\320\277\321\200\320\260\320\262\320\272\320\260 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\321\217", nullptr));
        label->setText(QApplication::translate("VkAPIClass", "ID \320\277\320\276\320\273\321\203\321\207\320\260\321\202\320\265\320\273\321\217/ \n"
"\320\272\320\276\321\200\320\276\321\202\320\272\320\270\320\271 \320\260\320\264\321\200\320\265\321\201", nullptr));
        label_2->setText(QApplication::translate("VkAPIClass", "\320\242\320\265\321\201\321\202 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\321\217", nullptr));
        messageSendButton->setText(QApplication::translate("VkAPIClass", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        groupBox_2->setTitle(QApplication::translate("VkAPIClass", "\320\237\320\276\320\273\321\203\321\207\320\265\320\275\320\270\320\265 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\270", nullptr));
        label_3->setText(QApplication::translate("VkAPIClass", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \320\260\320\272\320\272\321\203\320\260\320\275\321\202\320\265", nullptr));
        getAccountInfoButton->setText(QApplication::translate("VkAPIClass", "\320\237\320\276\320\273\321\203\321\207\320\270\321\202\321\214", nullptr));
        getProfileInfoButton->setText(QApplication::translate("VkAPIClass", "\320\237\320\276\320\273\321\203\321\207\320\270\321\202\321\214", nullptr));
        label_4->setText(QApplication::translate("VkAPIClass", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \320\277\321\200\320\276\321\204\320\270\320\273\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VkAPIClass: public Ui_VkAPIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VKAPI_H
