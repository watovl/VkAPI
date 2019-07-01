#include "AccountInfo.h"

AccountInfo::AccountInfo(QWidget *parent) : QWidget(parent), ui(new Ui::AccountInfo) {
	ui->setupUi(this);
}

AccountInfo::~AccountInfo() {
	delete ui;
}

void AccountInfo::printAccountInfo(const QVector<QString> &accountInfo) {
	QLabel *pLabels[] = {ui->countryLabel, ui->httpLabel, ui->fa2Label, ui->ownPostsLabel, ui->wallRepliesLabel, ui->introLabel, ui->langLabel};
	short i = 0;
	for (auto it = accountInfo.begin(); it != accountInfo.begin() + 2; ++it) {
		(*(pLabels + i++))->setText(*it);
	}
	// если кол-во = 6, то 3 параметр пропущен, впишем его вручную
	if (accountInfo.size() == 6) {
		ui->fa2Label->setText("0");
		++i;
	}
	for (auto it = accountInfo.begin() + 2; it != accountInfo.end(); ++it) {
		(*(pLabels + i++))->setText(*it);
	}
}