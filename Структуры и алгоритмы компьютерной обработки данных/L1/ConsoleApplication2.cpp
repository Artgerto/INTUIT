
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
	cout << "������� ���������� �� ���� (��): ";
	cin >> s;
	cout << "������� ������ ������� (� �� 100 ��): ";
	cin >> v;
	cout << "������� ���� ����� ������� (���.): ";
	cin >> pr;
	res = 2 * s / 100 * v*pr;
	cop = modf(res, &rub);
	cop *= 100;
	cout << "������� �� ���� ��������� �: " << rub << " ���. " << (int)cop << " ���." << "\n";
	system("pause");
    return 0;
}

