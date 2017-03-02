// ConsoleApplication1.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include "Roadcent.h"
#include<locale.h> 
#include <iostream>
#include <cmath> 


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double n,rub,cop;
	cout << "ѕреобразование числа в денежный формат." << "\n";
	cout << "¬ведите дробное число - "; cin >> n;
	cop = modf(n, &rub);
	cop = roadcent(cop);
	if (cop == 100) { 
		cop = 0;
		++rub;
	}
	cout << n << "руб. - это " << rub << " руб. " << cop << " коп." << "\n";
	system("pause");
    return 0;
}

