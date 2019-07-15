#include "WebView.h"
#include <QUrl>
#include <QUrlQuery>
#include <QErrorMessage>
#include <QTextCodec>
#include <QNetworkConfigurationManager>

WebView::WebView(QWidget *parent) : QWidget(parent), ui(new Ui::WebView) {
	ui->setupUi(this);

	const QString app("7037949"); // ID приложения
	const QString scope("wall"); // права (messaeges - не доступны для приложений без подтверждения поддержкой вк)
	vkAuth = new VkAuth(app, scope, this);

	connect(vkAuth, SIGNAL(success(const QString &, const QString &)), SLOT(authSuccess(const QString &, const QString &)));
	connect(vkAuth, SIGNAL(failure(const QString &, const QString &)), SLOT(authFailure(const QString &, const QString &)));

	layout = new QHBoxLayout(this);
	layout->addWidget(vkAuth);
	layout->setGeometry(QRect(0, 0, 400, 300));

	vkAuth->show();
}

WebView::~WebView() {
	delete vkAuth;
	delete layout;
	delete ui;
}

// авторизация прошла успешно
void WebView::authSuccess(const QString &token, const QString &userID) {
	emit resultAuth(token, userID);
	close();
}

// ошибка авторизации
void WebView::authFailure(const QString &error, const QString &description) {
	(new QErrorMessage())->showMessage("Error:" + error + "\nDescription:" + description);
	close();
}