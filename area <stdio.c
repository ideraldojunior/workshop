#include <stdio.h>

float area_circulo(float diametro){
    float a = (diametro/2) * (diametro/2) * 3.14;
    return a;
}


void main(){
    float d;

    printf("Digite o diâmetro do círculo\n");
    scanf("%f", &d);

    float a = area_circulo(d);
    printf("%.2f Unidades Quadradas\n", a);
}
