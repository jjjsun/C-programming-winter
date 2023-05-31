#include <stdio.h>

int main() {
	int n;
	int sum = 0;
	int fin = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &n);
		sum += n * n;
	}
	fin = sum % 10;
	printf("%d", fin);
	
	return 0;
}