#include <stdio.h>
#include <math.h>
#define SIZE 3
struct employee
{
	char name[20];
	char number;
	int information;
};
int main() {
	struct employee list[SIZE];
	int i;
	for (i = 0; i < SIZE; i++) {
		printf("종업원 이름을 입력하시오:");
		scanf("%s", list[i].name);
		printf("주민등록번호를 입력하시오:");
		scanf("%s", list[i].number);
		printf("급여정보를 입력하시오:");
		scanf("%c", &list[i].information);
	}

	for (i = 0; i < SIZE; i++) {
		printf("이름: %s\n", list[i].name);
		printf("주민등록번호: %s\n", list[i].number);
		printf("급여정보: %d\n", list[i].information);
	}
	return 0;
}