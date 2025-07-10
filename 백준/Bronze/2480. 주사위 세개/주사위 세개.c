#include<stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && a == c) {
        printf("%d\n", 10000 + a * 1000);
    }
    else if (a == b) {
        printf("%d\n", 1000 + a * 100);
    }
    else if (b == c) {
        printf("%d\n", 1000 + b * 100);
    }
    else if (a == c) {
        printf("%d\n", 1000 + a * 100);
    }
    else {
        int max_val = a;
        if (b > max_val) {
            max_val = b;
        }
        if (c > max_val) {
            max_val = c;
        }
        printf("%d\n", max_val * 100);
    }

    return 0;
}