#include <stdio.h>

int main() {
    int m, q, x;
    long long sum = 0;
    int xor = 0;

    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        scanf("%d", &q);

        if (q == 1) {
            scanf("%d", &x);
            sum += x;
            xor ^= x;
        }
        else if (q == 2) {
            scanf("%d", &x);
            sum -= x;
            xor ^= x;
        }
        else if (q == 3) {
            printf("%lld\n", sum);
        }
        else if (q == 4) {
            printf("%d\n", xor);
        }
    }

    return 0;
}
