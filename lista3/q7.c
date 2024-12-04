#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TAM 3

int main(){
    int v[TAM], aritmetica = 0;
    double geometrica = 1;
    srand(time(NULL));
    for(int i=0; i<TAM; i++){
        v[i]= rand()%20;
        printf("%d\n", v[i]);
        aritmetica+=v[i];
        geometrica*=(double)v[i];
    }
if (geometrica >= 0) {
        geometrica = pow(geometrica, 1/3);
    } else {
        printf("Impossível calcular a raiz cúbica de um valor negativo para a média geométrica.\n");
        geometrica = 0;
    }
    printf("a media aritmetica é %d e a geometrica é %f", aritmetica/3, geometrica);
    return 0;
}