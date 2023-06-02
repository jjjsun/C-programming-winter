#include <stdio.h>

int main() {
	int num;
	int sum = 0;
	int a[7];
	int min = 100;
	for (int i = 0; i < 7; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 7; i++) {
		if (a[i] % 2 == 1) {
			sum += a[i];
			if (a[i] < min)
				min = a[i];
		}
	}

	if (sum == 0)
		printf("%d", -1);
	else
		printf("%d\n%d", sum, min);
	return 0;
}