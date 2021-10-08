// lab4_3.cpp
// < Демчук Анастасія >
// Лабораторна робота № 4.3
// Табуляція функції, заданої формулою: функція з параметрами.
// Варіант 14
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, a, b, c, F;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "F" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x + c < 0 && a != 0)
			F = -a * pow(x, 2) - b;
		else
			if (x + c > 0 && a == 0)
				F = (x - a) / (x - c);
			else
				F = x / c + c / x;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << F
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}