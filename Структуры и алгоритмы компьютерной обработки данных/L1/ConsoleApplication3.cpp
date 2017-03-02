

#include "stdafx.h"
#include<locale.h> 
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a,b,c,n,m,d;
	cout << "Величина d является корнем только одного из уравнений ax2 + bx + c = 0 и mx + n = 0 относительно х." << "\n";
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "m = "; cin >> m;
	cout << "n = "; cin >> n;
	cout << "Предполагаемый корень -  d = "; cin >> d;
	cout << "Выражения имеют вид: "<< a << "x2+" << b <<"x+"<< c << "=0 " << m <<"x+"<< n << "=0"<< "\n";
	if((a*d*d + b*d + c == 0 && m*d + n != 0)||(a*d*d + b*d + c != 0 && m*d + n == 0)) cout << "Предположение верно: 1" << "\n"; else
		cout << "Предположение неверно: 0" << "\n";
	system("pause");
    return 0;
}

