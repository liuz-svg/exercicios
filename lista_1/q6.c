#include <stdio.h>

int main() {
  int a;
  int b;
  int c;
  printf("digite a quantidade de horas:\n");
  scanf("%d", &a);
  printf("digite a quantidade de minutos:\n");
  scanf("%d", &b);
  printf("digite a quantidade de segundos:\n");
  scanf("%d", &c);
  printf("o total de segundos é %d", (3600 * a) + (60 * b) + c);
}