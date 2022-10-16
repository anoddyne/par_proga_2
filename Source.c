//������ 2 �� ��� ����� 
//��������� ����� 0,9
//������������� 2 ������� 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 3

int main() {
	srand(time(NULL));
	int F[n][n], S[n][n], R[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			F[i][j] = rand() % 10;
			S[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			R[i][j] = 0;
			for (int k = 0; k < n; k++) {
				R[i][j] += F[i][k] * S[k][j];
			}
		}
	}
	printf("Output of the first matrix: \n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", F[i][j]);
		}
		printf("\n");
	}
	printf("Output of the second matrix: \n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", S[i][j]);
		}
		printf("\n");
	}
	printf("Result of matrices multiplication: \n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", R[i][j]);
		}
		printf("\n");
	}
}