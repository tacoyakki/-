#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for(int i = 0;i < (a / 4); i++)
        printf("long ");
    printf("int");
    return 0;
}