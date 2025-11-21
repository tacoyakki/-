#include <stdio.h>

int main(void) {
    int N;
    int R;
    char C;
    
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d %c", &R, &C);

        for (int j = 0; j < R; j++) {
            printf("%c", C);
        }
        
        printf("\n");
    }
    
    return 0;
}