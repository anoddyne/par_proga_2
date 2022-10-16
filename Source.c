#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//here you can set the matrices size, change the number 3 to any other number
#define n 3

int main() {
	double time_taken = 0.0;
    clock_t begin = clock();
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

	//you can remove the comments here to see what numbers fill the two matrices
    /*
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
	*/

	printf("Result of matrices multiplication: \n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++)
				R[i][j] += F[i][k] * S[k][j];
			printf("%d ", R[i][j]);
		}
		printf("\n");
	}

	clock_t end = clock();

	// calculate elapsed time by finding difference (end - begin) and
    // dividing the difference by CLOCKS_PER_SEC to convert to seconds
	time_taken += (double)(end - begin) / CLOCKS_PER_SEC;
	printf("The program took %f seconds to execute \n", time_taken);
	return 0;
}