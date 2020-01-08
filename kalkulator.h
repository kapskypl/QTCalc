#pragma once

#include <QtWidgets/QMainWindow>
#include <QKeyEvent>
#include <QDebug>
#include "ui_kalkulator.h"
#include <cmath>
class Kalkulator : public QMainWindow
{
	Q_OBJECT

public:
	Kalkulator(QWidget *parent = Q_NULLPTR);

protected:
	void keyPressEvent(QKeyEvent* e);
	void equals(QString first, QString second, int arythm);

private:
	Ui::KalkulatorClass ui;
	void sendnum(QString num);
	void dot();
	void arythmetic(int i);
	void bckspc();
	void ac();
	void dotnegate();
	void negation();
};
