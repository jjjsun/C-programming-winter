#include <stdio.h>

int main() {

	int a, b;
	int sum, sub, mul, inv;

	a = 10;
	b = 20;
	sum = a + b;
	sub = a - b;
	mul = a * b;
	inv = -a;

	printf("a의 값 : %d, b의 값:", a, b);
	printf("a와 b의 합: %d", sum);
	printf("a와 b의 차: %d", sub);
	printf("a와 b의 곱: %d", mul);
	printf("a의 역수: %d", inv);

	return 0;
}