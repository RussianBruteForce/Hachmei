#include "password.h"
#include "ui_password.h"

password::password(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::password)
{
	ui->setupUi(this);
	phash = new QString(PHASH);
}

password::~password()
{
	delete ui;
}

void password::on_password_2_textChanged(const QString &arg1)
{
	ui->ok->setDisabled(arg1.isEmpty());
}

void password::on_ok_clicked()
{
	QCryptographicHash hash(QCryptographicHash::Md5);
	int x = QString::compare(*phash, QString(QCryptographicHash::hash((ui->password_2->text().toUtf8()),QCryptographicHash::Md5).toHex()));
	if (x == 0) {
		emit rightPassword();
		this->close();
	} else {
		ui->password_2->clear();
		ui->password_2->setPlaceholderText(tr("Неверный пароль!"));
	}
}
