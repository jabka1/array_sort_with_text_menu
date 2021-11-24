#include <stdio.h>
#include <Windows.h>
#include "Main.h"
#include "const.h"

int main()
{
	int menu;
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int* elements = new int[total];
label2:;
	printf("1.Вивести рандомний масив\n");
	printf("2.Сортувати рандомний масив\n");
	printf("3.Очистити\n");
	printf("4.Закінчити роботу\n");
label:;
	printf("> ");
	scanf_s("%d", &menu);
	switch (menu)
	{
	case 1:
		generate_array(elements);
		print_array(elements);
		break;
	case 2:
		sort_array(elements);
		print_sort_array(elements);
		break;
	case 3:
		system("cls");
		goto label2;
		break;
	case 4:
		return 1;
		break;
	default:
		printf("Введене число не відповідає жодному пункту меню.\n");
	}
	goto label;
	return 0;
}