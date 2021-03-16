#include <iostream>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

 											// **** ALGORITMO DE BUBBLE SORT *** 
int main (){
	
	
	setlocale(LC_ALL,"PORTUGUESE");
	int i, aux, contador;
	int numeros[TAM];
	
	printf("Entre com os valores desejados e aperte <ENTER> a cada iteração : \n");
	//PREENCHIMENTO DO VETOR;
	for (i = 0 ; i < 10 ; i++){
		printf("Posição [%i]: " , i);
		scanf(" %i",&numeros[i]);
	}
	printf("\n\n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("    Ordem atual dos itens no array  \n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	// PRINT DE COMO O ARRAY ESTA INICIALMENTE ORDENADO 
	for (i = 0 ; i < 10 ; i++){
		
		printf("Posição [%i]: %i\n" , i,numeros[i]);
	}
	
	
	// SCRIPT DO BUBBLE SORT 
	int N = TAM;
	for (contador = 0; contador < TAM; contador ++){
		for(i = 0; i < N -1 ; i++){
			if (numeros[i] > numeros[i+1]){
				aux = numeros[i];
				numeros[i] = numeros[i+1];
				numeros[i+1] = aux;
			}
		}
		N--;
	}
	
	printf("\n\n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf(" Ordem  dos itens no array após ordenação\n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	
		for (i = 0 ; i < 10 ; i++){
		
		printf("Posição [%i]: %i\n" , i,numeros[i]);
	}
	
	
	return 0;
}
