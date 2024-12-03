#include <stdio.h>

int main(){
    unsigned char a;
    puts("escolha um numero:");
    scanf("%hhu", &a);
    a%2==0? puts("é par"): puts("é impar");
}