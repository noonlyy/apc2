#include <stdio.h>

int main() {
  int i = 5;
  int *p;
  p = NULL; // p = 0; p = 0x0
  p = &i;
  printf("p (i - endereco de i): %p\n", p);
  printf("p (i - valor de i): %d\n", *p);
  return 0;
}