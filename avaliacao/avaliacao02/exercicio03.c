#include <stdio.h>

char* find_last_occurrence(char *str, char c) {
    char *last_occurrence = NULL;

    while (*str != '\0') {
        if (*str == c) {
            last_occurrence = str;
        }
        str++; 
    }

    return last_occurrence;  
}

int main() {
    char string[] = "Exercicio de APC II";
    char search_char;
    char *result;

    printf("Digite o caractere para buscar: ");
    scanf(" %c", &search_char);

    result = find_last_occurrence(string, search_char);

    if (result != NULL) {
        printf("Saída: 0x%lx\n", (unsigned long)(result - string + 0x100));
    } else {
        printf("Saída: Caractere não encontrado\n");
    }

    return 0;
}
