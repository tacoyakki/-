#include<stdio.h>
int main()
{
    int t, n, m;
    scanf("%d",&t);
    for(int i = 1; i <= t; i++)
    {
        scanf("%d %d", &n, &m);
        printf("Case %d: %d\n", i, n+m);
    }
    return 0;
}