#include<stdio.h>
int f(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    
    return f(n - 1) + f(n - 2);
}
int main()
{
    int n1;
    scanf("%d", &n1);
    printf("%d\n", f(n1));
    return 0;
}