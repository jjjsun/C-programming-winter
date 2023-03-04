#include <stdio.h>
int main() {
	int n, m;
	int num1, num2;
	int temp;
	int arr[100] = {0, };
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
	}
	for (int j = 0; j < m; j++) {
		scanf("%d %d", &num1, &num2);
		temp = arr[num1 - 1];
		arr[num1 - 1] = arr[num2 - 1];
		arr[num2 - 1] = temp;
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}