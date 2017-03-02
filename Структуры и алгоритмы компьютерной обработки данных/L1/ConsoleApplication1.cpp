

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	long double n;
	int sum = 0;
	cout << "n =>> ";
	cin >> n;
	for (int i = 0; i < 3; ++i) {
		n *= 10;
		sum = sum + ((int)n % 10);
	}
	cout << "sum: " << sum << "\n";
	system("pause");
    return 0;
}

