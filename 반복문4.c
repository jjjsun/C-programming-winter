#include <stdio.h>

int main() {
	int X=0;
	int N = 0;
	int a, b;
	scanf("%d", &X);
	scanf("%d", &N);
	int result = 0;
	int i = 0;
	while (i < N) {
		scanf("%d %d", &a, &b);
		result = result + a * b;
		i++;
	}
	if (result == X)
		printf("Yes");
	else
		printf("No");
	return 0;
}