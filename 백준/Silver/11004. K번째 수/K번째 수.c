#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int num1 = *(int *)a;
    int num2 = *(int *)b;
    if (num1 < num2) return -1;
    if (num1 > num2) return 1;
    return 0;
}

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    int *arr = (int *)malloc(N * sizeof(int));
    if (arr == NULL) return 1;

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, N, sizeof(int), compare);

    printf("%d\n", arr[K - 1]);

    free(arr);

    return 0;
}