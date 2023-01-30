#include <stdio.h>

int main() {
	int n=0;
	char a[101]={0,};
	int sum = 0;
	scanf("%d", &n);

	scanf("%s", a);
	for (int i = 0; i < n; i++)
		sum = sum + a[i] - '0';
		//아스키코드에서 숫자O은 아스키에서 48을 뜻하니까 문자열로 더할때는 뺴줘야하는 아스키 원리이용
		//본연의 숫자를 더하기 위해 48을 빼줌.
	printf("%d", sum);
	
	return 0;
}

