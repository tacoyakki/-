#include <stdio.h>

int main() {
    char word[101]; 
    
    if (scanf("%s", word) != 1) {
        return 0;
    }

    int size = 0;
    while (word[size] != '\0') {
        size++;
    }

    int start = 0;
    int end = size - 1;
    int is_palindrome = 1; 

    while (start < end) {
        if (word[start] != word[end]) {
            is_palindrome = 0; 
            break;
        }

        start++;
        end--;
    }

    printf("%d\n", is_palindrome);

    return 0;
}