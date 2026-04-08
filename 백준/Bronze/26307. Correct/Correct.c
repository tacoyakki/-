#include <stdio.h>

int main() {
    int h, m;
    
    if (scanf("%d %d", &h, &m) == 2) {
        int total_minutes = (h - 9) * 60 + m;
        printf("%d\n", total_minutes);
    }
    
    return 0;
}