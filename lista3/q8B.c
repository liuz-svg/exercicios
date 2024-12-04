#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

int main() {
    int v[TAM], t, intervalo, trocou;
    srand(time(NULL));
    
    puts("Escolha um numero para o intervalo dos valores:");
    scanf("%d", &intervalo);

    for(int i = 0; i < TAM; i++) {
        v[i] = rand() % intervalo; 
    }

    for(int i = 0; i < TAM - 1; i++) {
        trocou = 0;
        for(int j = 0; j < TAM - 1 - i; j++) {
            if(v[j] > v[j + 1]) {
                t = v[j];
                v[j] = v[j + 1];
                v[j + 1] = t;
                trocou = 1;
            }
        }
        if (!trocou) break; 

    printf("Vetor ordenado:\n");
    for(int i = 0; i < TAM; i++) {
        printf("%d\n", v[i]);
    }

    return 0;
}
}