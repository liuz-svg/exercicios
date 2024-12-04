#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 15

int main(){
    float v[TAM];
    float maior , menor;
    srand(time(NULL));
    for(int i=0; i<TAM; i++){
        v[i]= ((float)rand()/RAND_MAX);
        printf("%f\n", v[i]);
    }
    menor = v[0];
    maior=v[0];
    for(int i=1; i<TAM; i++){
        maior= (maior>v[i])? maior: v[i];
        menor= (menor<v[i])? menor: v[i];  
    }
    printf("a soma do maior elemento do vetor com o menor é %f\n", maior+menor);
    return 0;
}