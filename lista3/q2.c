#include <stdio.h>
#include <string.h>
#define TAM 30
int main(void){
    char frase[TAM], caractere;
    int count;
    puts("escreva uma frase:");
    fgets(frase, TAM, stdin);
    puts("escolha o caractere a procurar:");
    scanf("%c", &caractere);
    for(int i=0; i<TAM; i++){
        if(frase[i] == caractere) count++;
    }
    printf("na frase o caractere se repete %d vezes\n",count);
    return 0;
}
