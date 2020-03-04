#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rollem(int);

int main() 
{
	int dice, count, roll;
	int sides;
	int set, sets;
	srand((unsigned int) time(0));
	printf("Enter the number of sets; enter q to stop: ");
	while (scanf("%d", &sets) == 1)     
	{
		printf("How many sides and how many dice?  ");
		if (scanf("%d %d", &sides, &dice) != 2)         
		{
			puts("not integers -- terminating input loop.");
			break;
		}
		printf("Here are %d sets of %d %d-sided throws.\n", sets, dice, sides);
		for (set = 0; set < sets; set++)         
		{
			for (roll = 0, count = 0; count < dice; count++)                 
			roll += rollem(sides);                
			       printf("%4d ", roll);
			if (set % 15 == 14)                 
			putchar('\n');
		}
		if (set % 15 != 0)             putchar('\n');
		printf("How many sets? Enter q to stop: ");
	}
	puts("GOOD FORTUNE TO YOU!\n");
	return 0;
}
int rollem(int sides) 
{
	int roll;
	
	roll = rand() % sides + 1;
	return roll;
}


