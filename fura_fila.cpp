#include <iostream>
#include <stdio.h>
#include "filas2.h"
using namespace std;

int main() {
	

setlocale(LC_ALL,"PORTUGUESE");

	NodoFila *pose;
	NodoFila *posa;
	
	Fila fila;
	char textoFila[15] = {'A','B','C','D','E','F','G','H','I','J'};
	int i = 0;
	char busca;
	criarFila(fila);
	for (i = 0; i < strlen(textoFila);i++){
		enfileirar(fila,textoFila[i]);
	}
	int contador = strlen(textoFila);
	
	printf("contador: %i",contador);
	cout <<"-==-==--==-==--==-==--==-==--==-==--==-==--==-==--==-==-" << "\n";
	cout <<"                       FILA INICIAL                    " << "\n ";
	cout <<"-==-==--==-==--==-==--==-==--==-==--==-==--==-==--==-==-" << "\n";
	NodoFila *print = fila.prim;
	while(print != NULL){
		printf("%c ->",print->info);
		print = print->prox;
	}
	
	cout <<"\n\n";
	int fura;
	cout << "A fila possui " << contador << " pessoas!\n\n";
	cout << "Digite onde deseja entrar na fila: ";
	cin >> fura;
	if(fura <= contador){
	
	int pe = 1;
	int pa = 1;
	
	NodoFila *furafila = new(NodoFila);
	
	pose = fila.prim;
if (fura != 1){

	while(pe !=(fura) && pose->prox != NULL){
		pose = pose->prox;
		pe++;
	}
	posa = fila.prim;
	while(pa != (fura - 1)){
		posa = posa->prox;
		pa++;
		
	}
}
	
	
	
	print =  fila.prim;
	if (fura == 1 ){
		furafila->info = 'Z';
		furafila->prox = fila.prim;
		fila.prim = furafila;	
		
	}else{
		furafila->info = 'Z';
		furafila->prox= pose;
		posa->prox = furafila;
	}
	print = fila.prim;

	cout << "\n\n\n";
	cout << "Voce entrou no " << fura <<"º" << " lugar da fila !" << "\n\n";
	cout <<"-==-==--==-==--==-==--==-==--==-==--==-==--==-==--==-==-" << "\n";
	cout <<"                   FILA APÓS SER FURADA                    " << "\n ";
	cout <<"-==-==--==-==--==-==--==-==--==-==--==-==--==-==--==-==-" << "\n";
	contador = 0;
	while(print != NULL){
		printf("%c ->",print->info);
		print = print->prox;
		contador++;
	}
	

	cout << "\n\nA fila agora possui " << contador << " pessoas! ";
	cout << "\n\n";
}else{
	printf("Não existe essa Posição na fila");
}
	return 0;
}
