#include <stdio.h>
int main() {
	int n, k;
	int sum = 0;
	int i;
	scanf("%d %d", &n, &k);

	for (i = 1; i <= n; i++) {
		if (n % i == 0)
			sum++;
		if (sum == k)
			break;
	}
	if (i <= n)
		printf("%d", i);
	else
		printf("0");

	return 0;
}