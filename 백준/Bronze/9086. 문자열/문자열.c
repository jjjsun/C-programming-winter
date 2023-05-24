#include <stdio.h>

int main() {
	int t;
	int i = 0;
	char s[1000];
	char a, b;
	int length = 0;
	scanf("%d", &t);
	for (i = 0; i < t;i++) {
		scanf("%s", s);
		length = strlen(s);
		a = s[0];
		b = s[length - 1];
		printf("%c%c\n", a,b);
	}
	return 0;
}