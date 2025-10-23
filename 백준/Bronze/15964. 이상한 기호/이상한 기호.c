#include<stdio.h>
int main()
{
    long long A, B, a;
    
    scanf("%lld %lld", &A, &B);
    a = (A + B) * (A - B);
    printf("%lld",a);
    return 0;
}