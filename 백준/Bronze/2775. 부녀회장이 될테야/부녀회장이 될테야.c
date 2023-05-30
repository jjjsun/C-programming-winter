#include <stdio.h>
/*
int main() {
	int t;
	int k, n;
	int sum = 0;
	scanf("%d", &t);
	for (int i = 0; i < t; t++) {
		scanf("%d\n%d", &k, &n);
		for (int j = 1; j <= n; j++) {
			sum = sum + j;
		}
		if (k == 1) {
			printf("%d", sum);
		}
		else
			printf("%d", sum * k);
	}
	return 0;
}
*/
int main() {
	int arr[15][15] = { 0, };
	int t, k, n;
	for (int i = 0; i < 15; i++) {
		arr[0][i] = i;
	}
	for (int i = 1; i < 15; i++) {
		for (int j = 1; j < 15; j++) {
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
		}
	}
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &k, &n);
		printf("%d\n", arr[k][n]);
	}
	return 0;
}