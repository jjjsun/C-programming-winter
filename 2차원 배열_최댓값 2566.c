#include <stdio.h>
int main() {
	int i, j, loc_i, loc_j;
	int max = 0;
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			int n;
			scanf("%d", &n);
			if (n >= max) {
				max = n;
				loc_i = i;
				loc_j = j;
			}
		}
	}
	printf("%d\n%d %d", max, loc_i, loc_j);
	return 0;
}