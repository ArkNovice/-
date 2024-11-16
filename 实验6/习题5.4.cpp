#include <stdio.h>
long long factorial(int n) 
{
    long long result = 1;
    for (int i = 2; i <= n; ++i) 
	{
        result *= i;
    }
    return result;
}
long long combination(int m, int k) 
{
    if (k > m - k) 
	{
        k = m - k;
    }
    long long result = 1;
    for (int i = 1; i <= k; ++i) 
	{
        result = result * (m - i + 1) / i;
    }
    return result;
}
int main() 
{
    int m, k;
    printf("������m��k��ֵ��");
    scanf("%d %d", &m, &k);
    if (k < 0 || k > m) 
	{
        printf("k��ֵ������0��m֮�䡣\n");
        return 1;
    }

    long long p = combination(m, k);
    printf("�����C(%d, %d) = %lld\n", m, k, p);

    return 0;
}
