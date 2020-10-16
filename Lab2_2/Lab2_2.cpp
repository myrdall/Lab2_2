#include <iostream>
#include "functions.h"
#include <windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int dep_amount, days;

	dep_amount = 0;

	while (dep_amount < 1000)
	{
		cout << "Минимальная сумма вклада состовляет 1000 рублей \n" << endl;
		cout << "Введите сумму вклада:  \n" << endl;
		cin >> dep_amount;
	}

	cout << "Введите срок вклада: \n" << endl;
	cin >> days;

	while (days > 365) {
		cout << "Срок вклада не может быть более 365 дней\n" << endl;
		cout << "Введите срок вклада: \n" << endl;
		cin >> days;
	}
	conditions(days, dep_amount);
}

