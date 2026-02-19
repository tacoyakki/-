#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        printf(
            " @@@   @@@ \n"
            "@   @ @   @\n"
            "@    @    @\n"
            "@         @\n"
            " @       @ \n"
            "  @     @  \n"
            "   @   @   \n"
            "    @ @    \n"
            "     @     \n"
        );
    }

    return 0;
}
