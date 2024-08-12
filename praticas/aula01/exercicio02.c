#include <stdio.h>

int main(void) {
    int numero;
    int *p;

    p = &numero;

    // Modificar o valor de numero através do ponteiro p
    *p = 5;

    // Print o valor para verficar se o valor foi modificado
    printf("Valor de numero: %d\n", numero);

    return 0;
}



