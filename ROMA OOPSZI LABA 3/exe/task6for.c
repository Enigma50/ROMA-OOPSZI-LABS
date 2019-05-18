#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "head.h"

int main()
{
	setlocale(LC_ALL, "Rus");
	char answer;
	do
	{
		printf("1. Задание 1\n\r");
		printf("2. Задание 2\n\r");
		printf("3. Задание 3\n\r");
		printf("4. Задание 4\n\r");
		printf("5. Задание 5\n\r");
		printf("6. Выход\n\r");
		printf("Выбор: ");
		answer = getchar();
		system("cls");
		switch (answer)
		{
		case '1':
		{
			int n = 0;
			printf("Введи N: "); scanf("%d", &n);
			printf("Результат: %lf", summ(n));
			break;
		}
		case '2':
		{
			double e = 0;
			printf("Введи E: "); scanf("%lf", &e);
			printf("Результат: %lf", summ2(e));
			break;
		}
		case '3':
		{
			int n = 0, k = 0;
			printf("Введи N: "); scanf("%d", &n);
			printf("Введи K: "); scanf("%d", &k);
			print(n, k);
			break;
		}
		case '4':
		{
			double e = 0;
			printf("Введи E: "); scanf("%lf", &e);
			printf("Результат: %d", findFirstElement(e));
			break;
		}
		case '5':
		{
			double e = 0;
			printf("Введи E: "); scanf("%lf", &e);
			printf("Результат: %d", findFirstNegativeElement(e));
			break;
		}
		case '6':
			break;
		default:
			printf("Неверный ввод!\n\r");
			break;
		}
		system("pause"); system("cls");
	} while (answer != '6');
	return 0;
}