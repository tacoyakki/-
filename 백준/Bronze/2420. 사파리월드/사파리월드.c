#include<stdio.h>
int main()
{
    long long n, m, re;
    scanf("%lld %lld", &n, &m);
    re = n-m;
    if(re < 0)
    {
        re = re * -1;
    }
    printf("%lld",re);
    return 0;
}