#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// printf = print("text", end='') in python/ Console.Write() in C#
// scanf = input in python/ Console.ReadLine in C#
// %s = placeholders for strings 
// %d = placeholders for int

int main()
{
	printf("Welcome to the scam shop, will you be able to outsmart me?\n");
	int option = 1;
	int Balance = 100;
	int amountFakeFlag;
	int cost;
	long long aff;
	while (option != 0)
	{
		printf("%s\n%s\n%s\n%s\n","[0]Exit","[1]Check Your Money/Balance","[2]Buy Fake Flag","[3]Buy Authentic Flag");
		printf("What would you like to do?\n");
		fflush(stdout);
		scanf("%d", &option);
		printf("You chose option [%d]\n", option);
		if (option == 1)
		{
			printf("You have $%d\n", Balance);
		}

		else if (option == 2)
		{
			printf("1 Fake Flag = $20\n");
			printf("How many Fake Flag do you want to buy? ");
			fflush(stdout);
			scanf("%lld", &aff);
			cost = aff * 20;
			if (aff<0)
			{
				printf("Close but i am not that dumb \n");
			}
			else if (Balance < cost)
			{
				printf("You do not have $%d dollars\n",cost);
			}
			else if (aff > 2147483647)
			{
				amountFakeFlag = aff;
				Balance = Balance - cost;
				printf("You purchase %d Fake Flag\n", amountFakeFlag);
			}
		}
		else if (option == 3)
		{
			printf("1 Authentic Flag = $100,000\n");
			if (Balance >= 100000)
			{
				printf("CTF{0v3rFl0w_theWay}\n");
				printf("You have outsmarted me\n");
				break;
			}
			else 
			{
				printf("You do not have enough money\n");
			}
		}

		else if (option!=0)
		{
			printf("invalid.\n");
		}
	}
}
