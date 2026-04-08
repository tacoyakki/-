#include <stdio.h>

int main() {
    int N;
    char word[] = "WelcomeToSMUPC";
    
    if (scanf("%d", &N) == 1) {
        printf("%c\n", word[(N - 1) % 14]);
    }
    
    return 0;
}