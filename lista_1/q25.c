#include <stdio.h>
#include <math.h>
int main() {
  float x1;
  float x2;
  float y1;
  float y2;
  float distancia;
  printf("digite as coordenadas do primeiro ponto (x1, y1\n)");
  scanf("%f %f", &x1, &y1);
  
  printf("digite as coordenadas do segundo ponto (x2, y2\n)");
  scanf("%f %f", &x2, &y2);
  distancia = sqrt (pow(x1-x2,2) + pow(y1-y2,2) );
  printf("a distancia entre os dois pontos é %.2f\n", distancia);
  
}