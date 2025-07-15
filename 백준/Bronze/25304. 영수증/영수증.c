#include<stdio.h>
int main()
{
    int a, b, c, d = 0, e;
    scanf("%d", &a);
    scanf("%d", &b);
    for(int i = 0; i < b; i++)
    {
        scanf("%d %d", &c, &e);
        d+=c*e;
    }
    if(d == a)
    printf("Yes\n");
    else
        printf("No\n");
    return 0;
}