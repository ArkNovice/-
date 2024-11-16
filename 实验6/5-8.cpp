#include <stdio.h>
int main()
{
	int n,i;
	long result =1;
	printf("Input n: ");
	scanf("%d", &n);
	for (i=1; i<= n; i++)
	{
		result *= i;
	}
	if (n>=0)
	{
		printf("%d!= %ld\n", n, result);
	}
	return 0;
}
