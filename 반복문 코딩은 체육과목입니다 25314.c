#include <stdio.h>
int main() {
	int N;
	scanf("%d", &N);
	int number = N / 4;
	for (int i = 0; i < number; i++)
		printf("long ");

	printf("int");

	return 0;
}