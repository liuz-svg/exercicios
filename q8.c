#include <stdio.h>

int main() {
  int x;
  printf("escolha o valor de x\n");
  scanf("%d", &x);
  printf("\no sucessor de x é %d e o antecessor é %d", x + 1, x - 1);
}