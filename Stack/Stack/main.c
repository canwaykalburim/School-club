#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#define SIZE 10

int stack[SIZE];
int top = 0;

void pop();
void menu();

void push(int a)
{
	system("cls");

	if (top >= SIZE)
	{
		printf("over flow\n");
	}
	else
	{
		top++;
		stack[top] = a;
	}
}

void pop()
{
	system("cls");

	if (top == 0)
	{
		printf("underflow\n");
	}
	else
	{
		printf("pop: %d\n", stack[top - 1]);
		top--;
	}
}

void menu()
{
	int menu = 0, nInput;

	while (1)
	{
		printf("1. Push \n2. Pop \n3. Exit \n¢¡ ");
		scanf_s("%d", &menu);
		if (menu == 1)
		{
			system("cls");
			printf("¢¡ ");
			scanf_s("%d", &nInput);
			push(nInput);
		}
		else if (menu == 2)
		{
			pop();
		}
		else if (menu == 3)
		{
			break;
		}
		else
		{
			printf("error\n");
			_getch();
			system("cls");
		}
	}
}

int main()
{
	menu();

	return 0;
}