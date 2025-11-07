#include <stdio.h>
#include <string.h>

#define MAX_INPUT_LEN 100

int main() {
    char input_buffer[MAX_INPUT_LEN];

    while (scanf("%s", input_buffer) == 1) {
        
        if (strcmp(input_buffer, "CU") == 0) {
            printf("see you\n");
        } else if (strcmp(input_buffer, ":-)") == 0) {
            printf("I’m happy\n");
        } else if (strcmp(input_buffer, ":-(") == 0) {
            printf("I’m unhappy\n");
        } else if (strcmp(input_buffer, ";-)") == 0) {
            printf("wink\n");
        } else if (strcmp(input_buffer, ":-P") == 0) {
            printf("stick out my tongue\n");
        } else if (strcmp(input_buffer, "(~.~)") == 0) {
            printf("sleepy\n");
        } else if (strcmp(input_buffer, "TA") == 0) {
            printf("totally awesome\n");
        } else if (strcmp(input_buffer, "CCC") == 0) {
            printf("Canadian Computing Competition\n");
        } else if (strcmp(input_buffer, "CUZ") == 0) {
            printf("because\n");
        } else if (strcmp(input_buffer, "TY") == 0) {
            printf("thank-you\n");
        } else if (strcmp(input_buffer, "YW") == 0) {
            printf("you’re welcome\n");
        } else if (strcmp(input_buffer, "TTYL") == 0) {
            printf("talk to you later\n");
            break;
        } else {
            printf("%s\n", input_buffer);
        }
    }

    return 0;
}