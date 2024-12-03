#include <stdio.h>
int main(){
    unsigned char a;
    unsigned char b;
    unsigned char t;
    puts("escolha o primeiro numero");
    scanf("%hhu", &a);
    puts("escolha o segundo numero");
    scanf("%hhu", &b);
    temp=a;
    a=b;
    b=temp;
    printf("os valores apos a troca de a e b sao respectivamente: %hhu e %hhu", a, b);
}