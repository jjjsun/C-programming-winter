#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int a;
	int min = 1000001;
	int max = -1000001;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if (a > max)
			max = a;
		if (a < min)
			min = a;
	}
	printf("%d %d", min, max);

	return 0;
}