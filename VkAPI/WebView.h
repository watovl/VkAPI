#ifndef WEBVIEW_H
#define WEBVIEW_H

#include <QWidget>
#include <QHBoxLayout>
#include "VkAuth.h"
#include "ui_WebView.h"

class WebView : public QWidget {
	Q_OBJECT

public:
	WebView(QWidget *parent = Q_NULLPTR);
	~WebView();

public slots:
	void authSuccess(const QString &token, const QString &userID);
	void authFailure(const QString &error, const QString &description);

signals:
	void resultAuth(const QString &token, const QString &userID);

private:
	Ui::WebView *ui;

	VkAuth *vkAuth;
	QHBoxLayout *layout;
};

#endif