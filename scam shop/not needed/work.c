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
	int work;
	char suck[15];
	int cost;
	const char suck_copy[15] = "iSuckAtScamming";
	while (option != 0)
	{
		printf("%s\n%s\n%s\n%s\n%s\n","[0]Exit","[1]Check Your Money/Balance","[2]Buy Fake Flag","[3]Buy Authentic Flag","[4]Go Work");
		printf("What would you like to do?\n");
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
			scanf("%d", &amountFakeFlag);
			cost = amountFakeFlag * 20;
			if (Balance < cost)
			{
				printf("You do not have %d money\n",cost);
			}
			else 
			{
				Balance = Balance - cost;
				printf("You purchase %d Fake Flag\n", amountFakeFlag);
			}
		}
		else if (option == 3)
		{
			printf("1 Authentic Flag = $100,000\n");
			if (Balance >= 100000)
			{
				printf("Flag\n");
				printf("You have outsmarted me\n");
				break;
			}
			else 
			{
				printf("You do not have enough money\n");
			}
		}
		else if (option == 4)
		{
			printf("Do you want to work?\nType \"1\" for yes\nType something else for no\n");
			printf("For everytime you work, i will pay u $1\n");
			scanf("%d", &work);
			if (work==1)
			{
				printf("Type \"iSuckAtScamming\"\n");
				scanf("%s", suck); 
				if (suck_copy == suck)
				{
					Balance += 1;
					printf("work work work work work\n");
					continue;
				}
				else
				{
					printf("%s\n", suck);
					printf("lousy work\n");
				}
			}
			else if (work== 0) 
			{
				printf("work smart not hard\n");
			}
		}

		else if (option!=0)
		{
			printf("invalid.\n");
		}
	}
}
