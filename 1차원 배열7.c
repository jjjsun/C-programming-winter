#include <stdio.h>

int main() {
	int n;
	int max = 0;
	scanf("%d", &n);
	double sum = 0;
	int score;

	for (int i = 0; i < n; i++) {
		scanf("%d", &score);
		sum += score;
		if (score > max)
			max = score;
	}
	printf("%lf", (sum / max * 100) / n);

	return 0;
}