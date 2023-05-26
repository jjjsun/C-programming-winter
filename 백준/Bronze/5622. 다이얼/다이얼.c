#include <stdio.h>
#include <stdlib.h>

int main() {
	char s[15];
	int sum = 0;
	int len = 0;

	scanf("%s", s);

	len = strlen(s);

	for (int i = 0; i < len; i++) {
		if (s[i] == 'A' || s[i] == 'B' || s[i] == 'C') {
			sum = sum + 3;
		}
		if (s[i] == 'D' || s[i] == 'E' || s[i] == 'F') {
			sum = sum + 4;
		}
		if (s[i] == 'G' || s[i] == 'H' || s[i] == 'I') {
			sum = sum + 5;
		}
		if (s[i] == 'J' || s[i] == 'K' || s[i] == 'L') {
			sum = sum + 6;
		}
		if (s[i] == 'M' || s[i] == 'N' || s[i] == 'O') {
			sum = sum + 7;
		}
		if (s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i]=='S') {
			sum = sum + 8;
		}
		if (s[i] == 'T' || s[i] == 'U' || s[i] == 'V') {
			sum = sum + 9;
		}
		if (s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z') {
			sum = sum + 10;
		}

	}
	printf("%d", sum);
	return 0;
}