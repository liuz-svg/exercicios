#include <stdio.h>

int main(){
    unsigned char a;
    unsigned char b;
    puts("escolha o primeiro numero");
    scanf("%hhu", &a);
    puts("escolha o segundo numero");
    scanf("%hhu", &b);
    printf("a soma dos dois numeros e: %hhu\n", a+b);
    printf("a diferença dos dois numeros e: %hhu\n", a-b);
    printf("o produto dos dois numeros e: %hhu\n", a*b);
    printf("o resto dos dois numeros e: %hhu\n", a%b);
    printf("o quociente dos dois numeros e: %hhu\n", a/b);
}