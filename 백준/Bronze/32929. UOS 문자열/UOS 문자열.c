#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);
    if (n % 3 == 1) {
        printf("U\n");
    } else if (n % 3 == 2) {
        printf("O\n");
    } else {
        printf("S\n");
    }

    return 0;
}