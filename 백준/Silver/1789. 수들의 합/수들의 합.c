#include<stdio.h>
int main() {
    unsigned int a, i = 1, cnt = 0;
    unsigned int sum = 0;
    scanf("%d", &a);
    while (1) {
        sum += i++;
        cnt++;
        if (sum == a) {
            break;
        }
        else if (a - sum < i) {
            sum -= (i - 1);
            sum += (a - sum);
            break;
        }
    }
    printf("%d", cnt);
    return 0;
}
