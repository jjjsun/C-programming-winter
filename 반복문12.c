#include <stdio.h>

int main() {
	int num,result;
	scanf("%d", &num);

	result = num;

	int a, b, c, d;
	int i = 0;

	while (1)
	{
		a = num / 10;
		b = num % 10;
		c = (a + b) % 10;
		d = (b * 10) + c;
		num = d;
		i++;

		if (d == result)
			break;
	}
	printf("%d", i);
}