#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define QL 3
#define QC 3

int main(){
    int v[QL][QC];
    int count, numero;
    srand(time(NULL));

    for(int i=0; i<QL; i++){
        for(int j=0;j<QC; j++){
        v[i][j]= rand()%10;
    }
    }
    puts("escolha um numero para procurar na matriz (1 a 10):");
    scanf("%d", &numero);
    for(int i=0; i<QL; i++){
        for(int j=0; j<QC; j++){
            if(numero==v[i][j])count++;
            printf("%d", v[i][j]);
        }
        printf("\n");
    }
   printf("\no numero apareceu %d vezes", count);
    return 0;
}