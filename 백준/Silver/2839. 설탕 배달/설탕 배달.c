#include <stdio.h>
int main() {
	int num, sum = 0;
	scanf("%d", &num);
	while (1) {
		if (num % 5 == 0) {
			sum += num / 5;
			break;
		}
		num -= 3;
		sum++;
		if (num <= 0)
			break;
	}
	if (num < 0)
		printf("-1\n");
	else
		printf("%d\n", sum);
}