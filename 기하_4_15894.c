#include <stdio.h>
int main() {
	long n;
	//최대 10의9승까지 입력되니까 long을 사용
	scanf("%ld", &n);
	printf("%ld", 4*n);
	return 0;
}