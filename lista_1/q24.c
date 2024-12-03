#include <stdio.h>
int main(void){
    float a;
    float b;
    float c;
    float d;

    printf("Digite o tempo em segundos: ");
    scanf("%f", &a);

    b = a / 3600;
    c = (a/60)-(b*60);
    d = (int)a % 60;

    printf("%.0f h %.0f min %.0f s\n", b, c, d);
}