#include "VkAuth.h"
#include "VersionAPI.h"
#include <QUrl>
#include <QUrlQuery>

VkAuth::VkAuth(const QString &app, const QString &scope, QWidget *parent) : QWebEngineView(parent) {
	connect(this, SIGNAL(urlChanged(QUrl)), SLOT(handleUrlChange(QUrl)));

	// https://oauth.vk.com/authorize?client_id=7037949&display=wap&redirect_uri=https://oauth.vk.com/blank.html&scope=friends&response_type=token&v=5.52
	QUrl url("https://oauth.vk.com/authorize");
	QUrlQuery param;
	param.addQueryItem("client_id", app);
	param.addQueryItem("display", "wap");
	param.addQueryItem("redirect_uri", "https://oauth.vk.com/blank.html");
	param.addQueryItem("scope", scope);
	param.addQueryItem("response_type", "token");
	param.addQueryItem("v", VersionAPI);
	url.setQuery(param);

	setUrl(url);
}

void VkAuth::handleUrlChange(const QUrl &url) {
	static const QUrl redirect("https://oauth.vk.com/blank.html");
	if (url.matches(redirect, QUrl::RemoveFragment | QUrl::RemoveQuery)) {
		if (url.hasFragment()) {
			const QUrlQuery query(url.fragment());
			if (query.hasQueryItem("error")) {
				const QString err(query.queryItemValue("error"));
				const QString descr(query.queryItemValue("error_description"));

				emit failure(err, descr);
			}
			else {
				const QString token = query.queryItemValue("access_token");
				const QString userID = query.queryItemValue("user_id");
				const QString expire = query.queryItemValue("expires_in").toInt();

				emit success(token, userID);
			}
		}
	}
}