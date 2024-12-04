#include <stdio.h>
#include <string.h>
#define TAM 15
int main(void){
    char frase[TAM];
    int count = 0;
    puts("escreva uma frase:");
    fgets(frase, TAM, stdin);
    for(int i=0; i<TAM; i++){
        if(frase[i] != '\0') count++;
    }
    printf("a frase tem %d caracteres\n",count-1);
    return 0;
}