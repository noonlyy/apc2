#include <stdio.h>

int main() {
    int vet[8] = {4, 6, 3, 8, 2, 5, 9, 1};
    int *ptr = vet;  

    for(int i = 0; i < 8; i++) {
        printf("vet[%d]: %d\n", i, *(ptr + i));  
    }
    return 0;
}
