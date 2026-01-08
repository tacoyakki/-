#include<stdio.h>
int main() {
	int a, cnt = 0;
	scanf("%d", &a);
	if (a < 3) {
		printf("-1");
		return 0;
	}
	while (1) {
		if (a % 5 == 0) {
			cnt += a / 5;
			break;
		}
		else {
			a -= 3;
			cnt++;
		}
		if (a < 0) {
			cnt = -1;
			break;
		}
	}
	printf("%d", cnt);
	return 0;
}