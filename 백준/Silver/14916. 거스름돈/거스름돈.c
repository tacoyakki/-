#include<stdio.h>
int main() {
	int a, cnt = 0;
	scanf("%d", &a);
	if (a / 5 > 0) {
		cnt += a / 5;
		a -= a / 5 * 5;
		if (a % 2 == 0) {
			cnt += a / 2;
		}
		else {
			a += 5;
			cnt--;
			cnt += a / 2;
		}
	}
	else {
		if (a % 2 != 0) {
			printf("-1");
			return 0;
		}
		else {
			cnt += a / 2;
		}
	}
	printf("%d", cnt);
	return 0;
}