#include <stdio.h>
#define MAX 30
int main() {
	int j, i;
	int n = 0;
	int m = 0;
	int vMatrixA[MAX][MAX] = { 0, };
	int vMatrixB[MAX][MAX] = { 0, };
	int vResult[MAX][MAX] = { 0, };
	printf("******************************************\n");
	printf("          ����� �� ��� ���α׷�         \n");
	printf("******************************************\n");

	printf("�����Ϸ��� ����� ũ�⸦ �Է��ϼ���:\n");
	printf("����� �� ũ�� �Է�: ");
	scanf("%d", &n);
	printf("����� �� ũ�� �Է�: ");
	scanf("%d", &m);

	printf("\n");
	printf("ù��° ����� ���� �Է��ϼ���\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			printf(" %d X %d ����� ���� �Է��ϼ���: ", i + 1, j + 1);
			scanf("%d", &vMatrixA[i][j]);
		}
	}

	printf("\n");
	printf("�ι��� ����� ���� �Է��ϼ���\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			printf(" %d X %d ����� ���� �Է��ϼ���: ", i + 1, j + 1);
			scanf("%d", &vMatrixB[i][j]);
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			vResult[i][j] += vMatrixA[i][j] + vMatrixB[i][j];
		}
	}

	printf("\n");
	printf("�� ����� ������ �����\n");

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			printf("%4d", vResult[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}