#include <stdio.h>

int main() {
	int a, b;
	int n;
	int i = 1;
	scanf("%d", &n);
	while (i <= n) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
		i++;
	}
	return 0;
}