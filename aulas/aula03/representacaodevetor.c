#include <stdio.h>

int main(void){

int n = 5;
  int *pn = &n;
  printf("Representação de ponteiro:\n");
  printf("p: %p (%n), *p: %d (n)\n", pn, *pn);
  printf("Represenação de vetor: \n");
  printf("&n: %p, n: %d\n", &pn[0], pn[0]);

  return 0;
}