#include <stdio.h>

void find_number(int n)
{
	if (n < 100)
		printf("%d", n);
	else
	{
		int count;
		int a, b, c;
		count = 99;
		for (int i = 100; i <= n; i++) {
			a = i / 100;
			b = i / 10 % 10;
			c = i % 10;

			if ((c - b) == (b - a))
				count++;
		}
		printf("%d", count);
	}
}
int main() {
	int n;
	scanf("%d", &n);
	find_number(n);
}