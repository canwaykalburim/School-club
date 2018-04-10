#include <stdio.h>

int main(void)
{
	int i, j, n;

	scanf_s("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= (n - 2) - i; j++)
			printf(" ");
		for (j = 0; j <= i; j++)
			printf("* ");

		printf("\n");
	}
	return 0;
}