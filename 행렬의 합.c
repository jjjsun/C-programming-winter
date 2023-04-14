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
	printf("          행렬의 합 계산 프로그램         \n");
	printf("******************************************\n");

	printf("덧셈하려는 행렬의 크기를 입력하세요:\n");
	printf("행렬의 행 크기 입력: ");
	scanf("%d", &n);
	printf("행렬의 열 크기 입력: ");
	scanf("%d", &m);

	printf("\n");
	printf("첫번째 행렬의 값을 입력하세요\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			printf(" %d X %d 행렬의 값을 입력하세요: ", i + 1, j + 1);
			scanf("%d", &vMatrixA[i][j]);
		}
	}

	printf("\n");
	printf("두번쨰 행렬의 값을 입력하세요\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			printf(" %d X %d 행렬의 값을 입력하세요: ", i + 1, j + 1);
			scanf("%d", &vMatrixB[i][j]);
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			vResult[i][j] += vMatrixA[i][j] + vMatrixB[i][j];
		}
	}

	printf("\n");
	printf("두 행렬의 덧셈의 결과값\n");

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			printf("%4d", vResult[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}