#include <stdio.h>

int main() {
	int a[10];
	int b = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
		a[i] = a[i] % 42;
	}
	for (int i = 0; i < 10; i++) {
		int count = 0;
		for (int j = 0; j < i; j++) {
			if (a[i] == a[j])
				count++;
		}
		if (count == 0)
			b++;
	}
	printf("%d", b);

	return 0;
}