#include <stdio.h>

// 문자열을 이용한 큰 수 곱하기 2 연산
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

// 하노이 탑 이동 순서 출력 (N<=20일 때만 실행)
void hanoi(int n, char start, char mid, char end) {
	if (n == 0) return;
	
    // N이 20을 초과하면 이동 순서 출력 없이 즉시 종료 (1914번 요구사항)
    if (n > 20) return; 

	hanoi(n - 1, start, end, mid);
	printf("%c %c\n", start, end); 
	hanoi(n - 1, mid, start, end);
}

int main() {
	int n;
	scanf("%d", &n);

    if (n > 20) {
        // N > 20일 때: 큰 수 처리 (2^N - 1 계산 및 출력)
        
        char result[101];
        result[0] = '1';
        int len = 1;
        
        for (int i = 0; i < n; i++) {
            len = multiply_by_2(result, len);
        }
        
        // 2^N - 1 출력: 2^N의 1의 자리에서 1을 빼고 역순으로 출력
        result[0] = result[0] - 1;
        
        for (int i = len - 1; i >= 0; i--) {
            printf("%c", result[i]);
        }
        printf("\n");
        
    } else {
        // N <= 20일 때: long long으로 계산 및 이동 순서 출력
        
        // 1. 총 이동 횟수 계산 및 출력 (2^N - 1)
        long long total_moves = (1LL << n) - 1; 
        printf("%lld\n", total_moves);

        // 2. 이동 순서 출력
        hanoi(n, '1', '2', '3');
    }

	return 0;
}