#include<stdio.h>
int main()
{
    for(int i = 32; i <= 126; i++){
        printf("O caractere: \"%c\" e representado por %d na tabela ASCII\n", (char)i, i);
    }
}