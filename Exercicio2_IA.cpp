#include <stdlib.h>
#include <Windows.h>
#include <iostream>
#include <time.h>
#include <math.h>
#include <conio.c>

#define MAX 100

void controlador_rep();
int main() {
	
	setlocale (LC_ALL,"PORTUGUESE");
	
	controlador_rep();
	
	textcolor(7);
	
	return 0;
}

void controlador_rep(){
	
	int fluxo_entrada = 2;
	int fluxo_saida = 4;
	int volume_rep = 50;
	bool v_on_off = false;
	while(1){
	
	if(v_on_off && volume_rep < 50 || v_on_off && volume_rep > 50 && volume_rep < 100){
			v_on_off = false;
			textcolor(4);
			printf("COMPORTA ABERTA IRREGULARMENTE!\n");
			Sleep(1000);
			system("cls");
			printf("ENVIANDO E-MAIL DE SEGURANÇA E FECHANDO COMPORTA");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			system("cls");
			textcolor(2);
			printf("E-MAIL DE SEGURANÇA ENVIADO PARA seguranca_rep@hotmail.com\n");
			Sleep(1000);
			system("cls");
			textcolor(4);
			printf("COMPORTA FECHADA COM SUCESSO!\n");
			Sleep(1000);
			system("cls");
	if(volume_rep < 50){
		
			while(volume_rep != 50){
			textcolor(2);
			Sleep(1000);
			printf("VOLUME DE ÁGUA -> [%d L]\n",volume_rep);
			Sleep(2500);
			system("cls");
			volume_rep += fluxo_entrada; 
			}
		}
	}else{
			textcolor(2);
			Sleep(1000);
			system("cls");
			printf("VOLUME DE ÁGUA -> [%d L]\n",volume_rep);
			volume_rep += fluxo_entrada; 
		
	
		
		if(volume_rep == MAX && !v_on_off){
			
				v_on_off = true;
				Sleep(2500);
				printf("VOLUME DE ÁGUA -> [%d L]\n",volume_rep);
				Sleep(1000);
				system("cls");
				printf("ABRINDO COMPORTA");
				Sleep(1000);
				printf(".");
				Sleep(1000);
				printf(".");
				Sleep(1000);
				printf(".");
				Sleep(1000);
				system("cls");
				textcolor(2);
				printf("COMPORTA ABERTA COM SUCESSO!\n\n");
			
			while(volume_rep != 50){
				
				Sleep(1000);
				printf("VOLUME DE ÁGUA -> [%d L]\n",volume_rep);
				volume_rep -= (fluxo_saida - fluxo_entrada); 
			}
				Sleep(1000);
				printf("VOLUME DE ÁGUA -> [%d L]\n",volume_rep);
				Sleep(1000);
				system("cls");
				printf("CONTROLE EFETUADO COM SUCESSO! FECHANDO A COMPORTA");
				Sleep(1000);
				printf(".");
				Sleep(1000);
				printf(".");
				Sleep(1000);
				printf(".");
				Sleep(1000);
				system("cls");
				textcolor(4);
				v_on_off = false;
				printf("COMPORTA FECHADA COM SUCESSO!\n\n");
		}
		
		
	}
	
}
	
	
	
}
