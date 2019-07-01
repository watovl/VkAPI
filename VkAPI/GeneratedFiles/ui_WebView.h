/********************************************************************************
** Form generated from reading UI file 'WebView.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEBVIEW_H
#define UI_WEBVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WebView
{
public:

    void setupUi(QWidget *WebView)
    {
        if (WebView->objectName().isEmpty())
            WebView->setObjectName(QString::fromUtf8("WebView"));
        WebView->setWindowModality(Qt::NonModal);
        WebView->resize(400, 300);
        WebView->setMinimumSize(QSize(400, 300));
        WebView->setMaximumSize(QSize(401, 301));

        retranslateUi(WebView);

        QMetaObject::connectSlotsByName(WebView);
    } // setupUi

    void retranslateUi(QWidget *WebView)
    {
        WebView->setWindowTitle(QApplication::translate("WebView", "\320\222\321\205\320\276\320\264 \320\262 \320\262\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WebView: public Ui_WebView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEBVIEW_H
