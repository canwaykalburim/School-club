#include <stdio.h>
#include <stdlib.h>

int main(int argc, char**argv)
{
	double num1, num2;

	printf("Write down the number you want\n");

	printf("number1: ");
	scanf_s("%lf", &num1);

	printf("number2: ");
	scanf_s("%lf", &num2);

	if (num1 > num2)
	{
		printf("number1 is bigger than number2");
	}
	else if (num1 < num2)
	{
		printf("number2 is bigger than number1");
	}
	else if (num1 == num2)
	{
		printf("same");
	}
	else
		printf("error\n");

	return 0;
}