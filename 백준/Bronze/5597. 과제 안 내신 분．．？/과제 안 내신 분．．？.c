#include <stdio.h>

int main() {
    int submitted[31] = {0}; 
    int student_num;

    for (int i = 0; i < 28; i++) {
        scanf("%d", &student_num);
        submitted[student_num] = 1; 
    }

    for (int i = 1; i <= 30; i++) {
        if (submitted[i] == 0) { 
            printf("%d\n", i);
        }
    }

    return 0;
}