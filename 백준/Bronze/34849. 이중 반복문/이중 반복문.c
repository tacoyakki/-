#include <stdio.h>

int main() {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;

    long long operations = n * n;

    if (operations <= 100000000) {
        printf("Accepted\n");
    } else {
        printf("Time limit exceeded\n");
    }

    return 0;
}