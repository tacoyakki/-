#include <stdio.h>
#include <stdlib.h>
int cmp(const void* a, const void* b)
{
	int x = *(int*)a;
	int y = *(int*)b;
	if (x < y) return -1;
	if (x > y) return 1;
	return 0;
}
int main()
{
	int a;
	scanf("%d", &a);
	int* arr = (int*)malloc(sizeof(int) * a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &arr[i]);
	}
	qsort(arr, a, sizeof(int), cmp);
	int b;
	scanf("%d", &b);
	while(b--)
	{
		int c;
		scanf("%d", &c);
		int* found = bsearch(&c, arr, a, sizeof(int), cmp);
		if (found != 0) printf("1\n");
		else printf("0\n");
	}
	return 0;
}