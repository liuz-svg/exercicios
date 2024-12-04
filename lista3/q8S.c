#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

int main() {
    int v[TAM], intervalo;
    srand(time(NULL));

    puts("Escolha um numero para o intervalo dos valores:");
    scanf("%d", &intervalo);

    for(int i = 0; i < TAM; i++) {
        v[i] = rand() % intervalo;  
    }

    for(int i = 0; i < TAM - 1; i++) {
        int minIndex = i;  
        for(int j = i + 1; j < TAM; j++) {
            if(v[j] < v[minIndex]) {
                minIndex = j;  
            }
        }
        if(minIndex != i) {
            int temp = v[i];
            v[i] = v[minIndex];
            v[minIndex] = temp;
        }
    }

    printf("Vetor ordenado:\n");
    for(int i = 0; i < TAM; i++) {
        printf("%d\n", v[i]);
    }

    return 0;
}