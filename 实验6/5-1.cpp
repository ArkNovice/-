#include <stdio.h>
int Max(int x,int y)
{
	int result = (x > y)?x:y;
	return result;
}
int main()
{
	int a=12,b=24;
	int larger = Max (a,b);
	printf("%d is larger.\n", larger);
	return 0;
}
