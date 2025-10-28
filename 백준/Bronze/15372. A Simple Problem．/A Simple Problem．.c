#include<stdio.h>
int main()
{
    int t, n;
    long long k;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        k = (long long)n * n;
        printf("%lld\n",k);
    }
}