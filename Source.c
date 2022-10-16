#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//here you can set the matrices size, change the number 3 to any other number
#define n 3

int main() {
	srand(time(NULL));

	//filling all matrices with numbers
	int F[n][n], S[n][n], R[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			F[i][j] = rand() % 10;
			S[i][j] = rand() % 10;
			R[i][j] = 0;
		}
	}

    printf("Output of the first matrix: \n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) 
			printf("%d ", F[i][j]);
		printf("\n");
	}
	printf("Output of the second matrix: \n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) 
			printf("%d ", S[i][j]);
		printf("\n");
	}
	printf("Result of matrices multiplication: \n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++)
				R[i][j] += F[i][k] * S[k][j];
			printf("%d ", R[i][j]);
		}
		printf("\n");
	}
}