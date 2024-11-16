#include <stdio.h>
void GlobalPlusPlus(void);
int main()
{
	int global=1;
	printf("Before GlobalPlusPlus(),it is %d\n",global);
	GlobalPlusPlus();
	printf("After GlobalPlusPlus(),it is %d\n",global);
	return 0;
}
void GlobalPlusPlus(void)
{
	int global=1;
	printf("Before ++,it is %d\n",global);
	global++;
	printf("After ++,it is %d\n",global);
}
