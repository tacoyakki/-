#include<stdio.h>
int main()
{
    int fac;
    long long re = 1;
    scanf("%d", &fac);
    for(int i = fac; i > 1; i--)
        re*=i;
    printf("%lld", re);
    return 0;
}