#include <stdio.h>

int main() {
	int t;
	int A, B;
	scanf("%d", &t);
	int i = 0;
	while (i < t) {
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
		i++;
	}
	return 0;
}