#include <stdio.h>
int global;
void GlobalPlusPlus(void);
int main()
{
	global=1;
	printf("Before GlobalPlusPlus(),it is %d\n",global);
	GlobalPlusPlus();
	printf("After GlobalPlusPlus(),it is %d\n",global);
	return 0;
}
void GlobalPlusPlus(void)
{
	printf("Before ++,it is %d\n",global);
	global++;
	printf("After ++,it is %d\n",global);
}
