#include <stdio.h>

int main() {
  int a;
  int fatorial = 1;
  puts("escolha o numero fatorial:");
  scanf("%d", &a);
  for (int i = 1; i <= a; i++) {
    fatorial *= i;
  }
  printf("%d", fatorial);
}