#include <stdio.h>
#include <string.h>
#define TAM 30
int main(void){
    char frase[TAM], inversa[TAM];
    puts("escreva uma frase:");
    fgets(frase, TAM, stdin);
    int i =strlen(frase) - 1;
    for(int j=0; i>=0; i--, j++){
        inversa[j]=frase[i];
    }
    printf("a frase era %s e sua inversa é %s\n",frase, inversa);
    return 0;
}