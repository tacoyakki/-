#include <stdio.h>
#include <string.h>

int main() {
    char n_str[11];
    int n_int;

    scanf("%s", n_str);
    sscanf(n_str, "%d", &n_int);

    int has_seven = 0;
    int divisible_by_seven = (n_int % 7 == 0);

    for (int i = 0; i < strlen(n_str); i++) {
        if (n_str[i] == '7') {
            has_seven = 1;
            break;
        }
    }
    if (!has_seven && !divisible_by_seven) {
        printf("0\n");
    } else if (!has_seven && divisible_by_seven) {
        printf("1\n");
    } else if (has_seven && !divisible_by_seven) {
        printf("2\n");
    } else {
        printf("3\n");
    }

    return 0;
}