#include "ProfileInfo.h"
#include <QTextCodec>

ProfileInfo::ProfileInfo(QWidget *parent) : QWidget(parent), ui(new Ui::ProfileInfo) {
	ui->setupUi(this);
	QTextCodec::setCodecForLocale(QTextCodec::codecForName("Windows - 1251"));
}

ProfileInfo::~ProfileInfo() {
	delete ui;
}

void ProfileInfo::printProfileInfo(const QMap<QString, QString> &profileInfo) {
	QMap<QString, QLabel*> mapLabel = { {QString("first_name"), ui->firstNameLabel}, { QString("last_name"), ui->lastNameLabel }, 
		{ QString("maiden_name"), ui->maidenNameLabel }, { QString("screen_name"), ui->screenNameLabel }, 
		{ QString("sex"), ui->sexLabel }, { QString("relation"), ui->relationLabel }, 
		{ QString("relation_partner"), ui->partnerLabel }, { QString("bdate"), ui->bdataLabel }, 
		{ QString("bdate_visibility"), ui->bDataVisibilityLabel }, { QString("home_town"), ui->homeLabel },
		{ QString("country"), ui->countryLabel }, { QString("city"), ui->cityLabel },
		{ QString("status"), ui->statusLabel }, { QString("phone"), ui->phoneLabel } };
	// заполнение Label-ов
	for (auto it = profileInfo.begin(); it != profileInfo.end(); ++it) {
		if (mapLabel.value(it.key()) != (QLabel *)0)
			mapLabel[it.key()]->setText(it.value());
	}
	/* Коррекция записей */
	// пол
	if (mapLabel["sex"]->text() == "1") mapLabel["sex"]->setText(QString::fromLocal8Bit("женский"));
	else if (mapLabel["sex"]->text() == "2") mapLabel["sex"]->setText(QString::fromLocal8Bit("мужской"));
	else mapLabel["sex"]->setText(QString::fromLocal8Bit("не указан"));
	// семейное положение
	switch (mapLabel["relation"]->text().toInt()) {
	case 1: 
		mapLabel["relation"]->setText(QString::fromLocal8Bit("не женат/не замужем"));
		break;
	case 2:
		mapLabel["relation"]->setText(QString::fromLocal8Bit("есть друг/есть подруга"));
		break;
	case 3:
		mapLabel["relation"]->setText(QString::fromLocal8Bit("помолвлен/помолвлена"));
		break;
	case 4:
		mapLabel["relation"]->setText(QString::fromLocal8Bit("женат/замужем"));
		break;
	case 5:
		mapLabel["relation"]->setText(QString::fromLocal8Bit("всё сложно"));
		break;
	case 6:
		mapLabel["relation"]->setText(QString::fromLocal8Bit("в активном поиске"));
		break;
	case 7:
		mapLabel["relation"]->setText(QString::fromLocal8Bit("влюблён/влюблена"));
		break;
	case 8:
		mapLabel["relation"]->setText(QString::fromLocal8Bit("в гражданском браке"));
		break;
	case 0:
		mapLabel["relation"]->setText(QString::fromLocal8Bit("не указано"));
		break;
	}
	// видимость даты рождения
	switch (mapLabel["bdate_visibility"]->text().toInt()) {
	case 1:
		mapLabel["bdate_visibility"]->setText(QString::fromLocal8Bit("показывать дату рождения"));
		break;
	case 2:
		mapLabel["bdate_visibility"]->setText(QString::fromLocal8Bit("показывать только месяц и день"));
		break;
	case 0:
		mapLabel["bdate_visibility"]->setText(QString::fromLocal8Bit("не показывать дату рождения"));
		break;
	}
}