#include <stdio.h>

void main(){
    int vetor[20];

    printf("Digite o %d° número: ", 1);
    scanf("%d", &vetor[0]);

    int menor_num, maior_num = vetor[0];

    for (int i = 1; i < 20; i++) {
        printf("Digite o %d° número: ", i+1);
        scanf("%d", &vetor[i]);

        if (vetor[i] > maior_num){
            maior_num = vetor[i];
        }   
        else if (vetor[i] < menor_num){
            menor_num = vetor[i];
        }
    }
    printf("O maior número do vetor é %d, e o menor número é %d.\n", maior_num, menor_num);
}