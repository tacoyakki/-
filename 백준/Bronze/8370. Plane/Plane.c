#include <stdio.h>

int main() {
    int n1, k1, n2, k2;

    if (scanf("%d %d %d %d", &n1, &k1, &n2, &k2) == 4) {
        int total_seats = (n1 * k1) + (n2 * k2);
        printf("%d\n", total_seats);
    }

    return 0;
}