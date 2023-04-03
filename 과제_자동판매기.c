#include <stdio.h>
int main() {
	int v, m;
	int c500, c100, c50, c10,sum;
	printf("상품의 가격이 얼마인가요?: ");
	scanf_s("%d", &v);
	printf("돈을 얼마 넣었나요?: ");
	scanf_s("%d", &m);
	sum = m - v;
	c500 = sum / 500;
	c100 = (sum % 500) / 100;
	c50 = ((sum % 500) % 100) / 50;
	c10 = (((sum % 500) % 100) % 50) / 10;
	printf("500원 동전은 %d개\n", c500);
	printf("100원 동전은 %d개\n", c100);
	printf("50원 동전은 %d개\n", c50);
	printf("10원 동전은 %d개입니다.\n", c10);
	return 0;
}
