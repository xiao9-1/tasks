#include <locale>
#include <iostream>
const double PI = 3.141592653589793;
using namespace std;

double sumN(double x, int n, double& last)
{
	// Инициализация переменной last
	last = x;
	double sum = last;
	for (int i = 1; i < n; ++i)
	{
		double r;
		// Вычисление значения r
		r = (2 * i - 1) * (-x * x) / (2 * i) * (2 * i + 1);
		last *= r;
		sum += last;
	}
	sum = (PI / 2) + sum;
	return sum;
}

double sumE(double x, double E, int& n)
{
	double last;
	// Инициализация переменной last
	last = x;
	double sum = last;
	for (n = 1; fabs(last) > E; ++n)
	{
		double r;
		// Вычисление значения r
		r = (2 * n - 1) * (-x * x) / (2 * n) * (2 * n + 1);
		last *= r;
		sum += last;
	}
	sum = (PI / 2) + sum;
	return sum;
}

int main()
{
	setlocale(LC_ALL, "rus");
	while (1)
	{
		cout << "Вычисление значений функции arccos(x)\n\n";
		double x; // Значение аргумента
		double func; // Точное значение функции
		double sum; // Значение частичной суммы
		int n; // Число слагаемых в частичной сумме

		cout << "Задание 1" << endl;
		cout << "Введите значение аргумента( -1 до 1)" << endl;
		cin >> x;
		if (x > 1 or x < -1)
		{
			cout << "Неверное значение аргумента" << endl;
		}
		else
			cout << "Задайте число слагаемых > ";
		cin >> n;
		func = acos(x);// Вычисление "точного" значения
		double last;
		sum = sumN(x, n, last);
		cout << "Точное значение функции равно " << func << endl;
		cout << "Частичная сумма ряда равна " << sum << endl;
		cout << "Абсолютная погрешность равна " << fabs(func - sum) << endl;
		cout << "Последнее слагаемое равно " << last << endl;

		system("pause");

		cout << "\nЗадание 2" << endl;
		double E;
		cout << "Введите значение аргумента > ";
		cout << "Введите значение аргумента( -1 до 1)" << endl;
		cin >> x;
		if (x > 1 or x < -1)
		{
			cout << "Неверное значение аргумента" << endl;
		}
		else
			cout << "Задайте точность вычислений > ";
		cin >> E;
		func = sin(x);// Вычисление "точного" значения
		sum = sumE(x, E, n);
		cout << "Точное значение функции равно " << func << endl;
		cout << "Частичная сумма ряда c заданной точностью равна " << sum << endl;
		cout << "Учтено " << n << " членов ряда" << endl;
		sum = sumE(x, E / 10, n);
		cout << "Частичная сумма ряда c точностью, большей в 10 раз, равна " << sum << endl;
		cout << "Учтено " << n << " членов ряда" << endl;

		system("pause");
		system("cls");
		int z = 0;
		cout << "Выберите действие : \n \n \t 1. Выполнить программу. \n \n \t 2. Выйти из программы. \n \n Действие :  ";
		cin >> z;
		if (z != 1)
			break;

	}

	return 0;
}

