#include <stdio.h>
int main() {
	long long A, B, C;
	scanf("%lld %lld %lld", &A, &B, &C);
	printf("%lld", A + B + C);
	return 0;
}

//구하려는거 범위 확인하기, int인지, long인지, long long인지 확인한번하기. longlong인거 자꾸까먹는다.