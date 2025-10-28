#include <stdio.h>

int multiply_by_2(char num[], int len) {
    int carry = 0;
    int i;
    for (i = 0; i < len; i++) {
        int digit = num[i] - '0';
        int result = digit * 2 + carry;
        num[i] = (result % 10) + '0';
        carry = result / 10;
    }
    if (carry) {
        num[len] = carry + '0';
        len++;
    }
    return len;
}

void hanoi(int n, char start, char mid, char end) {
	if (n == 0) return;
	
    if (n > 20) return; 

	hanoi(n - 1, start, end, mid);
	printf("%c %c\n", start, end); 
	hanoi(n - 1, mid, start, end);
}

int main() {
	int n;
	scanf("%d", &n);

    if (n > 20) {
        
        char result[101];
        result[0] = '1';
        int len = 1;
        
        for (int i = 0; i < n; i++) {
            len = multiply_by_2(result, len);
        }
        
        result[0] = result[0] - 1;
        
        for (int i = len - 1; i >= 0; i--) {
            printf("%c", result[i]);
        }
        printf("\n");
        
    } else {
        long long total_moves = (1LL << n) - 1; 
        printf("%lld\n", total_moves);

        hanoi(n, '1', '2', '3');
    }

	return 0;
}