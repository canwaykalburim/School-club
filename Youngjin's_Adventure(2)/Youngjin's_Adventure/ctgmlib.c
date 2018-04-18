#include "ctgmlib.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

void setColor(int n)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
	return;
}

void messagePrint(char *character, int charColor, const char *format, ...)
{
	va_list arg;
	int count;
	system("cls");
	putchar('\t');
	if (!strcmp(character, "NULL")) setColor(15);
	else
	{
		setColor(15);		 printf("[");
		setColor(charColor); printf("%s", character);
		setColor(15);	     printf("]: ");
	}
	va_start(arg, format);
	count = vprintf(format, arg);
	va_end(arg);

	_getch();

	return;
}