#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    // 각 수를 뒤집어서 저장
    int ra = 0, rb = 0;

    // a 뒤집기
    ra += (a % 10) * 100;  // 1의 자리 → 100의 자리
    a /= 10;
    ra += (a % 10) * 10;   // 10의 자리 → 10의 자리
    a /= 10;
    ra += a;               // 100의 자리 → 1의 자리

    // b 뒤집기
    rb += (b % 10) * 100;
    b /= 10;
    rb += (b % 10) * 10;
    b /= 10;
    rb += b;

    // 큰 수 출력
    if (ra > rb)
        printf("%d\n", ra);
    else
        printf("%d\n", rb);

    return 0;
}
