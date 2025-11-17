#include <stdio.h>

int main() {
    // 한 줄을 저장할 수 있는 버퍼 (최대 길이 1000)
    char buffer[1001]; 
    int count = 0;
    
    // fgets는 파일 끝(EOF)에 도달하거나 에러가 날 때 NULL을 반환합니다.
    // 즉, NULL이 아닐 때까지(성공적으로 읽을 때까지) 루프를 반복합니다.
    while (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        count++;
    }

    printf("%d\n", count);

    return 0;
}