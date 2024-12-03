#include <stdio.h>

int main() {
  int a;
  float b;
  printf("escreva a cotacao do dolar:");
  scanf("%f", &b);
  printf("quantos reais voce quer converter\n");
  scanf("%d", &a);
  printf("o valor de dolares apos a conversao sera de %f", a / b);
}