//задача 2 по пар проге 
//рандомные числа 0,9
//перемножаются 2 матрицы 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int S[3][3], P[3][3];
		double Q[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			S[i][j] = 0 + rand() % 9;
			P[i][j] = 0 + rand() % 9;
			/*printf("%d ", S[i][j]);
			printf("%d ", P[i][j]);*/
			for (int k = 0; k < 3; k++) {
				Q[i][j] += S[i][k] * P[k][j];
				

			}
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
					printf("%3d ", Q[i][j]);
				printf("\n");
			}
		}//printf("\n");
	}
}