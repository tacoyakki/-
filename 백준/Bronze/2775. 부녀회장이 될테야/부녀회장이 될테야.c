#include <stdio.h>

int main() {
    int T, k, n;
    int apartment[15][15] = {0};

    for (int i = 0; i < 15; i++) {
        apartment[0][i] = i;
    }
    for (int i = 1; i < 15; i++) {
        for (int j = 1; j < 15; j++) {
            apartment[i][j] = apartment[i][j - 1] + apartment[i - 1][j];
        }
    }

    scanf("%d", &T);
    while (T--) {
        scanf("%d", &k);
        scanf("%d", &n);
        printf("%d\n", apartment[k][n]);
    }

    return 0;
}