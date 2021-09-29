// Lab_03_4.cpp
// < Перун Уляна >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 16.
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	// розгалуження в повній формі
	if (x >= 0 && y >= 0 && y <= -x * x + 2 && y <= x || x < 0 && y < 0 && y >= x && y <= -x * x + 2)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
