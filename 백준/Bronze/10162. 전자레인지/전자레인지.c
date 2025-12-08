#include<stdio.h>

int main() {
	int a = 60 * 5;
	int b = 60;
	int c = 10;
	int acnt = 0, bcnt = 0, ccnt = 0;
	int d;
	scanf("%d", &d);
	if (d % c != 0 || d < c) {
		printf("-1\n");
		return 0;
	}
	acnt = d / a;
	d = d % a;
	bcnt = d / b;
	d = d % b;
	ccnt = d / c;
	printf("%d %d %d\n", acnt, bcnt, ccnt);
	return 0;
}