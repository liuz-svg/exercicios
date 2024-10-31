#include <stdio.h>

int main() {
  float a;
  int s;
  printf("escreva sua altura em metro:");
  scanf("%f", &a);
  printf("escolha: 0 para homem, 1 para mulher\n");
  scanf("%d", &s);
  switch (s) {
  case 0:
    printf("\nseu peso ideal é de %f\n", 72.7 * a - 58);
    break;

  case 1:
    printf("\nseu peso ideal é de %f\n", 62.1 * a - 44.7);
    break;

  default:
    printf("\no valor inserido é invalido\n");
    break;
  };
  return 0;
}