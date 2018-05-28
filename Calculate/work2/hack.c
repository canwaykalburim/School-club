#include <stdio.h>
#include <stdlib.h>

int add(double arg1, double arg2)
{
	printf("%.2lf + %.2lf = %2.lf", arg1, arg2, arg1 + arg2);
	return 0;
}
int minus(double arg1, double arg2)
{
	printf("%.2lf - %.2lf = %.2lf", arg1, arg2, arg1 - arg2);
	return 0;
}
int devide(double arg1, double arg2)
{
	printf("%.2lf / %.2lf = %2.lf", arg1, arg2, arg1 / arg2);
	return 0;
}
int multiply(double arg1, double arg2)
{
	printf("%.2lf * %.2lf = %2.lf", arg1, arg2, arg1 * arg2);
	return 0;
}

int main()
{
	double num1, num2;

	char oper;

	scanf("%lf %c %lf", &num1, &oper, &num2);

	switch (oper)
	{
	case '+' : add(num1, num2);
		return 0;
	case '-' : minus(num1, num2);
		return 0;
	case '/' : devide(num1, num2);
		return 0;
	case '*' : multiply(num1, num2);
		return 0;
	}
	printf("error/n");
}
