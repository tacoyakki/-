#include<stdio.h>
int main()
{
    int a, b, re;
    scanf("%d", &a);
    scanf("%d", &b);
    
    re = (b-a+24)%24;
    printf("%d\n",re);
}