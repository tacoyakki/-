#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char a[21];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%20s", a);
        if(strlen(a)>9||strlen(a)<6)
        {
            printf("no\n");
        }
        else
            printf("yes\n");
    }
    return 0;
}