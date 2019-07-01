#pragma once

#include <QtWidgets/QMainWindow>
#include <QWebEngineView>

class VkAuth : public QWebEngineView
{
	Q_OBJECT

public:
	VkAuth(const QString &app, const QString &scope, QWidget *parent = Q_NULLPTR);
	~VkAuth() {};

private slots:
	void handleUrlChange(const QUrl &url);

signals:
	void success(const QString &token, const QString &userID);
	void failure(const QString &error, const QString &description);
};
