#include <stdio.h>
#include <stdlib.h>

//vetor
/* int main(int argv, char** argc) {
	int i, vet[5];
	for (i = 0; i < 5; i++) {
		vet[i] = i * i + 10;
	}
	for (i = 0; i < 5; i++) {
		printf("Pos: %d  Valor: %d\n", i, vet[i]);
	}

}*/

//Matriz
/* 
#include <cstdio>
#include <cstdlib>

int main(int argv, char** argc) {
	int i, j, mat[2][2];

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			mat[i][j] = pow(i+j, 2) + 100;
		}
	}
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("Pos: [%d][%d]  Valor: %d\n", i, j, mat[i][j]);
		}
	}


} */

//Ponteiros

/*

#include <cstdio>
#include <cstdlib>

int main() {
    int* p = NULL, *p2 = nullptr;
    int x, *k= NULL;
    printf("Digite o tamanho para o vetor K: ");
    scanf_s("%d", &x);
    //Olhando as sequ�ncias 1 e 2, qual poder� apresentar erro?  E Por qu�?
    // Sequ�ncia 1
   // *p = x;
    //p = &x;
    /////////////////////////////////////////////////////////////////////////////////////////////////////////
    //Sequ�ncia 2
    p = &x;
   // *p = x;

    p2 =(int*) malloc(sizeof(int));

    k = (int*) malloc(x * sizeof(int));
    k[0] = 10;

 
    printf("endereco de P: %x e endereco de X: %x\n", p, &x);
}*/

//Estrutura Heterogenea sem ser vetor
/*
#include <cstdlib>
#include <cstdio>

typedef struct  {
	int chave;
	char nome[51];
} DADOS;

void LBT() {
	char c;
	while ((c = getchar()) != '\n' && c != EOF) {}
}

int main(int argv, char** argc) {
	DADOS* D = nullptr;
	D = (DADOS*)malloc(sizeof(DADOS));

	printf("Informe sua Chave: ");
	scanf_s("%d", &D->chave);
	LBT();
	printf("Informe seu Nome: ");
	scanf_s("%[^\n]", &D->nome, _countof(D->nome));

}
*/