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
		printf("������ �̸��� �Է��Ͻÿ�:");
		scanf("%s", list[i].name);
		printf("�ֹε�Ϲ�ȣ�� �Է��Ͻÿ�:");
		scanf("%s", list[i].number);
		printf("�޿������� �Է��Ͻÿ�:");
		scanf("%c", &list[i].information);
	}

	for (i = 0; i < SIZE; i++) {
		printf("�̸�: %s\n", list[i].name);
		printf("�ֹε�Ϲ�ȣ: %s\n", list[i].number);
		printf("�޿�����: %d\n", list[i].information);
	}
	return 0;
}