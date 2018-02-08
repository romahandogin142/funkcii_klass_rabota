#include <stdio.h>
#include <iostream>
#include <locale.h>
#include "MyFuncr.h"
#include <time.h>
using namespace std;
short int nz;

int i, j;

void main(int args, char* argv[])
{
	srand(time(NULL));
	setlocale(LC_ALL, ".1251");

	if (args != 0)
	{
		cout << endl;
		for (int i = 0; i < args; i++)
		{
			cout << argv[i];
		}
		cout << endl;
	}
	
	while (true)
	{

		cout << "Введите номер задания ";
		cin >> nz;
		if (nz == 0)
		{
			break;
			system("exit");
		}
		if (nz == 1)
		{
			/*1.	Получить все четырехзначные счастливые номера.Счастливым называется номер, 
				у которого сумма первых двух цифр номера равна сумме последних двух цифр.
				Использовать функцию для расчета суммы цифр двухзначного числа*/
			char mas[4];
			int h;
			cout << "Введите четырехзначное число "; cin >> mas;
			//mas[5] = '\0';
			h=happy(mas);
			if (h == 1)
				cout << "Это счастливое число\n";
			else cout << "Данное число не счастливое\n";
		}
		else if (nz == 2)
		{
			/*2.	Отсортировать по убыванию заданный массив чисел, используя функцию сортировки.*/
			int mas[10];			
			creat(mas, 10, 15, 50, positive);
			//creat(mas, 10, 20, 80, negative);
			print_arr(mas, 10);
			sort(mas, 10);
			cout << "Отсортированный массив\n";
			print_arr(mas, 10);
		}
		else if (nz == 3)
		{
			/*3.	Отсортировать по возрастанию заданный массив чисел, исключив отрицательные 
				числа. Использовать функцию сортировки.*/
			int mas[10];
			creat(mas, 10, 20, 80, negative);
			print_arr(mas, 10);
			sort(mas, 10, 2);
			cout << "Отсортированный массив\n";
			for (i = 0; i < 10; i++)
			{
				if (mas[i] > 0)cout << mas[i] << "\t";
			}
			cout << endl;
		}
		else if (nz == 4)
		{
			/*4.	Задан одномерный массив из 16 элементов.Сформировать двухмерный массив 4×4,
				используя функцию преобразования любого одномерного массива в двухмерный
				массив размерностью n×n с добавлением нулевых элементов.*/
			int mas[16], mas1[4][4];
			creat(mas, 16, 10, 80, positive);

		}
	}
}
