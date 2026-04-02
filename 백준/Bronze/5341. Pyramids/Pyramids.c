#include <stdio.h>

int main() {
    long long n;

    while (1) {

        scanf("%lld", &n);
        if (n == 0) {
            break;
        }
        long long total = n * (n + 1) / 2;

        printf("%lld\n", total);
    }

    return 0;
}