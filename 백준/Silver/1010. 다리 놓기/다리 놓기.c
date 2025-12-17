#include<stdio.h>

long long combi(int M, int N) {
	if (N > M / 2) {
		N = M - N;
	}
	long long result = 1;
	for (int i = 0; i < N; i++) {
		result *= (M - i);
		result /= (i + 1);
	}

	return result;
}

int main() {
	int T;
	scanf("%d", &T);

	while (T--) {
		int N, M;
		scanf("%d %d", &N, &M);

		long long result = combi(M, N);
		printf("%lld\n", result);
	}

	return 0;
}