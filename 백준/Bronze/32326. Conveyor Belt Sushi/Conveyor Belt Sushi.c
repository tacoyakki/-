#include <stdio.h>

int main() {
    int R, G, B;
    int total_cost;

    if (scanf("%d %d %d", &R, &G, &B) == 3) {
        total_cost = (R * 3) + (G * 4) + (B * 5);

        printf("%d\n", total_cost);
    }

    return 0;
}