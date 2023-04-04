#include <stdio.h>
#include <math.h>
int main() {
	int t, c;
	int q, d, n, p;
	scanf_s("%d", &t);
	for (int i = 0; i < t; i++) {
		c = 0, q = 0, d = 0, n = 0, p = 0;
		scanf_s("%d", &c);
		q = c / 25;
		d = (c - (q * 25)) / 10;
		n = (c - ((q * 25) + (d * 10))) / 5;
		p = (c - ((q * 25) + (d * 10))) % 5;
		printf("%d %d %d %d\n", q, d, n, p);
	}
	return 0;
}
