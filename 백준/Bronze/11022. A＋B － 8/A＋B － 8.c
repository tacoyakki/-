#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d", &a);
    for(int i = 0; i < a; i++)
    {
        scanf("%d %d", &b, &c);
        printf("Case #%d: %d + %d = %d\n", i+1, b, c, b+c);
    }
    return 0;
}