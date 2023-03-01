#include <stdio.h>
/*char arr[5][15] = {0};
int j = 0;
int i = 0;
int main() {
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			scanf("%s", &arr[i][j]);
		}
		scanf("%s", &arr[i][j]);
	}
	printf("%s", arr[j][i]);
	return 0;
}
*/
int main() {
	char array[5][15];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 15; j++) {
			array[i][j] = 0;
		}
	}
	for (int i = 0; i < 5; i++) {
		scanf("%s", array[i]);
	}
	for (int j = 0; j < 15; j++) {
		for (int k = 0; k < 5; k++) {
			if (array[k][j] != '\0') {
				printf("%c", array[k][j]);
			}
		}
	}
	return 0;
}