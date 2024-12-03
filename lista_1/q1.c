#include <stdio.h>

int main() {
  int a;
  printf("escolha o valor de a:");
  scanf("%d", &a);
  printf("o valor de a em hexadecimal é %x\n e o valor em octal é %o", a, a);
}