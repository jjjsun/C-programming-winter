#include <stdio.h>

int main() {
	int a, b, c;
	int num;
	scanf("%d", &num);
	if (num % 10 != 0)
		printf("%d", -1);
	else {
		a = num / 300;
		b = (num % 300) / 60;
		c = ((num % 300) % 60) / 10;
		printf("%d %d %d", a, b, c);
	}
	return 0;
}