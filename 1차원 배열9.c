#include <stdio.h>
/*
int main() {
	int c;
	int n;
	scanf("%d", &c);
	for (int i = 0; i < c; i++) {
		int a[1000];
		int sum = 0;
		double average = 0.0;
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			sum += a[i];
		}
		average = sum / n;
		int count = 0;
		for (int i = 0; i < n; i++) {
			if (average < a[i])
				count++;
		}
		printf("%.3lf%\n", count /n*100);
	}
	return 0;
}

*/
int main() {
	int c, n, cnt;
	int score[1000];
	double avg;

	scanf("%d", &c);

	for (int i = 0; i < c; i++) {
		scanf("%d", &n);
		avg = 0.0;

		for (int j = 0; j < n; j++) {
			scanf("%d", &score[j]);
			avg += score[j];
		}
		avg /= n;

		cnt = 0;
		for (int j = 0; j < n; j++) {
			if (score[j] > avg) cnt++;
		}
		printf("%.3lf%%\n", 100.0 * cnt / n);
	}
	return 0;
}