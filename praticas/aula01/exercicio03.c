#include <stdio.h>

int main(void) {
    int n1 = 3, n2 = 5;
    int *p1, *p2;
    int temp;

    p1 = &n1;
    p2 = &n2;

    // Troque os valores usando uma variável temporária
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("n1: %d, n2: %d\n", n1, n2); // espera-se exibir n1: 5, n2: 3

    return 0;
}
