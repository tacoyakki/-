#include <stdio.h>
#include <stdlib.h>

int cmp(const int* a, const int* b) {
	return (*(int*)a) - (*(int*)b);
}

int main()
{
	int a;
	scanf("%d", &a);
	int* arr = (int*)malloc(sizeof(int) * a);
	for (int i = 0; i < a; i++) scanf("%d", &arr[i]);
	qsort(arr, a, sizeof(int), cmp);
 	for (int i = 0; i < a; i++) printf("%d\n", arr[i]);
    return 0;
}