// Lab_02.cpp
// < Пазин, Соломія >
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 25

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double alpha;  // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2;  // результат обчислення 2-го виразу
	// Введення значення альфа

	cout << "alpha ="; cin >> alpha;

	z1 = 1 - (1.0 / 4) * pow(sin(2 * alpha), 2) + cos(2 * alpha);
	z2 = pow(cos(alpha), 2) + pow(cos(alpha), 4);

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}