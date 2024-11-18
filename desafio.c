#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  int escolha;
  unsigned char cod = 0x00;
  unsigned char pos = 0;
  unsigned char mask = 0x01;
  srand(time(NULL));
  do {
    puts("escolha uma ação:");
    puts("[1] = ocupar armario");
    puts("[2] = desocupar armario");
    puts("[3] = sair do programa");
    scanf("%d", &escolha);
    switch (escolha) {
    case 1:
      pos = 1 + rand() % 8;
      mask <<= (pos-1);
      cod = cod | mask;
      printf("os armarios ocupados sao:%hhu esse\n", cod);
      for(int i=1; i<9; i++){
        printf("%d", i);
        printf("%hhu\n", (cod>>i)&1);
      };
      break;
    case 2:
      puts("digite a posicao que desejar desligar:");
      scanf("%hhu", &pos);
      cod = cod & ~(mask << (pos-1));
      printf("os armarios acesas são %hhu\n", cod);
      break;
    case 3:
      puts("saindo do programa");
      break;
    default:
      puts("o valor inserido não é válido");
      break;
    }
  } while (escolha != 3);
}