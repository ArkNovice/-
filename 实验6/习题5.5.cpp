#include <stdio.h>
int GCD(int a, int b) 
{
    while (b != 0) 
	{
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int MinCommonMultiple(int a, int b) {
    return (a / GCD(a, b)) * b;
}

int main()
{
    int num1, num2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    printf("The Least Common Multiple of %d and %d is %d\n", num1, num2, MinCommonMultiple(num1, num2));

    return 0;
}
