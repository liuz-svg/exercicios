#include <stdio.h>

int main(){
    int a;
    int b;
    puts("escolha um numero inteiro:");
    scanf("%d", &a);
    b = (a>0)? a : (-a);
    printf("%d", b);
}