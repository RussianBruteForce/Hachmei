#ifndef HACHMEI_H
#define HACHMEI_H

#include <QMainWindow>

enum class ResultType {
	Name,
	Date,
	Gold,
	About
};

namespace Ui {
class Hachmei;
}

class Hachmei : public QMainWindow
{
	Q_OBJECT

public:
	explicit Hachmei(QWidget *parent = 0);
	static QString firstLetterUppercase(QString str);
	~Hachmei();

private slots:
	void on_actionAbout_triggered();
	void on_actionExit_triggered();
	void on_actionReset_triggered();
	void on_byDateButton_clicked();
	void on_byName_clicked();
	void on_goldNumber_clicked();
	void on_patronymic_textChanged(const QString &arg1);
	void on_surname_textChanged(const QString &arg1);
	void on_name_textChanged(const QString &arg1);
	void on_birthdayDate_dateChanged(const QDate &date);
	bool checkDate();
	bool checkName();
	int getSumOfNumbers(int num);
	int calculateNumberOfString(QString str);
	int getCharNumber(QChar ch);
	void showResult(int number, ResultType type);
	QString getTextResult(int i, ResultType type);
	QString getNameTextResult(int i);
	QString getDateTextResult(int i);
	QString getGoldTextResult(int i);
	QString getAboutText();

	void on_tabs_currentChanged(int index);

private:
	Ui::Hachmei *ui;
};

#endif // HACHMEI_H
