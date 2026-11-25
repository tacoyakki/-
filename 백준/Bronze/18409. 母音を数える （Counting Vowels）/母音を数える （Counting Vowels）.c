#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char s[55];
    scanf("%s", s);

    int count = 0;
    for (int i = 0; i < n; i++) {
        char c = s[i];
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}