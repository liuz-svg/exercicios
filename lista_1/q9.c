#include <stdio.h>

int main() {
  int a;
  int b;
  int c;
  printf("escolha o valor de altura da caixa\n");
  scanf("%d", &a);
  printf("escolha o valor de largura da caixa\n");
  scanf("%d", &b);
  printf("escolha o valor de comprimento da caixa\n");
  scanf("%d", &c);
  printf("o volume da caixa é de %d", a * b * c);
}