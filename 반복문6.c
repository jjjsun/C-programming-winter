#include <stdio.h>

int main() {
	int a, b;
	int i = 1;
	int t;
	scanf("%d", &t);
	while (i <= t) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", i, a + b);
		i++;
	}
	return 0;
}