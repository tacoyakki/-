#include <stdio.h>

int main() {
    int s, t, f;

    scanf("%d", &s);
    scanf("%d %d", &t, &f);
    if (s <= t + f) {
        printf("high speed rail\n");
    } else {
        printf("flight\n");
    }

    return 0;
}