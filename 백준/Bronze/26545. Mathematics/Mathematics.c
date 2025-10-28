#include<stdio.h>
int main()
{
    int a, num, asdf = 0;
    scanf("%d", &a);
    for(int i = 0; i < a; i++)
    {
        num = 0;
        scanf("%d", &num);
        asdf += num;
    }
    printf("%d", asdf);
}