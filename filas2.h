#include <string.h>
#include <conio.h>
#include <iostream>

struct NodoFila {
	char info;
	NodoFila *prox;
};

struct Fila {
	NodoFila *prim; //ponteiro para a primeira posição da fila
	NodoFila *ult; //ponteiro para a última posição da fila
};

void criarFila (Fila &F) {
	F.prim = F.ult = NULL;
}

int filaVazia (Fila F) {
	return ((F.prim == NULL) && (F.ult == NULL));
}

void imprimirFila(Fila F) {
	system("cls");
	if (!filaVazia(F)) {
		NodoFila *aux = F.prim;
		while (aux != NULL) {
			printf("%c -> ", aux->info);
			aux = aux->prox;
		}
	}
	else
		printf("Fila vazia!");
	
	printf("\n\n");
	system("pause");
}

void enfileirar(Fila &F, char x) {
	NodoFila *aux = new (NodoFila);
	aux->info = x;
	aux->prox = NULL;
	if (filaVazia(F)) F.prim = aux;
	else F.ult->prox = aux;
	F.ult = aux;
}

char desenfileirar(Fila &F) {
	NodoFila *aux = F.prim;
	char y = aux->info;
	if (F.prim == F.ult) F.ult = NULL;
	F.prim = aux->prox;
	delete(aux);
	return y;
}
