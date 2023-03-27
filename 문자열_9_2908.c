#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);

	n = n / 100 + ((n / 10) % 10) * 10 + ((n % 100) % 10) * 100;
	m = m / 100 + ((m / 10) % 10) * 10 + ((m % 100) % 10) * 100;
	if (n < m)
		printf("%d", m);
	else
		printf("%d", n);
	return 0;
}