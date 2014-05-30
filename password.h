#ifndef PASSWORD_H
#define PASSWORD_H

#include <QWidget>
#include <QCryptographicHash>

#define PHASH "21a80959c3971a2c5efdbda6b58cc335"

namespace Ui {
class password;
}

class password : public QWidget
{
	Q_OBJECT

public:
	explicit password(QWidget *parent = 0);
	~password();

signals:
	void rightPassword();

private slots:
	void on_password_2_textChanged(const QString &arg1);

	void on_ok_clicked();

private:
	Ui::password *ui;
	QString *phash;
};

#endif // PASSWORD_H
