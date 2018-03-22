#include<stdio.h>
#include<stdlib.h>

int main()
{
	double weight, height, BMI;

	printf("Your wight: ");
	scanf_s("%lf", &weight);
	printf("Your height: ");
	scanf_s("%lf", &height);

	BMI = weight / (height*height);
	height /= 100;

	printf("Your BMI = %.2lf", BMI);
}