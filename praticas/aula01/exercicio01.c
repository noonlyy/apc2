
// PROGRAMA ORIGINAL
#include <stdio.h>

int main(void) {
    int i = 5;
    int *p;
    p = &i;
    printf("p (i - endereco de i): %p\n", p);
    printf("*p (i - valor de i): %d\n", *p);
    return 0;
}

// Atribuir diretamente um novo valor a i através do ponteiro p
#include <stdio.h>

int main(void) {
    int i = 5;
    int *p;
    p = &i;
    printf("p (i - endereco de i): %p\n", p);
    printf("*p (i - valor de i): %d\n", *p);

    *p = 7;
    printf("*p (i - valor de i) após atribuição direta: %d\n", *p);

    return 0;
}

// Usando a função scanf para ler um valor inteiro e atribuir a i através do ponteiro p
#include <stdio.h>

int main(void) {
    int i = 5;
    int *p;
    p = &i;
    printf("p (i - endereco de i): %p\n", p);
    printf("*p (i - valor de i): %d\n", *p);

    printf("Digite um novo valor para i: ");
    scanf("%d", p);
    printf("*p (i - valor de i) após scanf: %d\n", *p); w    

    return 0;
}




