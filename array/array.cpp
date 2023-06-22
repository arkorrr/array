#include <iostream>
using namespace std;


int main()
{
	//Task1 Написать, программу, которая вычисляет прибыль фирмы за 6 месяцев. Пользователь вводит прибыль
	// фирмы за каждый месяц.
	const int size = 6;
	int profit[size];
	int sumOfProfit = 0;
	for (int i = 0; i < size; i++)
	{
		cin >> profit[i];
		sumOfProfit += profit[i];
	}
	cout << sumOfProfit << endl;

	//Task2 Написать программу, которая выводит одномерный массив в обратном порядке.
	const int Size = 3;
	int array[Size] = { 1, 2, 3 };
	for (int i = 2; i >= 0; i--)
	{
		cout << array[i] << endl;
	}

	//Task3 Пользователь вводит длину сторон пятиугольника, каждая сторона заноситься в массив, необходимо
	// вычислить периметр пятиугольника(периметр — сумма всех сторон).
	const int SIZE = 5;
	int perimeter[SIZE];
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> perimeter[i];
		sum += perimeter[i];
	}
	cout << sum << endl;

	//Task4 Пользователь вводит прибыль фирмы за год (12 месяцев).Необходимо определить месяц, в котором
	// прибыль была максимальна и месяц, в котором прибыль была минимальна.
	const int SizE = 12;
	int firm[SizE];
	for (int i = 0; i < SizE; i++)
	{
		cout << "Enter the number of the month and profit for the month: ";
		cin >> firm[i];
	}
	int min = 1, max = 1;
	for (int i = 0; i < SizE; i++)
	{
		min = firm[i] > min ? min : firm[i];
		max = firm[i] < max ? max : firm[i];
	}
	cout << "Min profit for the month = " << min << endl;
	cout << "Max profit for the month = " << max << endl;
}