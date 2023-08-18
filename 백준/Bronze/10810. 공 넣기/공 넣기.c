#include <stdio.h>

int main(void) {

	int arr[101] = { 0 };
	int n, m, i, j, k;
	int a, b;
	scanf("%d %d", &n, &m);
	for (a = 0; a < m; a++) 
	{
		scanf("%d %d %d", &i, &j, &k);
		for (b = i; b <= j; b++)
		{
			arr[b] = k;
		}
	}
	for (a = 1; a <= n; a++) {
		printf("%d ", arr[a]);
	}

	return 0;

}