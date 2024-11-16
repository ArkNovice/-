#include <stdio.h>
int main()
{
	int a=1;
	{
		int a=2;
		printf("In the INNER block,a = %d\n",a);
	}
	printf("In the OUTER block,a = %d\n",a);
	return 0;
 } 
