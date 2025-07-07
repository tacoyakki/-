#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (b<45){
        if(a<1)
            printf("%d %d", a+24-1,b+60-45);
        else
            printf("%d %d", a-1,b+60-45);
            
    }
    else
        printf("%d %d", a, b-45);
}