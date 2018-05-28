#include <stdio.h>

void plus(double arg1, double arg2)
{
	printf("%.3lf + %.3lf = %3.lf", arg1, arg2, arg1 + arg2);
}

void minus(double arg1, double arg2)
{
	printf("%.3lf - %.3lf = %.3lf", arg1, arg2, arg1 - arg2);
}

void devide(double arg1, double arg2)
{
	printf("%.3lf / %.3lf = %.3lf", arg1, arg2, arg1 / arg2);
}

void multiply(double arg1, double arg2)
{
	printf("%.3lf * %.3lf = %.3lf", arg1, arg2, arg1 * arg2);
}

int main()
{
	double num1, num2;

	char oper;

	printf("계산식을 입력하세요. \n⇒ ");
	scanf("%lf %c %lf", &num1, &oper, &num2);

	switch (oper)
	{
	case '+': plus(num1, num2);
		return 0;
	case '-': minus(num1, num2);
		return 0;
	case '/': devide(num1, num2);
		return 0;
	case '*': multiply(num1, num2);
		return 0;
	}
	printf("error/n");
}
