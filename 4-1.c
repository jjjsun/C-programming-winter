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

	printf("a�� �� : %d, b�� ��:", a, b);
	printf("a�� b�� ��: %d", sum);
	printf("a�� b�� ��: %d", sub);
	printf("a�� b�� ��: %d", mul);
	printf("a�� ����: %d", inv);

	return 0;
}