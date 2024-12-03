#include<stdio.h>
int main()
{
    float a;
    float b;
    float c;
    float MA;
    float MG;

    
    puts("Digite o primeiro número: ");
    scanf("%f", &a);

    puts("Digite o segundo número: ");
    scanf("%f", &b);

    puts("Digite o terceiro número: ");
    scanf("%f", &c);

   
    MA = (a + b + c) / 3.0;

   
    MG = pow(a * b * c, 1.0 / 3.0);

    
    printf("Média Aritmética: %.2f\n", MA);
    printf("Média Geométrica: %.2f\n", MG);

}