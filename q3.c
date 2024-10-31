#include <stdio.h>

int main() {
  int a;
  printf("escolha o valor:");
  scanf("%d", &a);
  printf("o triplo do valor é %d, o seu quadrado é %d, e sua metade é %d",
         3 * a, a * a, a / 2);
}