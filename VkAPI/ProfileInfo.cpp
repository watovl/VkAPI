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
	// ���������� Label-��
	for (auto it = profileInfo.begin(); it != profileInfo.end(); ++it) {
		if (mapLabel.value(it.key()) != (QLabel *)0)
			mapLabel[it.key()]->setText(it.value());
	}
	/* ��������� ������� */
	// ���
	if (mapLabel["sex"]->text() == "1") mapLabel["sex"]->setText(QString::fromLocal8Bit("�������"));
	else if (mapLabel["sex"]->text() == "2") mapLabel["sex"]->setText(QString::fromLocal8Bit("�������"));
	else mapLabel["sex"]->setText(QString::fromLocal8Bit("�� ������"));
	// �������� ���������
	switch (mapLabel["relation"]->text().toInt()) {
	case 1: 
		mapLabel["relation"]->setText(QString::fromLocal8Bit("�� �����/�� �������"));
		break;
	case 2:
		mapLabel["relation"]->setText(QString::fromLocal8Bit("���� ����/���� �������"));
		break;
	case 3:
		mapLabel["relation"]->setText(QString::fromLocal8Bit("���������/����������"));
		break;
	case 4:
		mapLabel["relation"]->setText(QString::fromLocal8Bit("�����/�������"));
		break;
	case 5:
		mapLabel["relation"]->setText(QString::fromLocal8Bit("�� ������"));
		break;
	case 6:
		mapLabel["relation"]->setText(QString::fromLocal8Bit("� �������� ������"));
		break;
	case 7:
		mapLabel["relation"]->setText(QString::fromLocal8Bit("������/��������"));
		break;
	case 8:
		mapLabel["relation"]->setText(QString::fromLocal8Bit("� ����������� �����"));
		break;
	case 0:
		mapLabel["relation"]->setText(QString::fromLocal8Bit("�� �������"));
		break;
	}
	// ��������� ���� ��������
	switch (mapLabel["bdate_visibility"]->text().toInt()) {
	case 1:
		mapLabel["bdate_visibility"]->setText(QString::fromLocal8Bit("���������� ���� ��������"));
		break;
	case 2:
		mapLabel["bdate_visibility"]->setText(QString::fromLocal8Bit("���������� ������ ����� � ����"));
		break;
	case 0:
		mapLabel["bdate_visibility"]->setText(QString::fromLocal8Bit("�� ���������� ���� ��������"));
		break;
	}
}