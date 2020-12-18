#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <locale>
#include <malloc.h>
#include <stdlib.h>


int main()
{
	setlocale(0, "rus");

	//Задания 1-3
	int *mass, size, min = 1001, max = -1, difference;

	printf("Задание #1-3\n");
	printf("Введите размер массива: ");
	scanf_s("%d", &size);

	mass = (int *)malloc(size * sizeof(int));

	for (int i = 0; i < size; i++)
		printf("%d ", mass[i] = rand() % 1000);

	for (int j = 0; j < size; j++) {
		if (mass[j] > max) {
			max = mass[j];
			min = mass[j] + 1;
		}
	}

	for (int j = 0; j < size; j++) {
		if (mass[j] < min) {
			min = mass[j];
		}
	}

	difference = max - min;

	printf("\nМаксимальное значение = %d\n", max);
	printf("Минимальное значение = %d\n", min);
	printf("Разница между максимальным и минимальным значением: %d\n\n\n", difference);
	//-----------------------------------------------------------------------------------//

	//Задание 4

	int **mass1, *summ1, x, y;

	printf("Задание #4\n");
	printf("Введите количество строк: ");
	scanf_s("%d", &x);
	printf_s("Введите количество столбцов: ");
	scanf_s("%d", &y);

	summ1 = (int *)malloc(x * sizeof(int));

	mass1 = (int **)malloc(x * sizeof(int));
	for (int i = 0; i < x; i++) {
		mass1[i] = (int*)malloc(y * sizeof(int));
	}

	for (int i = 0; i < x; i++) {
		summ1[i] = 0;
		for (int j = 0; j < y; j++) {
			printf("%4d", mass1[i][j] = rand() % 1000);
			summ1[i] += mass1[i][j];
		}
		printf("\n");
	}

	for (int i = 0; i < x; i++) {
		printf("%d\n", summ1[i]);
	}
	//-----------------------------------------------------------------------------------//

	//Задание 5
	printf("Задание #4\n");

	struct student {
		char famil[20], name[20], number[20];
	};

	char poisk[20];
	int flag = 0;
	student arr[3];

	printf("Введите фамилию, имя и номер\n");
	for (int i = 0; i < 3; i++)
		scanf("%s %s %s", arr[i].famil, arr[i].name, arr[i].number);

	for (int i = 0; i < 3; i++)
		printf(" %s  %s  %s \n", arr[i].famil, arr[i].name, arr[i].number);

	printf("Введите фамилию\n");
	scanf("%s", poisk);

	for (int i = 0; i < 3; i++) {
		if (strcmp(poisk, arr[i].famil) == 0) {
			flag = 1;
			printf("Найденный студент\n");
			printf(" %s  %s  %s \n", arr[i].famil, arr[i].name, arr[i].number);
		}

	}
	if (flag == 0) {
		printf("Студент не найден");
	}

	return 0;
}
