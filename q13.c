#include <stdio.h>

int main(){
    unsigned char C;
    unsigned char F;
    puts("escolha o valor em celsius");
    scanf("%hhu", &C);
    printf("o valor escolhido em fahrenheit e: %hhu", (9*C+160)/5);
}