#include <stdio.h>

int main() {
    int chess[6];
    int standard_pieces[6] = {1, 1, 2, 2, 2, 8};

    for (int i = 0; i < 6; i++) {
        scanf("%d", &chess[i]);
    }

    for (int i = 0; i < 6; i++) {
        chess[i] = standard_pieces[i] - chess[i];
    }

    for (int i = 0; i < 6; i++) {
        printf("%d ", chess[i]);
    }
    printf("\n");

    return 0;
}