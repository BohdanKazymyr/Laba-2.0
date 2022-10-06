// Lab_02.cpp
// < Казимирю Б,П >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 10
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double Pi = 4 * atan(1.); // число пі
	double a; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "a = "; cin >> a;
	z1 = sin(Pi * 0.5 + 3 * a) / (1 - sin(3 * a - Pi));
	z2 = 1 / tan((1.25 * Pi) + (1.5 * a));

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}

