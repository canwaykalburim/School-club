#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>

void login();

char Back[100] = { 0 };

int main(void)
{
	login();
	return 0;
}

char Name[30] = "Hong Gildong";
char Manger[30] = "Seodongyoung";
char SystemName[30] = "meal Information system";

void managermode()
{
	int userInput = 0;
	
	printf("==MANAGERMODE==\n\n");

	while (1)
	{
		printf("1. change user name\n");
		printf("2. change manager\n");
		printf("3. change title\n");
		printf("4. login menu\n\n");

		printf("What do you want to see?: ");
		scanf("%d", &userInput);

		if (userInput == 1)
		{
			system("cls");
			printf("Username : %s\n\n", Name);
			printf("If you don't want to change, enter the same way.\n");
			scanf("%s", Name);
			system("cls");
		}
		else if (userInput == 2)
		{
			system("cls");
			printf("Manager : %s\n\n", Manger);
			printf("If you don't want to change, enter the same way.\n");
			scanf("%s", Manger);
			system("cls");
		}
		else if (userInput == 3)
		{
			system("cls");
			printf("Title : %s\n\n", SystemName);
			printf("If you don't want to change, enter the same way.\n");
			scanf("%s", SystemName);
			system("cls");
		}
		else if (userInput == 4)
		{
			system("cls");
			login();
		}
		else
		{
			system("cls");
			printf("It doesn't exist.\n\n");
			printf("If you want to go back, press any key\n\n");
			_getch();
			system("cls");
			managermode();
		}
	}
}

void usermode()
{
	int num1 = 0; 
	
	printf("==USERMODE==\n\n");
	printf("Please enter the number of the item you want to view.\n\n");

	printf("1. breakfast\n");
	printf("2. lunch\n");
	printf("3. dinner\n");
	printf("4. login menu\n\n");
	
	printf("What do you want to see?: ");
	scanf("%d", &num1);

	if (num1 == 1)
	{
		system("cls");
		
		printf("breakfast menu\n");
		printf("--------------------\n");
		
		printf("rice\n");
		printf("Smoked chicken\n");
		printf("Soybean Paste Stew\n");
		printf("Kimchi\n\n");
		
		printf("if you want to back, enter  \"back\"\n");
		scanf("%s", &Back);
		
		if (strcmp(Back, "back") == 0)
		{
			system("cls");
			usermode();
		}
		else
		{
			system("cls");
			printf("fail... finish the project");
		}
	}
	else if (num1 == 2)
	{
		system("cls");
		
		printf("lunch menu\n");
		printf("--------------------\n");

		printf("rice\n");
		printf("Pork barbecue\n");
		printf("Clear seaweed soup\n");
		printf("Kimchi\n");
		printf("An apple\n\n");
		
		printf("if you want to back, enter  \"back\"\n");
		scanf("%s", &Back);

		if (strcmp(Back, "back") == 0)
		{
			system("cls");
			usermode();
		}
		else
		{
			system("cls");
			printf("fail... finish the project");
		}
	}
	else if (num1 == 3)
	{
		system("cls");
		
		printf("dinner menu\n");
		printf("-------------------\n");
		
		printf("rice\n");
		printf("Back ribs\n");
		printf("Kimchi stew\n");
		printf("Kimchi\n");
		printf("Grape juice\n\n");
		printf("if you want to back, enter  \"back\"\n");
		scanf("%s", &Back);

		if (strcmp(Back, "back") == 0)
		{
			system("cls");
			usermode();
		}
		else
		{
			system("cls");
			printf("fail... finish the project");
		}
	}
	else if (num1 == 4)
	{
		system("cls");
		login();
	}
	else
	{
		system("cls");
		printf("It doesn't exist.\n\n");
		printf("If you want to go back, press any key\n");
		_getch();
		system("cls");
		usermode();
	}
}

void login()
{
	char Userinput[18] = { 0 };

	printf("Please enter your password\n");

	printf("Password: ");
	scanf("%s", Userinput);

	if (strcmp(Userinput, "1234u") == 0)
	{
		system("cls");
		usermode();
	}
	else if (strcmp(Userinput, "12345m") == 0)
	{
		system("cls");
		managermode();
	}
	else
	{
		printf("login error!\n\n");
		printf(" - Please check your password - \n\n");
		printf("If you want to go back, press any key\n\n");
		_getch();
		system("cls");
		login();
	}
}