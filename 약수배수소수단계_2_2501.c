#include <stdio.h>
int main() {
	int n, k,i;
	int count = 0;
	scanf("%d %d", &n, &k);
	for (i = 1; i <= n; i++) {
		if (n % i == 0)
			count++;
		if (count == k)
			break;
		//아 구하고 싶은 k에서 멈추면 되는거네
	}
	if (i <= n)
		printf("%d", i);
	else
		printf("0");
}