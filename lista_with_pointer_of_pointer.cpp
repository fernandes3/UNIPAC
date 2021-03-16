#include <iostream>
using namespace std;
struct no {
	int val ;
	no * prox;
};


void adiciona (no **inicio,int val ){
	
	no ** passeio = inicio ;
	cout << "Conteudo de apontado por PASSEIO (LISTA): " << *passeio <<"\n";
	while (*passeio != NULL){
		passeio = &((*passeio)->prox);
		cout << "Conteudo de PASSEIO(PROX) : " << passeio << "\n";		
	}
	//cout << "Conteudo antes de criar o no: " << *passeio << "\n";
	(*passeio) = new no;
	//cout << "Conteudo passeio apos criar no: "<< *passeio << "\n";
	(*passeio)->val = val;
	(*passeio)->prox = NULL;
	//cout << "Conteudo de PROX :" << (*passeio )->prox <<"\n";
}

void imprimir (no *imprimir){

no * aux;
aux =  imprimir;
while(aux != NULL){
	
	cout << "A: " << aux->val <<"\n";
	aux = aux->prox;
}

}
int main() {
	setlocale(LC_ALL,"PORTUGUESE");
no * lista = NULL;

//cout << "Conteudo de Lista :" << lista <<"\n";
for (int i = 1; i <= 4; i++){
	adiciona (&lista,i*2);
	//cout << "Conteudo de Lista :" << lista <<"\n";
	
}

imprimir (lista);
return 0;
}
