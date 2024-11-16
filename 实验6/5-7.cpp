#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<assert.h>
#define  MAX_NUMBER  100
#define  MIN_NUMBER  1
#define  MAX_TIMES   7
int MakeNumber(void);
void GuessNumber(int number);
int main()
{
	int number;
	int cont;
	srand(time(NULL));
	do{
		number = MakeNumber();
		GuessNumber(number);
		printf("Continue?(Y/N):");
		cont = getchar();
		while (getchar() != '\n')
		{
			;
		}
	}while(cont != 'N' && cont != 'n');
	return 0;
}
int MakeNumber()
{
	int number;
	number = (rand()%(MAX_NUMBER - MIN_NUMBER + 1)) + MIN_NUMBER;
	assert(number >= MIN_NUMBER && number <= MAX_NUMBER);
	return number;
}
void GuessNumber(int number)
{
	int guess;
	int times = 0;
	assert(number >= MIN_NUMBER && number <= MAX_NUMBER);
	do{
		times++;
		printf("Round %d:", times);
		scanf("%d", &guess);
		while (getchar()!='\n')
		{
			;
		}
		if(guess > number)
		{
			printf("Wrong! Too high.\n");
		}
		else if(guess<number)
		{
			printf("Wrong! Too low\n");
		}
	}while(guess!=number && times < MAX_TIMES);
	if(guess == number)
	{
		printf("Congratulations! You're so cool!\n");
	}
	else
	{
		printf("Mission failed after %d attempts.\n", MAX_TIMES);
	}
}
