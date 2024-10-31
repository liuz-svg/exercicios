#include <stdio.h>

int main(){
    unsigned char r;
    puts("escreva o valor do raio de um circulo:");
    scanf("%hhu", &r);
    printf("o valor do diametro desse circulo sera de %f\n", 2*(float)r);
    printf("o valor da circunferencia desse circulo sera de %f", 3.14159*2*(float)r);
    printf("o valor da area desse circulo sera de %f", 3.14159*(float)r*(float)r);
}