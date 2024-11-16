#include<stdio.h>
void Func();
int main()
{
	int i;
	for(i=0;i<5;i++)
	{
		Func();
	}
	return 0;
}
void Func()
{
	static int times = 1;
	printf("Func() was called %d time(s).\n",times++);
}
