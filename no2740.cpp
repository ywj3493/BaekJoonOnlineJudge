#include <iostream>

using namespace std;

int main(void) {
	int N, M, K;
	int i, j, k;

	scanf("%d", &N);
	scanf("%d", &M);

	int a[N][M];

	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	scanf("%d", &M);
	scanf("%d", &K);

	int b[M][K];
	
	for (i = 0; i < M; i++) {
		for (j = 0; j < K; j++) {
			scanf("%d", &b[i][j]);
		}
	}

	int c[N][K];

	for (i = 0; i < N; i++) {
		for (j = 0; j < K; j++) {
			c[i][j] = 0;
		}
	}

	for (i = 0; i < N; i++) {
		for (j = 0; j < K; j++) {
			for (k = 0; k < M; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}

		}
	}

	for (i = 0; i < N; i++) {
		for (j = 0; j < K; j++) {
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}

	return 0;
}