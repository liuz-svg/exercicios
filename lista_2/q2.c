#include <stdio.h>

int main() {
  unsigned char a;
  do {
    puts("escolha um numero de 1 a 7 para um dia da semana");
    scanf("%hhu", &a);

    switch (a) {
    default:
      puts("o numero inserido não é válido");
      break;
    case 0:
      return 0;
    case 1:
      puts("domingo");
      break;
    case 2:
      puts("segunda-feira");
      break;
    case 3:
      puts("terça-feira");
      break;
    case 4:
      puts("quarta-feira");
      break;
    case 5:
      puts("quinta-feira");
      break;
    case 6:
      puts("sexta-feira");
      break;
    case 7:
      puts("sábado");
      break;
    };
  } while (a > 1 && a < 7);
}