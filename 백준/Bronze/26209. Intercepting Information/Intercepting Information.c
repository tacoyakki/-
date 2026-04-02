#include <stdio.h>

int main() {
    int bit;
    int failed = 0;
    
    for (int i = 0; i < 8; i++) {
        if (scanf("%d", &bit) == 1) {
            if (bit == 9) {
                failed = 1;
            }
        }
    }

    if (failed) {
        printf("F\n");
    } else {
        printf("S\n");
    }

    return 0;
}