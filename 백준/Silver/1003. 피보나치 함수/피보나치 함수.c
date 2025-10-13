#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    int fib0[41] = {0};
    int fib1[41] = {0};

    fib0[0] = 1; fib1[0] = 0;
    fib0[1] = 0; fib1[1] = 1;

    for (int i = 2; i <= 40; i++) {
        fib0[i] = fib0[i - 1] + fib0[i - 2];
        fib1[i] = fib1[i - 1] + fib1[i - 2];
    }

    while (T--) {
        int n;
        scanf("%d", &n);
        printf("%d %d\n", fib0[n], fib1[n]);
    }

    return 0;
}
