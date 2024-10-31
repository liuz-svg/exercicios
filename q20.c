#include <stdio.h>
int main(){
    int a;
    int b;
    puts("escolha um numero:");
    scanf("%d", &a);
    puts("escolha outro numero:");
    scanf("%d", &b);
    a%b==0? puts("é multiplo") : puts("não é multiplo");

}