#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int inspace(float x, float y);
float falco(float x);

int main()
{
	setlocale(LC_ALL, "Rus");
	while (1)
	{
		printf("1. Задание 1\n\r");
		printf("2. Задание 2\n\r");
		printf("3. Выход\n\r");
		printf("Выбор: ");
		switch (getch())
		{
		case '1':
		{
			float x = 0, y = 0;
			printf("Введи X: "); scanf("%lf", &x);
			printf("Введи Y: "); scanf("%lf", &y);
			if (inspace(x, y)) printf("Точка в области.\n\r");
			else printf("Точка не в области.\n\r");
			break;
		}
		case '2':
		{
			float x;
			printf("Введи X: "); scanf("%f", &x);
			printf("\n\rРезультат: %f\n\r", falco(x));
			break;
		}
		case '3':
			return 0;
			break;
		default:
			printf("Неверный ввод!\n\r");
			break;
		}
		getch(); system("cls");
	}
	return 0;
}