#include <stdio.h>
#include <string.h>
/*
int main() {
	int n;
	int sum=0;
	while (1) {
		if (n == 0)
			break;
		else {
			for (int i = n; i < 2*n; i++) {
				for (int j = 1; j < i; j++) {
					if (i % j == 0)
						sum += 1;
				}
			}
			printf("%d", sum);
		}
	}
	return 0;
}
*/
int main() {
	int i, j, n, sum = 0;
	int num = 250000;
	int a[250001] = { 0, };
	a[0] = 1; a[1] = 1;
	for (i = 2; i <= num; i++) {
		if (a[i] == 1)
			continue;
		for (j = 2; i * j < num; j++)
			a[i * j] = 1;
	}

	scanf("%d", &n);
	while (n != 0) {
		for (i = n + 1; (i <= 2 * n) && (i <= num); i++) {
			if (a[i] == 0) 
				sum++;
		}
		printf("%d\n", sum);
		sum = 0;
		scanf("%d", &n);
	}
	return 0;
}