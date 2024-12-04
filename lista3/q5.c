#include <stdio.h>
#include <string.h>
#define TAM 30
int main(void){
    char frase[TAM], frase2[TAM];
    puts("escreva uma frase:");
    fgets(frase, TAM, stdin);
    if(frase[strlen(frase)-1]=='\n'){
        frase[strlen(frase)-1]= '\0';
    }
    puts("escreva uma segunda frase:");
    fgets(frase2, TAM, stdin);
int i = strlen(frase);
for(int j=0; frase2[j]!='\0'; j++, i++){
    frase[i]= frase2[j];
}
    printf("%s\n",frase);

    strcat(frase, frase2);
    printf("%s\n", frase);
    return 0;
}