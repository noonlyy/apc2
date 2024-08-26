#include <stdio.h>

union RGBA_Pixel {
    int pixel;
    unsigned char rgba[4];
};

int main() {
    union RGBA_Pixel pixel1;
    pixel1.pixel = 0xAAFF00CC; // vermelho

    printf("Pixel: %X\n", pixel1.pixel);
    printf("R: %d\n", pixel1.rgba[0]);
    printf("G: %d\n", pixel1.rgba[1]);
    printf("B: %d\n", pixel1.rgba[2]);
    printf("A: %d\n", pixel1.rgba[3]);

    return 0;
}

// union RGBA_Pixel {
//     int pixel;
//     unsigned char rgba[4];
// };

// int main() {
//     union RGBA_Pixel pixel1;
//     union RGBA_Pixel *ponteiro_pixel = &pixel1;

//     (*ponteiro_pixel).pixel = 0x00FF0000; // vermelho

//     printf("Pixel: %X\\n", (*ponteiro_pixel).pixel);
//     printf("R: %d\\n", (*ponteiro_pixel).rgba[0]);
//     printf("G: %d\\n", (*ponteiro_pixel).rgba[1]);
//     printf("B: %d\\n", (*ponteiro_pixel).rgba[2]);
//     printf("A: %d\\n", (*ponteiro_pixel).rgba[3]);

//     return 0;
// }


typedef tipo_original novo_nome;

typedef int inteiro; 
int numero = 44;

struct Pessoa {
    char nome[100];
    int idade;
    char genero;
};

typedef struct Pessoa Pessoa;

// Definição dos protótipos das estruturas
typedef struct Pessoa Pessoa;
typedef struct Computador Computador;

typedef unsigned int uint;

// Especificação das estruturas
struct Pessoa {
    uint id;
    char nome[100];
    int idade;
    char genero; // M, F
    Computador computador;
};

struct Computador {
    uint id;
    char modelo[100];
    char marca[100];
}
