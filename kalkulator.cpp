#include "kalkulator.h"
int arythm;
int divmode = 0;
int equals = 0;
float diva;
QString first;
Kalkulator::Kalkulator(QWidget* parent)
	: QMainWindow(parent)
{
	setFixedSize(QSize(391, 270));
	ui.setupUi(this);
	connect(ui.num1, &QPushButton::clicked, this, [=]() {sendnum("1"); });
	connect(ui.num2, &QPushButton::clicked, this, [=]() {sendnum("2"); });
	connect(ui.num3, &QPushButton::clicked, this, [=]() {sendnum("3"); });
	connect(ui.num4, &QPushButton::clicked, this, [=]() {sendnum("4"); });
	connect(ui.num5, &QPushButton::clicked, this, [=]() {sendnum("5"); });
	connect(ui.num6, &QPushButton::clicked, this, [=]() {sendnum("6"); });
	connect(ui.num7, &QPushButton::clicked, this, [=]() {sendnum("7"); });
	connect(ui.num8, &QPushButton::clicked, this, [=]() {sendnum("8"); });
	connect(ui.num9, &QPushButton::clicked, this, [=]() {sendnum("9"); });
	connect(ui.num0, &QPushButton::clicked, this, [=]() {sendnum("0"); });
	connect(ui.num00, &QPushButton::clicked, this, [=]() {sendnum("00"); });
	connect(ui.dot, &QPushButton::clicked, this, [=]() {dot(); });
	connect(ui.backspace, &QPushButton::clicked, this, [=]() {bckspc(); });
	connect(ui.add, &QPushButton::clicked, this, [=]() {arythmetic(1); });
	connect(ui.subtract, &QPushButton::clicked, this, [=]() {arythmetic(2); });
	connect(ui.multiply, &QPushButton::clicked, this, [=]() {arythmetic(3); });
	connect(ui.divide, &QPushButton::clicked, this, [=]() {arythmetic(4); });
	connect(ui.square, &QPushButton::clicked, this, [=]() {arythmetic(5); });
	connect(ui.equals, &QPushButton::clicked, this, [=]() {equals(::first, ui.screen->text(), ::arythm); });
	connect(ui.ac, &QPushButton::clicked, this, [=]() {ac(); });
	connect(ui.percent, &QPushButton::clicked, this, [=]() {ui.screen->setText(QString::number(ui.screen->text().toFloat() / 100)); });
	connect(ui.plusminus, &QPushButton::clicked, this, [=]() {negation(); });
	connect(ui.screen, &QLineEdit::textChanged, this, [=]() {dotnegate(); });
}

void Kalkulator::dotnegate() {
	if (ui.screen->text().contains(".") || ui.screen->text().contains("-")) {
		ui.screen->setMaxLength(10);
	}
	else {
		ui.screen->setMaxLength(9);
	}
}

void Kalkulator::negation() {
	if (ui.screen->text().toDouble() > 0) {
		ui.screen->setText("-" + ui.screen->text());
	}
	else {
		ui.screen->setText(ui.screen->text().replace("-", ""));
	}
}

void Kalkulator::ac() {
	ui.screen->setText("0");
	ui.arythm->setText("");
	::arythm = NULL;
	::divmode = 0;
	::diva = NULL;
}

void Kalkulator::equals(QString first, QString second, int arythm) {
	double a, b;
	a = first.toDouble();
	b = second.toDouble();
	QString answ;
	if (arythm == 1) {
		answ = QString::number(a + b);
	}
	if (arythm == 2) {
		answ = QString::number(a - b);
	}
	if (arythm == 3) {
		answ = QString::number(a * b);
	}
	if (arythm == 4) {
		if (::divmode == 0) {
			answ = QString::number((double)b / (double)::diva);
		}
		else {
			answ = QString::number((double)a / (double)b);
			::diva = b;
			::divmode = 0;
		}
	}
	if (answ.contains(".") || answ.contains("-")) {
		ui.screen->setMaxLength(10);
	}
	ui.screen->setText(answ);
	::equals = 1;
	ui.arythm->setText("");
}

void Kalkulator::keyPressEvent(QKeyEvent* event) {
	if (event->key() >= 0x30 && event->key() <= 0x39) {
		sendnum(QString(event->key()));
	}
	if (event->key() == Qt::Key_Period || event->key() == Qt::Key_Comma) {
		dot();
	}
	if (event->key() == Qt::Key_C || event->key() == Qt::Key_Backspace) {
		bckspc();
	}
	if (event->key() == Qt::Key_Escape) {
		ac();
	}
	if (event->key() == Qt::Key_Plus) {
		arythmetic(1);
	}
	if (event->key() == Qt::Key_Minus) {
		arythmetic(2);
	}
	if (event->key() == Qt::Key_Asterisk) {
		arythmetic(3);
	}
	if (event->key() == Qt::Key_Slash) {
		arythmetic(4);
	}
	if (event->key() == Qt::Key_Equal || event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter) {
		equals(::first, ui.screen->text(), ::arythm);
	}
	if (event->key() == Qt::Key_Percent) {
		ui.screen->setText(QString::number(ui.screen->text().toFloat() / 100));
	}
}

void Kalkulator::sendnum(QString num) {
	QString a;
	if (ui.arythm->text() == "" && ::equals == 1) {
		::arythm = NULL;
		::equals = 0;
		::divmode = 0;
		ui.screen->setText("0");
		ui.arythm->setText("");
	}
	if (ui.arythm->text() != "") {
		::first = ui.screen->text();
		ui.screen->setText("");
		ui.arythm->setText("");
	}
	if (ui.screen->text() == "0") {
		if (num == "0" || num == "00") return;
		a = "";
	}
	else {
		a = ui.screen->text();
	}
	a += num;
	ui.screen->setText(a);
}
void Kalkulator::arythmetic(int i) {
	if (i == 5) {
		ui.screen->setText(QString::number((double)(sqrt(ui.screen->text().toDouble()))));
		return;
		::equals = 1;
	}
	::first = ui.screen->text();
	if (ui.arythm->text() == "" && ::arythm && i >= 1 && i < 5 && ::equals == 0) {
		equals(::first, ui.screen->text(), ::arythm);
		::first = ui.screen->text();
	}
	::equals = 0;
	if (i == 1) {
		::arythm = 1;
		ui.arythm->setText("+");

	}
	if (i == 2) {
		::arythm = 2;
		ui.arythm->setText("-");
	}
	if (i == 3) {
		::arythm = 3;
		ui.arythm->setText("*");
	}
	if (i == 4) {
		::arythm = 4;
		ui.arythm->setText("/");
		::divmode = 1;
	}
}
void Kalkulator::dot() {
	if (ui.arythm->text() == "" && ::equals == 1) {
		::arythm = NULL;
		::equals = 0;
		::divmode = 0;
		ui.screen->setText("0");
		ui.arythm->setText("");
	}
	if (ui.screen->text().contains(".")) return;
	ui.screen->setText(ui.screen->text() + ".");
}
void Kalkulator::bckspc() {
	if (ui.screen->text() == "0") return;
	if (ui.screen->text() == "nan") ui.screen->setText("0");
	std::string a = ui.screen->text().toStdString();
	a.pop_back();
	ui.screen->setText(QString::fromStdString(a));
	if (ui.screen->text() == "")
		ui.screen->setText("0");
}