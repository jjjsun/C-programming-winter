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
	
	printf("������ �̸��� �Է��Ͻÿ�:");
	scanf("%s", s.name);
	printf("�ֹε�Ϲ�ȣ�� �Է��Ͻÿ�:");
	scanf("%s", s.number);
	printf("�޿������� �Է��Ͻÿ�:");
	scanf("%c", &s.information);

	printf("�̸�: %s\n", s.name);
	printf("�ֹε�Ϲ�ȣ: %s\n", s.number);
	printf("�޿�����: %d\n", s.information);

	return 0;
}