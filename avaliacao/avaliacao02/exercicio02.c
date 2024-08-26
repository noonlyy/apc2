#include <stdio.h>

int main() {
    char string[50] = "Avaliacao 2";
    char *ptr = string;

    while(*ptr != '\0') {
        printf("string[%ld]: %c\n", ptr - string, *ptr);  
        ptr++;  
    }
    return 0;
}