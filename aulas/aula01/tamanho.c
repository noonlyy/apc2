#include <stdio.h>

// S
// 0|111 1111 1111 1111
//     7    F    F    F
// + 1
// 1|000 0000 0000 0000
//     8    0    0    0
int main(void) {
  printf("n1: %d (%X)\n", n1, n1);

  short int numero = 0x7FFF;
  printf("numero: %d (%X)\n", numero, numero);
  numero++;
  printf("numero: %d (%X)\n", numero, numero);

  unsigned short int numero_sem_sinal = 0x7FFF;
  printf("numero: %d (%X)\n", numero_sem_sinal, numero_sem_sinal);
  numero_sem_sinal++;
  printf("numero: %d (%X)\n", numero_sem_sinal, numero_sem_sinal);
  return 0;
}