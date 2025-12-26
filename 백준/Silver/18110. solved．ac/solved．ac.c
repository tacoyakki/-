#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int cmp(const void* a, const void* b)
{
	int x = *(int*)a;
	int y = *(int*)b;
	if (x < y) return -1;
	if (x > y) return 1;
	return 0;
}
int main() {
	int a;
	int n;
	scanf("%d", &a);
	if (a == 0) {
		printf("0");
		return 0;
	}
	int* arr = (int*)malloc(sizeof(int) * a);
	for (int i = 0; i < a; i++) {
		scanf("%d", &arr[i]);
	}
	qsort(arr, a, sizeof(int), cmp);
	int aa = (int)round(a * 0.15);
	double sum = 0;
	for (int i = aa; i < a - aa; i++) {
		sum += arr[i];
	}
	printf("%d", (int)round(sum / (a - 2 * aa)));
	return 0;
}