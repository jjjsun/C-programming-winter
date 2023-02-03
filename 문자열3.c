#include <stdio.h>
#include <string.h>
/*
int main() {
	char word[100] = { 0 };
	scanf("%s", &word);
	for (int i = 97; i <= 122; i++) //아스키코드에서 소문자영어는 97~122에 해당하기때문
	{
		int j = 0;
		while (word[j] != 0) {
			if (word[j] == (char)i) break;
			j++;
		}
		if (word[j] == (char)i)
			printf("%d", j);
		else
			printf("-1 ");
	}
	return 0;
}
*/
/*
int main() {
	int arr[26];
	char s[100];
	scanf("%s", &s);
	for (int i = 0; i < 26; i++)
		arr[i] = -1;
	for (int i = 97; i <= 122; i++)
	{
		for (int j = 0; j < strlen(s); j++) {
			if (s[j] == i)
			{
				arr[s[j] - 'a'] = j;
				break;
			}
		}
		for (int i = 0; i < 26; i++) {
			printf("%d ", arr[i]);
		}
		return 0;
	}

}
*/
int main() {
	char s[100];
	int alphabet[26], len, index;
	for (int i = 0; i < 26; i++) {
		alphabet[i] = -1;
	}
	scanf("%s", s);

	len = strlen(s);
	for (int i = 0; i < len; i++) {
		index = s[i] - 'a';
		if (alphabet[index] == -1) {
			alphabet[index] = i;
		}
		else {
			continue;
		}
	}
	for (int i = 0; i < 26; i++)
		printf("%d ", alphabet[i]);
	return 0;
}
