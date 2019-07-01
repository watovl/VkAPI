/********************************************************************************
** Form generated from reading UI file 'accountInfo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTINFO_H
#define UI_ACCOUNTINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccountInfo
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *countryLabel;
    QLabel *httpLabel;
    QLabel *fa2Label;
    QLabel *ownPostsLabel;
    QLabel *wallRepliesLabel;
    QLabel *introLabel;
    QLabel *langLabel;

    void setupUi(QWidget *AccountInfo)
    {
        if (AccountInfo->objectName().isEmpty())
            AccountInfo->setObjectName(QString::fromUtf8("AccountInfo"));
        AccountInfo->resize(270, 281);
        gridLayoutWidget = new QWidget(AccountInfo);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 251, 261));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        countryLabel = new QLabel(gridLayoutWidget);
        countryLabel->setObjectName(QString::fromUtf8("countryLabel"));

        gridLayout->addWidget(countryLabel, 0, 1, 1, 1);

        httpLabel = new QLabel(gridLayoutWidget);
        httpLabel->setObjectName(QString::fromUtf8("httpLabel"));

        gridLayout->addWidget(httpLabel, 1, 1, 1, 1);

        fa2Label = new QLabel(gridLayoutWidget);
        fa2Label->setObjectName(QString::fromUtf8("fa2Label"));

        gridLayout->addWidget(fa2Label, 2, 1, 1, 1);

        ownPostsLabel = new QLabel(gridLayoutWidget);
        ownPostsLabel->setObjectName(QString::fromUtf8("ownPostsLabel"));

        gridLayout->addWidget(ownPostsLabel, 3, 1, 1, 1);

        wallRepliesLabel = new QLabel(gridLayoutWidget);
        wallRepliesLabel->setObjectName(QString::fromUtf8("wallRepliesLabel"));

        gridLayout->addWidget(wallRepliesLabel, 4, 1, 1, 1);

        introLabel = new QLabel(gridLayoutWidget);
        introLabel->setObjectName(QString::fromUtf8("introLabel"));

        gridLayout->addWidget(introLabel, 5, 1, 1, 1);

        langLabel = new QLabel(gridLayoutWidget);
        langLabel->setObjectName(QString::fromUtf8("langLabel"));

        gridLayout->addWidget(langLabel, 6, 1, 1, 1);


        retranslateUi(AccountInfo);

        QMetaObject::connectSlotsByName(AccountInfo);
    } // setupUi

    void retranslateUi(QWidget *AccountInfo)
    {
        AccountInfo->setWindowTitle(QApplication::translate("AccountInfo", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \320\260\320\272\320\272\320\260\321\203\320\275\321\202\320\265", nullptr));
        label_4->setText(QApplication::translate("AccountInfo", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\267\320\260\320\277\320\270\321\201\320\265\320\271 \320\275\320\260 \321\201\321\202\320\265\320\275\320\265\n"
"\321\202\320\276\320\273\321\214\320\272\320\276 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\265\320\274:", nullptr));
        label_7->setText(QApplication::translate("AccountInfo", "\320\242\320\265\320\272\321\203\321\211\320\270\320\271 \321\217\320\267\321\213\320\272:", nullptr));
        label_5->setText(QApplication::translate("AccountInfo", "\320\236\321\202\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265 \320\272\320\276\320\274\320\274\320\265\320\275\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217\n"
"\320\267\320\260\320\277\320\270\321\201\320\265\320\271 \320\275\320\260 \321\201\321\202\320\265\320\275\320\265:", nullptr));
        label_6->setText(QApplication::translate("AccountInfo", "\320\236\320\261\321\203\321\207\320\265\320\275\320\270\320\265 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\320\275\320\270\321\217 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\321\217:", nullptr));
        label->setText(QApplication::translate("AccountInfo", "\320\241\321\202\321\200\320\260\320\275\320\260:", nullptr));
        label_3->setText(QApplication::translate("AccountInfo", "\320\224\320\262\321\203\321\205\321\204\320\260\320\272\321\202\320\276\321\200\320\275\320\260\321\217 \320\260\321\203\321\202\320\265\320\275\321\202\320\270\321\204\320\270\320\272\320\260\321\206\320\270\321\217:", nullptr));
        label_2->setText(QApplication::translate("AccountInfo", "\320\221\320\265\320\267\320\276\320\277\320\260\321\201\320\275\320\276\320\265 \321\201\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\320\265:", nullptr));
        countryLabel->setText(QString());
        httpLabel->setText(QString());
        fa2Label->setText(QString());
        ownPostsLabel->setText(QString());
        wallRepliesLabel->setText(QString());
        introLabel->setText(QString());
        langLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AccountInfo: public Ui_AccountInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTINFO_H
