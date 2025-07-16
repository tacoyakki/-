#include<stdio.h>
int main()
{
    int a, b;
    int c[10000];
    scanf("%d", &a);
    scanf("%d", &b);
    for(int i = 0; i < a; i++){
        scanf("%d", &c[i]);
    }
    for(int j = 0; j < a; j++){
        if(c[j] < b)
            printf("%d ", c[j]);
    }
    return 0;
}