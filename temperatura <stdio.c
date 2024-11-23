#include <stdio.h>
float fahrenheit_celsius(float f){
    float c = (f - 32) / 1.8;
    return c;
}

void main(){
    float f;

    printf("Digite a temperatura em graus Fahrenheit\n");
    scanf("%f", &f);

    float c = fahrenheit_celsius(f);
    printf("A temperatura em graus Celsius é de %.1f\n", c);
}