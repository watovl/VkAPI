#include "VkAPI.h"
#include <QUrl>
#include <QUrlQuery>
#include <QtNetwork>
#include <QtXml>


VkAPI::VkAPI(QWidget *parent) : QMainWindow(parent) {
	ui.setupUi(this);

	webView = new WebView;
	connect(webView, SIGNAL(resultAuth(const QString &, const QString &)), this, SLOT(handleAuth(const QString &, const QString &)));
	webView->show();

	connect(ui.wallPostButton, SIGNAL(clicked()), this, SLOT(onWallPostButton()));
	connect(ui.messageSendButton, SIGNAL(clicked()), this, SLOT(onMessageSendButton()));
	connect(ui.getAccountInfoButton, SIGNAL(clicked()), this, SLOT(onAccountInfoButton()));
	connect(ui.getProfileInfoButton, SIGNAL(clicked()), this, SLOT(onProfileInfoButton()));
}

VkAPI::~VkAPI() {
	delete webView;
}

// обработка результата авторизации пользователя
void VkAPI::handleAuth(const QString &token, const QString &userID) {
	setEnabled(true);
	mToken = token;
	mUserID = userID;
}

// запрос постинга сообщения на стене
void VkAPI::onWallPostButton() {
	QUrl url("https://api.vk.com/method/wall.post");
	QUrlQuery param;
	param.addQueryItem("owner_id", mUserID);
	param.addQueryItem("message", ui.wallPostEdit->toPlainText());
	param.addQueryItem("v", "5.52");
	param.addQueryItem("access_token", mToken);
	url.setQuery(param);

	QNetworkAccessManager *manager = new QNetworkAccessManager(this);
	connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyWallPost(QNetworkReply*)));
	manager->get(QNetworkRequest(url));
}

// отправка сообщения
void VkAPI::onMessageSendButton() {
	bool ok;
	ui.userIDEdit->text().toInt(&ok);
	// ввёлся id или короткий адрес
	const QString user = ok ? "user_id" : "domain";

	QUrl url("https://api.vk.com/method/messages.send");
	QUrlQuery param;
	param.addQueryItem(user, ui.userIDEdit->text());
	param.addQueryItem("message", ui.messageEdit->toPlainText());
	param.addQueryItem("v", "5.52");
	param.addQueryItem("access_token", mToken);
	url.setQuery(param);

	QNetworkAccessManager *manager = new QNetworkAccessManager(this);
	connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyWallPost(QNetworkReply*)));
	manager->get(QNetworkRequest(url));
}

// получение информации о аккаунте
void VkAPI::onAccountInfoButton() {
	QUrl url("https://api.vk.com/method/account.getInfo");
	QUrlQuery param;
	param.addQueryItem("v", "5.52");
	param.addQueryItem("access_token", mToken);
	url.setQuery(param);

	QNetworkAccessManager *manager = new QNetworkAccessManager(this);
	connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyAccountInfo(QNetworkReply*)));
	manager->get(QNetworkRequest(url));
}

// получение информации о профиле
void VkAPI::onProfileInfoButton() {
	QUrl url("https://api.vk.com/method/account.getProfileInfo");
	QUrlQuery param;
	param.addQueryItem("v", "5.52");
	param.addQueryItem("access_token", mToken);
	url.setQuery(param);

	QNetworkAccessManager *manager = new QNetworkAccessManager(this);
	connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyProfileInfo(QNetworkReply*)));
	manager->get(QNetworkRequest(url));
}

// обработка запроса постинга
void VkAPI::replyWallPost(QNetworkReply* reply) {
	QByteArray bytes = reply->readAll();
	qDebug() << bytes;

	reply->deleteLater();
}

// обработка запроса отправки сообщения
void VkAPI::replyMessageSend(QNetworkReply* reply) {
	QByteArray bytes = reply->readAll();
	qDebug() << bytes;

	reply->deleteLater();
}

// обработка запроса получение информации о аккуанте
void VkAPI::replyAccountInfo(QNetworkReply* reply) {
	QByteArray bytes = reply->readAll();
	qDebug() << bytes;

	QJsonDocument document = QJsonDocument::fromJson(bytes);
	QJsonObject root = document.object();
	QJsonObject response = root["response"].toObject();
	QVector<QString> resultResponse;
	for (auto it = response.begin(); it != response.end(); ++it) {
		resultResponse.push_back((*it).isString() ? (*it).toString() : QString::number((*it).toInt()));
	}
	reply->deleteLater();

	accountInfo = new AccountInfo;
	connect(this, SIGNAL(setAccountInfo(const QVector<QString>&)), accountInfo, SLOT(printAccountInfo(const QVector<QString> &)));
	emit setAccountInfo(resultResponse);
	accountInfo->show();
}

// обработка запроса получение информации о профиле
void VkAPI::replyProfileInfo(QNetworkReply* reply) {
	QByteArray bytes = reply->readAll();
	qDebug() << bytes;

	QJsonDocument document = QJsonDocument::fromJson(bytes);
	QJsonObject root = document.object();
	QJsonObject response = root["response"].toObject();
	QMap<QString, QString> resultResponse;
	for (auto it = response.begin(); it != response.end(); ++it) {
		(*it).isString() ? resultResponse.insert(it.key(), (*it).toString()) 
			: resultResponse.insert(it.key(), QString::number((*it).toInt()));
	}
	resultResponse.insert(QString("country"), response.value("country")["title"].toString());
	resultResponse.insert(QString("city"), response.value("city")["title"].toString());
	reply->deleteLater();

	profileInfo = new ProfileInfo;
	connect(this, SIGNAL(setProfileInfo(const QMap<QString, QString> &)),
		profileInfo, SLOT(printProfileInfo(const QMap<QString, QString> &)));
	emit setProfileInfo(resultResponse);
	profileInfo->show();
}