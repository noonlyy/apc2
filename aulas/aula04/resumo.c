#include <stdio.h>

int main(void) {

int numero = 15; // 0x0000000f
 
sizeof(char) = 1 byte;
sizeof(int) = 4 bytes;
sizeof(float) = 4 bytes;
sizeof(double) = 8 bytes;

printf("tamanho d int: %ld\n", sizeof(int));

// int main(void);
// int a;
// printf("&a: %u (%lu byte(s))\n", &a, sizeof(int));  

&i = 0x100 e 0x101;  // 2 bytes
&j = 0x102 e 0x103; // 2 byte
&k = 0x104 e 0x105; // 2 byte
&l = 0x106 e 0x107; // 2 byte

#Ponteiros

tipo * ptr
ptr = nome da variavel;
tipo = local onde o ponteiro vai apontar;
* = char, int, double;

int * ptr;
int* ptr;
int *ptr; 
// não importa o * no ponteiro

NULL = 0x00000000 ou 0; 

int *ptr = NULL; // 0.
char *pchar = 0;
float *pfloat = 0x0;

int *ptr; ptr = 7; // Resposta exercicio 01.
scanf("%d", ptr); 

int numero;
// Alterne o valor do numero para 5 utilizando ponteiros.
int numero;
int *p;

p = &numero;

*p = 5;
printf("Valor de numero: %d\n", numero);

int *p = 0x104; 
int = 4;
p++ =  p = p + 1;
p++ = 0x104 + 0x004;
p++ = 0x104 + 0x004 = 0x108;

char *p = 0x104; 
char = 1;
== 
==

// Exercicio 01.
  
p = 0x200;
int = 2;
p = p + 10 = 0x200 + 0x014 = 0x214;
p = 0x214;

p = 0x200;
10 * 4 = 40;
40 = 0x28;

printf(%x) // hexadecimal
printf(%d) // inteiro

int vet[10]; // representação interna: (int *)
int mat[5][5]; // representação interna: (int *)[5]

int vet[10] = {3, 5, 6, 2, 8, 9, 1, 5, 0, 7};

printf("Valores\n");
printf("v[0] = %d, *(v+0) = %d\n", v[0], *v); // %d inteiro
printf("Endereços\n");
printf("&v[0] = %p, v+0 = %p\n", &v[0], v);

int *p = v;
printf("Valores\n");
printf("p[0] = %d, *(v+0) = %d\n", p[0], *p);

// Estruturas e união

struct {
  char nome[100]; // 100 bytes
  int idade; // 4 bytes
  char genero; // M, F // 1 byte
} pessoa1, pessoa2; // 105 bytes

int main(void) { 
  struct Pessoa pessoa1 = {"João", 30, 'M'};

  printf("Nome: %s\n", pessoa1.nome);
  prinft("Idade: %d\n", pessoa1.idade);
  printf("Genero: %c\n", pessoa1.genero);
  
}

union [nome_da_uniao] {
tipo1 campo1;
tipo2 campo2;
...
tipon campo;
};

  typedef int inteiro;

// cd aulas/aula03
// PROFESSOR FALOU SOBRE A RELAÇÃO DE PONTEIRO E VETOR E COMO A MANIPULAÇÃO É POSSÍVEL EM AMBOS GERANDO RESULTADOS IGUAIS

#include <stdio.h>

int main(void){
int vet[10] = {3,5,6,2,8,9,1,5,0,7};
int mat [5][5];
printf("Representação do vetor: \n");
printf("&vet[0]: %p, vet: %d\n", &vet[0], vet[0]);
printf("&vet[0]: %p, vet: %d\n", &vet[1], vet[1]);
printf("&vet[0]: %p, vet: %d\n", &vet[2], vet[2]);

printf("\nRepresentação de ponteiro: \n");
printf("vet: %p,  *vet: %d\n", vet, *vet); printf("vet+1: %p,  *(vet+1): %d\n", vet+1, *(vet+1));
printf("vet+2: %p,  *(vet+2): %d\n", vet+2, *(vet+2));

return 0;
}

// Diferença de *vet+1 para *(vet+1):
// O primeiro ele chega ao endereço e depois soma, no exemplo acima o resultado seria 4, já o  *(vet+1) pularia o endereço e depois é lido, no exemplo acima seria o valor 5 no vetor

Situação 1:

int *p = vet; // p = &vet[0];
printf("Representação de vetor: \n");
printf("&p[0]: %p, p[0]: %d\n", &p[0], p[0]);
printf("&p[1]: %p, p[1]: %d\n", &p[1], p[1]);
printf("&p[2]: %p, p[2]: %d\n", &p[2], p[2]);
printf("Representação de ponteiro:\n");
printf("p: %p, *p: %d\n", p, *p); // vet[0]
printf("p+1: %p, *(p+1): %d\n", p+1, *(p+1)); // vet[1]
printf("p+2: %p, *(p+2): %d\n", p, *(p+2)); // vet[2]

// R: Nesta situação, foi criado um ponteiro que aponta para os índices do vetor, a partir do índice 0. Então neste caso os valores apontados são dos índices 0, 1 e 2, que são respectivamente 3, 5 e 6.

Situação 2:

int *p2 = &vet[5];
printf("Representação de vetor: \n");
printf("&p2[0]: %p, p2[0]: %d\n", &p2[0], p2[0]);
printf("&p2[1]: %p, p2[1]: %d\n", &p2[1], p2[1]);
printf("&p2[2]: %p, p2[2]: %d\n", &p2[2], p2[2]);
printf("Representação de ponteiro:\n");
printf("p2: %p, *p: %d\n", p2, *p2);
printf("p2+1: %p, *(p2+1): %d\n", p2+1, *(p2+1));
printf("p2+2: %p, *(p2+2): %d\n", p2, *(p2+2));

// R: Neste caso, foi criado um ponteiro que aponta para os índices do vetor novamente, porém a partir do 5º índice. Então os índices apontados são o 5º, 6º e 7º, que são respectivamente: 9, 1 e 5.

// cd aulas/aula04
// fragmentação interna

scanf("%[^\n]s","%12[^\n]", pessoa2.nome);
// delimita a quantidade de caracteres lidos





  x

   for (int x = 0; x < 10; x++) {
      for (int y = 0; y < 10; y++) {

          if (x == y || x + y == 9) {
              pchar3[(x*10 + y)*4] = 255;  
              pchar3[(x*10 + y)*4 + 1] = 255; 
              pchar3[(x*10 + y)*4 + 2] = 0; 
              pchar3[(x*10 + y)*4 + 3] = 0;
          }
      }
    }

  for(int b = 0; b < 100*4; b+=4) {
      int media = round((pchar3[b+3]+pchar3[b+2]+pchar3[b+1]+pchar3[b])/4.0);
      pchar3[b] = media;
      pchar3[b+1] = media;
      pchar3[b+2] = media;
      pchar3[b+3] = media;
    }


// 
  
return 0;
}