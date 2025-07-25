#include <stdio.h>

int main() {
    int n[9];
    int mv = 0;
    int mi = 0;

    for (int i = 0; i < 9; i++) {
        scanf("%d", &n[i]);
    }
    mv = n[0];
    mi = 1;
    for (int i = 1; i < 9; i++) {
        if (n[i] > mv) {
            mv = n[i];
            mi = i + 1;
        }
    }
    printf("%d\n", mv);
    printf("%d\n", mi);
    return 0;
}