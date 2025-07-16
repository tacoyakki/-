#include<stdio.h>
int main()
{
    int a, b, cnt = 0;
    int c[100];
    scanf("%d", &a);
    for(int i = 0; i < a; i++)
    {
        scanf("%d",&c[i]);
    }
    scanf("%d", &b);
    for(int j = 0; j < a; j++)
    {
        if(c[j] == b)
            cnt++;
    }
    printf("%d", cnt);
}