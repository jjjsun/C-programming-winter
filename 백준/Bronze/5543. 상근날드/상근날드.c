#include <stdio.h>

int main() {
	int duck, drink;
	int dsum=2000;
	int ddrink = 2000;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &duck);
		if (duck < dsum)
			dsum = duck;
	}
	for (int j = 0; j < 2; j++) {
		scanf("%d", &drink);
		if (drink < ddrink)
			ddrink = drink;
	}
	printf("%d", dsum + ddrink - 50);
	return 0;
}