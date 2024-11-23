#include <stdio.h>

int eh_palindromo(int num){
    return ((num % 10 == num / 1000) && ((num / 10) % 10 == (num / 100) % 10));
}

void main(){
    int num;
    int valido = 1;

    do {
        printf("Digite um número de 4 dígitos\n");
        scanf("%d", &num);

        if (num > 999 && num < 10000){
            valido = 0;
        } else {
            printf("Número inválido!\n");
        }
    } while (valido);

    if (eh_palindromo(num)){
        printf("O número é palíndromo\n");
    } else {
        printf("O número não é palíndromo\n");
    }
}