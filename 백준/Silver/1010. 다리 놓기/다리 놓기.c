#include <stdio.h>

int main() {
	int t, n, m, dam;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		dam = 1;
		scanf("%d %d", &n, &m);
		for (int j = 0; j < n; j++) {
			dam *= m - j;
			dam /= 1 + j;
		}
		printf("%d\n", dam);
	}
	return 0;
}