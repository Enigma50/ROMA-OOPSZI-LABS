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
		printf("1. ������� 1\n\r");
		printf("2. ������� 2\n\r");
		printf("3. �����\n\r");
		printf("�����: ");
		switch (getch())
		{
		case '1':
		{
			float x = 0, y = 0;
			printf("����� X: "); scanf("%lf", &x);
			printf("����� Y: "); scanf("%lf", &y);
			if (inspace(x, y)) printf("����� � �������.\n\r");
			else printf("����� �� � �������.\n\r");
			break;
		}
		case '2':
		{
			float x;
			printf("����� X: "); scanf("%f", &x);
			printf("\n\r���������: %f\n\r", falco(x));
			break;
		}
		case '3':
			return 0;
			break;
		default:
			printf("�������� ����!\n\r");
			break;
		}
		getch(); system("cls");
	}
	return 0;
}