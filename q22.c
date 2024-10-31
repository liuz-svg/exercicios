#include <stdio.h>

int main(){
    int a;
    int p = 0;
    puts("escolha um numero de 3 digitos:");
    scanf("%d", &a);
    switch(a){
    case 100 ... 999:
    p = (a%10)*100 + ((a/10)%10)*10 + (a/100);
    printf("numero invertido:%d", p);
    break;
    default:
    puts("numero invalido");
    break;
    }

}