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
		printf("1. ������� 1\n\r");
		printf("2. ������� 2\n\r");
		printf("3. ������� 3\n\r");
		printf("4. ������� 4\n\r");
		printf("5. ������� 5\n\r");
		printf("6. �����\n\r");
		printf("�����: ");
		answer = getchar();
		system("cls");
		switch (answer)
		{
		case '1':
		{
			int n = 0;
			printf("����� N: "); scanf("%d", &n);
			printf("���������: %lf", summ(n));
			break;
		}
		case '2':
		{
			double e = 0;
			printf("����� E: "); scanf("%lf", &e);
			printf("���������: %lf", summ2(e));
			break;
		}
		case '3':
		{
			int n = 0, k = 0;
			printf("����� N: "); scanf("%d", &n);
			printf("����� K: "); scanf("%d", &k);
			print(n, k);
			break;
		}
		case '4':
		{
			double e = 0;
			printf("����� E: "); scanf("%lf", &e);
			printf("���������: %d", findFirstElement(e));
			break;
		}
		case '5':
		{
			double e = 0;
			printf("����� E: "); scanf("%lf", &e);
			printf("���������: %d", findFirstNegativeElement(e));
			break;
		}
		case '6':
			break;
		default:
			printf("�������� ����!\n\r");
			break;
		}
		system("pause"); system("cls");
	} while (answer != '6');
	return 0;
}