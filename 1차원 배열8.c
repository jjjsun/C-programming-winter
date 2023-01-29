//다시도전하기

#include <stdio.h>

int main() {
	int n;
	char a[80];

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int sum = 0, add = 1;
		scanf("%s", &a);

		for (int j = 0; j < strlen(a); j++) {
			if (a[j] == 'O') {
				sum += add;
				add++;
			}
			if (a[j] == 'X') {
				add = 1;
			}
		}
		printf("%d\n", sum);
	}

	return 0;
}