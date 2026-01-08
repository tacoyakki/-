#include<stdio.h>
int main() {
	int a, cnt = 0;
	scanf("%d", &a);
	a = 1000 - a;
	while (1) {
		if (a / 500) {
			a -= 500;
			cnt++;
		}
		else if (a / 100) {
			a -= 100;
			cnt++;
		}
		else if (a / 50) {
			a -= 50;
			cnt++;
		}
		else if (a / 10) {
			a -= 10;
			cnt++;
		}
		else if (a / 5) {
			a -= 5;
			cnt++;
		}
		else if (a / 1) {
			a -= 1;
			cnt++;
		}
		else {
			break;
		}
	}
	printf("%d", cnt);
	return 0;
}