#include <stdio.h>

int main() {
    int A, B, C;
    int D;

    scanf("%d %d %d", &A, &B, &C);
    scanf("%d", &D);

    int total_seconds = A * 3600 + B * 60 + C + D;

    A = (total_seconds / 3600) % 24;
    B = (total_seconds / 60) % 60;
    C = total_seconds % 60;

    printf("%d %d %d\n", A, B, C);

    return 0;
}