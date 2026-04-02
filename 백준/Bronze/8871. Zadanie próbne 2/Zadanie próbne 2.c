#include <stdio.h>

int main() {
    int n;
   if (scanf("%d", &n) == 1) {
        printf("%d %d\n", (n + 1) * 2, (n + 1) * 3);
    }

    return 0;
}