#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_VkAPI.h"
#include "WebView.h"
#include "AccountInfo.h"
#include "ProfileInfo.h"

class VkAPI : public QMainWindow {
	Q_OBJECT

public:
	VkAPI(QWidget *parent = Q_NULLPTR);
	~VkAPI();

public slots:
	void handleAuth(const QString &token, const QString &userID);

	void onWallPostButton();
	void onMessageSendButton();
	void onAccountInfoButton();
	void onProfileInfoButton();

	void replyWallPost(QNetworkReply* reply);
	void replyMessageSend(QNetworkReply* reply);
	void replyAccountInfo(QNetworkReply* reply);
	void replyProfileInfo(QNetworkReply* reply);

signals:
	void setAccountInfo(const QVector<QString> &resultResponse);
	void setProfileInfo(const QMap<QString, QString> &resultResponse);

private:
	Ui::VkAPIClass ui;

	WebView *webView;
	AccountInfo *accountInfo;
	ProfileInfo *profileInfo;

	QString mToken;
	QString mUserID;
};
