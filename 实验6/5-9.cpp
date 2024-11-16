#include<stdio.h>
void Hanoi(int n, char a, char b, char c);
void Move(int num, char from, char to);
int main()
{
	int n;
	printf("Input the number of disk:");
	scanf("%d", &n);
	printf("The step of moving %3d disk:\n", n);
	Hanoi(n, 'A', 'B', 'C');
	return 0;
}
void Hanoi(int n, char a, char b, char c)
{
	if(n==1)
	{
		Move(n, a, b);
	}
	else
	{
		Hanoi(n-1, a, c, b);
		Move(n, a, b);
		Hanoi(n-1, c, b, a);
	}
}
void Move (int num, char from, char to)
{
	printf("Move %d:from %c to %c\n", num, from, to);
}
