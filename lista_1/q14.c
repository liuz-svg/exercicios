#include <stdio.h>

int main(){
    unsigned char D;
    float S;
    puts("quantos dias foram trabalhados?");
    scanf("%hhu", &D);
    S=50.25*D;
   switch(D){
       case 1 ... 10:
    printf("o valor liquido do vendedor sera: %f", S-(S*0.1));
    break;
       case 11 ... 20:
        printf("o valor liquido do vendedor sera: %f", (S*1.2)-(0.1*S));
    break;
       case 21 ... 30:
        printf("o valor liquido do vendedor sera: %f", (S* 1.3)-(0.1*S));
    break;
    default:
        puts("o valor inserido nao e valido");
    break;
}
}