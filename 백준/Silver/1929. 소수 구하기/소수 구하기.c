#include <stdio.h>
//시간초과
/*
int main() {
	int m, n;
	int sum = 0;
	scanf("%d %d", &m, &n);
	for (int i = m; i <= n; i++) {
		for (int j = 2; j <= i; j++) {
			if (i % j == 0) {
				sum = sum + 1;
			}
		}
		if (sum == 1) {
			printf("%d\n", i);
		}
		sum = 0;
		
	}
	return 0;
}*/

int main() {
	int m, n;
	int sum[1000001] = { 0, };
	sum[1] = 1;
	scanf("%d %d", &m, &n);
	for (int i = 2; i <= n; i++) {
		for (int j = 2; i * j <= n; j++) {
			sum[i * j] = 1;
		}
	}

	for (int i = m; i <= n; i++) {
		if (sum[i] == 0)
			printf("%d\n", i);
	}
	return 0;
}