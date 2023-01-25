#include <stdio.h>

int main() {
	int n;
	int FindNumber;
	int CountNumber = 0;


	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d",&a[i]);
	}

	scanf("%d", &FindNumber);

	for (int j = 0; j < n; j++) {
		if (a[j] == FindNumber)
			CountNumber++;
	}

	printf("%d\n", CountNumber);

	return 0;
}