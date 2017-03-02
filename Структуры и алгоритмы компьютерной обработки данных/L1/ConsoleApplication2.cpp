
#include "stdafx.h"
#include<locale.h> 
#include <iostream>
#include <cmath> 

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double s, v, pr, res;
	double rub, cop;
	cout << "Введите расстояние до дачи (км): ";
	cin >> s;
	cout << "Введите расход бензина (л на 100 км): ";
	cin >> v;
	cout << "Введите цену литра бензина (руб.): ";
	cin >> pr;
	res = 2 * s / 100 * v*pr;
	cop = modf(res, &rub);
	cop *= 100;
	cout << "Поездка на дачу обойдется в: " << rub << " руб. " << (int)cop << " коп." << "\n";
	system("pause");
    return 0;
}

