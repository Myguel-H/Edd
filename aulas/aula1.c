//Vetor: Estrutura homogenea (por que e so um tipo de dado) Unidimensional. E estatica
// float y(2, 2); Estrutura homogenea multidimensional

#include <stdio.h>
#include <stdlib.h>

typedef struct DADOS {
    int chave;
};

int main () {
    struct  DADOS dados[3];
    int ind;
    
    for(ind=0; ind<3; ind++) {
        printf("Informe um valor para chave: ");
        scanf("%i", &dados[ind].chave); // Primeiro dados, o indice (vetor) e depois a variavel 
    }
}