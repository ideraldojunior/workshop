#include <stdio.h>

int dias_restantes(int dias_p){
    int dias_r = 365 - dias_p;
    return dias_r;
}

void main(){
    int dias_p;

    printf("Quantos dias do ano já se passaram?\n");
    scanf("%d", &dias_p);
    
    int d = dias_restantes(dias_p);
    printf("O ano tem %d dias restantes.\n", d);
}