#include <stdio.h>

int main() {
    int N, A, B; 

    scanf("%d %d %d", &N, &A, &B); 
    int T_Subway = (N >= B) ? N : B;
    if (A < T_Subway) {
        printf("Bus\n");
    } else if (A > T_Subway) {
        printf("Subway\n");
    } else {
        printf("Anything\n");
    }
    return 0;
 
}