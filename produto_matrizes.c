#include <stdio.h>

void main(){
    int A[3][3];
    int B[3][3];
    int C[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento da linha %d e da coluna %d da matriz A: ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento da linha %d e da coluna %d da matriz B: ", i+1, j+1);
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (A[i][j] == 0 | B[i][j] == 0){
                C[i][j] = 0;
            }else{
                C[i][j] = A[i][j] * B[i][j];
            }
        }
    }

    printf("\nA matriz C resultante é:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d  ", C[i][j]);
        }
        printf("\n");
    }

    printf("\n");
}