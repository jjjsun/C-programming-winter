#include <stdio.h>
#include <math.h>

struct employee
{
	char name;
	char number;
	int information;
};
int main() {
	struct employee s;
	
	printf("종업원 이름을 입력하시오:");
	scanf("%s", s.name);
	printf("주민등록번호를 입력하시오:");
	scanf("%s", s.number);
	printf("급여정보를 입력하시오:");
	scanf("%c", &s.information);

	printf("이름: %s\n", s.name);
	printf("주민등록번호: %s\n", s.number);
	printf("급여정보: %d\n", s.information);

	return 0;
}