// roadcent.cpp: определяет roadcent().
//

#include "stdafx.h"
#include <cmath> 

double roadcent(double k) {
	k *= 100;
	int l = (int)(k * 10) % 10;
	if (l == 5) { return floor(k + 1); }
	else { return floor(k + 0.5); }
}