#include "functions.h"
#include <iostream>
#include <windows.h>

using namespace std;



void conditions(int n, int j) {

	int percent, income, percent_amount;

	if (n <= 30) {

		percent = 10;

		percent_amount = j * percent / 100;

		income = j - percent_amount;
	}

	if (n > 30 && n <= 120) {

		percent = 2;

		percent_amount = j * percent / 100;

		income = j + percent_amount;
	}

	if (n > 120 && n <= 240) {

		percent = 6;

		percent_amount = j * percent / 100;

		income = j + percent_amount;
	}

	if (n > 240 && n <= 365) {

		percent = 12;

		percent_amount = j * percent / 100;

		income = j + percent_amount;
	}

	cout << "Cумма вклада на окончание срока: " << income << " руб.";

}