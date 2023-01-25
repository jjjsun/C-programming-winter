#include <stdio.h>

int main() {

	int n;
	int max = 1;
	int nNumber;
	for (int i = 1; i < 10; i++) {
		scanf("%d", &n);
		if (n > max) {
			max = n;
			nNumber = i;
		}
	}
	printf("%d\n%d", max, nNumber);

	return 0;
}