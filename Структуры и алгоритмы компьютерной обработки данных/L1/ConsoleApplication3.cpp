

#include "stdafx.h"
#include<locale.h> 
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a,b,c,n,m,d;
	cout << "�������� d �������� ������ ������ ������ �� ��������� ax2 + bx + c = 0 � mx + n = 0 ������������ �." << "\n";
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "m = "; cin >> m;
	cout << "n = "; cin >> n;
	cout << "�������������� ������ -  d = "; cin >> d;
	cout << "��������� ����� ���: "<< a << "x2+" << b <<"x+"<< c << "=0 " << m <<"x+"<< n << "=0"<< "\n";
	if((a*d*d + b*d + c == 0 && m*d + n != 0)||(a*d*d + b*d + c != 0 && m*d + n == 0)) cout << "������������� �����: 1" << "\n"; else
		cout << "������������� �������: 0" << "\n";
	system("pause");
    return 0;
}

