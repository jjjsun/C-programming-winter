//다시한번도전하기

#include <stdio.h>

int d(int n) {
	int num = n;
	while (n) {
		num += n % 10;
		n /= 10;
	}
	return num;
}

int main() {
	int a[10000] = { 0, };

	for (int i = 0; i < 10000; i++) {
		int num = d(i);
		if (num < 10000) ++a[num];
	}
	for (int i = 0; i < 10000; i++) {
		if (!a[i])
			printf("%d\n", i);
	}
	return 0;
}