#include <stdio.h>

int main() {
    int freq[26] = {0};
    int c;

    while ((c = getchar()) != -1) {
        if (c == 10) {
            continue;
        }

        if (c >= 65 && c <= 90) { 
            freq[c - 65]++; 
        } 
        else if (c >= 97 && c <= 122) { 
            freq[c - 97]++; 
        }
    }

    int max_freq = 0;
    int max_index = -1; 
    int is_duplicate = 0; 
    int i; 

    for (i = 0; i < 26; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            max_index = i;
            is_duplicate = 0;
        } else if (freq[i] == max_freq && max_freq > 0) {
            is_duplicate = 1;
        }
    }

    if (is_duplicate == 1) {
        printf("?\n");
    } else if (max_index != -1) {
        printf("%c\n", 65 + max_index);
    } 

    return 0;
}