#include <stdio.h>

int main(void) {
	int n, m,i,j;
	int arr[101] = { 0, };
	int tmp;

	scanf("%d %d", &n, &m);

	for (int a = 0; a < n; a++) {
		arr[a] = a + 1;
	}
	for (int b = 0; b < m; b++) {
		scanf("%d %d", &i, &j);

		for (int c = i - 1; c < j; c++) {
			tmp = arr[c];
			arr[c] = arr[j - 1];
			arr[j - 1] = tmp;
			j--;
		}
	}
	for (int d = 0; d < n; d++) {
		printf("%d ", arr[d]);
	}

	return 0;
}