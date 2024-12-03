#include <stdio.h>

int main() {
  unsigned char pedro = 110;
  unsigned char jose = 150;
  unsigned char anos;
  while (jose > pedro) {
    anos++;
    pedro += 3;
    jose += 2;
    printf("%hhu anos se passaram\n", anos);
  }
}