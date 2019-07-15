#ifndef PROFILEINFO_H
#define PROFILEINFO_H

#include <QWidget>
#include "ui_ProfileInfo.h"

class ProfileInfo : public QWidget {
	Q_OBJECT

public:
	ProfileInfo(QWidget *parent = Q_NULLPTR);
	~ProfileInfo();

public slots:
	void printProfileInfo(const QMap<QString, QString> &profileInfo);

private:
	Ui::ProfileInfo *ui;
};

#endif