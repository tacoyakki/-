#include<stdio.h>

int main() {
    int a, b, n; 
    scanf("%d %d %d", &a, &b, &n);

    a %= b;

    int r = 0;
    for (int i = 0; i < n; i++) {
        a *= 10;
        r = a / b;

        a %= b;
        if (a == 0) {
            break; 
        }
    }
    
    printf("%d\n", r);

    return 0;
}