#include<stdio.h>
#include<stdlib.h>
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
	int a, b;
	scanf("%d %d", &a, &b);
	int* arr = (int*)malloc(sizeof(int) * a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &arr[i]);
	}
	qsort(arr, a, sizeof(int), cmp);
	for (int i = 0; i < a; i++)
	{
		if (b < arr[i])
		{
			break;
		}
		else {
			b++;
		}
	}
	printf("%d", b);
	return 0;
}