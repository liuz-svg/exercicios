#include <stdio.h>

int main(){
    float V;
    float HT;
    float pINSS;
    float SB;
    float dINSS;
    float SL;
    puts("Digite o valor da hora aula:");
    scanf("%f", &V);
    puts("Digite o numero de horas trabalhadas:");
    scanf("%f", &HT);
    puts("Digite o percentual de desconto do INSS (em %%)");
    scanf("%f", &pINSS);
    SB = HT*V;
    dINSS = SB * (pINSS/100);
    SL = SB - dINSS ;
    printf("Salário bruto: R$ %,2f\n", SB);
    printf("Desconto do INSS: R$ %.2f\n", dINSS);
    printf("Salário líquido: R$ %.2f\n", SL);
}