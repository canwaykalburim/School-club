#include <stdio.h>
#include <string.h>

void palindrome1()
{
	int num1, num2, max = 0, i = 0, temp = 0;
	int result, result2;
	int a[6];

	for (num1 = 100; num1 < 1000; num1++)
	{
		for (num2 = 100; num2 < 1000; num2++)
		{
			temp = 0;
			memset(a, 0, sizeof(a));

			result = num1 * num2;
			result2 = result;

			a[0] = result / 100000;
			result -= (a[0] * 100000);

			a[1] = (result) / 10000;
			result -= (a[1] * 10000);

			a[2] = (result) / 1000;
			result -= (a[2] * 1000);

			a[3] = (result) / 100;
			result -= (a[3] * 100);

			a[4] = (result) / 10;
			result -= (a[4] * 10);

			a[5] = (result) / 1;

			if (a[0] > 0)
			{
				if ((a[0] == a[5]) && (a[1] == a[4]) && (a[2] == a[3]))

					temp = 1;
			}
			else if (a[1] > 0)
			{
				if ((a[1] == a[5]) && (a[2] == a[4]))

					temp = 1;
			}
			if (temp)
				if (max < result2)
				{
					max = result2;
				}
		}
	}
	printf("%d\n", max);
}

int main()
{
	palindrome1();
}