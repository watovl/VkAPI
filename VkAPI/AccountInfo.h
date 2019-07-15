#ifndef ACCOUNTINFO_H
#define ACCOUNTINFO_H

#include <QWidget>
#include "ui_AccountInfo.h"

class AccountInfo : public QWidget {
	Q_OBJECT

public:
	AccountInfo(QWidget *parent = Q_NULLPTR);
	~AccountInfo();

public slots:
	void printAccountInfo(const QVector<QString> &accountInfo);

private:
	Ui::AccountInfo *ui;
};

#endif