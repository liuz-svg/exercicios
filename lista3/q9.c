#include <stdio.h>
#define QL 3 
#define QC 3
int main (){
    int m[QL][QC], diagonal;
    puts("escreva a sua matriz 3x3:");
    for(int i=0; i<QC; i++){
        for(int j=0; j<QL; j++){
            scanf("%d", &m[i][j]);
        }
        printf("\n");
    }
    puts("sua diagonal principal será:");
      for(int i=0; i<QC; i++){
        for(int j=0; j<QL; j++){
            if(i==j){
                printf("%d ", m[i][j]);
            }
        }
        printf("\n");
    }
}