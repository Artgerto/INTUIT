// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	cout << "�������������� ����� � �������� ������." << "\n";
	cout << "������� ������� ����� - "; cin >> n;
	cop = modf(n, &rub);
	cop = roadcent(cop);
	if (cop == 100) { 
		cop = 0;
		++rub;
	}
	cout << n << "���. - ��� " << rub << " ���. " << cop << " ���." << "\n";
	system("pause");
    return 0;
}

