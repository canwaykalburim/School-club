#include <stdio.h>

int main(void)
{
	//변의 길이는 a < b < c라고 가정한다.
	int a = 0, b = 0, c = 0;

	scanf("%d %d %d", &a, &b, &c);

	if (a == b && b == c)
	{
		printf("정삼각형");
	}
	else if (a*a + b * b == c * c)
	{
		printf("직각삼각형");
	}
	else if ((a == b || a == c || b == c) && a + b > c)
	{
		printf("이등변삼각형");
	}
	else if (a + b > c)
	{
		printf("삼각형");
	}
	else
		printf("삼각형아님");
}