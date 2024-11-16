#include<ctype.h>
#include<stdio.h>
char UserInput;
static void CleanStdin()
{
	while(getchar()!='\n')
	{
		;
	}
}
int YesOrNo()
{
	char answer;
	int result = -1;
	do
	{
		printf("(Y/N)");
		UserInput = getchar();
		answer = toupper(UserInput);
		if(answer == 'Y')
		{
			result = 1;
		}
		else if (answer =='N')
		{
			result = 0;
		}
		else
		{
			printf("Input error.Please type 'Y'or'N'\n");
		}
		CleanStdin();
	}while (result != 1 && result != 0);
	return result;
}
