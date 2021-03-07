#include <stdlib.h>
#include <Windows.h>
#include <iostream>
#include <time.h>
#include <math.h>
#include <conio.c>



void controlador(){
	
	struct tm *hora_atual;
	float temp_ambiente;
	float velocidade_vento;
	float sensacao_term;
	time_t segundos;
	time(&segundos);

	int on = 0;
	hora_atual = localtime(&segundos);
	float temperatura_ar = 19;
	
	if(hora_atual->tm_hour > 9 && hora_atual->tm_hour < 23){
		while(1){
		
		textcolor(7);
		srand(time(NULL));
		temp_ambiente = rand() % 100 ;
		velocidade_vento = rand() % 14;
		
		sensacao_term = 33 + (10 * sqrt(velocidade_vento) + 10.45 - velocidade_vento) * (temp_ambiente - 33)/22;
		
		printf("SENSAÇAO TÉRMICA [%.1f°C]\n\n\n",sensacao_term);
			
		if (sensacao_term < 19 && !on){
			on = 1;
			printf("LIGANDO");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			system("cls");
			textcolor(2);
			printf("LIGADO!");
			Sleep(1000);
			system("cls");
			if(temperatura_ar < 25){
			
			while(temperatura_ar <= 25){
				printf("TEMPERATURA DO AR CONDICIONADO [%.1f°C]\n",temperatura_ar);
				Sleep(1000);
				temperatura_ar += 0.5;
			}
		}else{
			printf("TEMPERATURA DO AR CONDICIONADO [%.1f°C]\n",temperatura_ar);
		}
		
		}else if(sensacao_term < 19 && on){
			printf("LIGADO!");
			if(temperatura_ar < 25){
			while(temperatura_ar <= 25){
				printf("TEMPERATURA DO AR CONDICIONADO [%.1f°C]\n",temperatura_ar);
				Sleep(1000);
				temperatura_ar += 0.5;
			}
		}else {
			printf("TEMPERATURA DO AR CONDICIONADO [%.1f°C]\n",temperatura_ar);
		}
		
		}else if(sensacao_term >= 19 && sensacao_term <= 25 && on){
			printf("TEMPERATURA AGRADAVEL! NÃO É NECESSÁRIO ATIVAÇÃO DO AR\n\n");
			Sleep(1000);
			on = 0;
			printf("DESLIGANDO");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			system("cls");
			textcolor(4);
			Sleep(1000);
			printf("DESLIGADO!");
			
		}else if(sensacao_term >= 19 && sensacao_term <= 25 && !on){
			printf("TEMPERATURA AGRADAVEL\n\n");
			Sleep(1000);
		}else if (sensacao_term > 25 && sensacao_term <= 45 && !on){
			
			on = 1;
			printf("LIGANDO");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			system("cls");
			textcolor(2);
			printf("LIGADO!\n");
			
			if (temperatura_ar > 19){
				while(temperatura_ar != 19){
				printf("TEMPERATURA DO AR CONDICIONADO [%.1f°C]\n",temperatura_ar);
				Sleep(1000);
				temperatura_ar -= 0.5;
				}
			}else{
				Sleep(1000);
				printf("TEMPERATURA DO AR CONDICIONADO [%.1f°C]",temperatura_ar);
				Sleep(1000);
			}
			
		}else if (sensacao_term > 25 && sensacao_term <= 45 && on){
			textcolor(2);
			printf("LIGADO!\n\n");
			Sleep(1000);
			system("cls");
			
			if(temperatura_ar > 19 ){
				while(temperatura_ar != 19){
				printf("TEMPERATURA DO AR CONDICIONADO [%.1f°C]\n",temperatura_ar);
				Sleep(1000);
				temperatura_ar -= 0.5;
				}
			}else{
				printf("TEMPERATURA DO AR CONDICIONADO [%.1f°C]",temperatura_ar);
			}
		}else if(sensacao_term > 50){
			
			printf("CONTROLADOR APRESENTANDO VARIAÇÕES DE TEMPERATURA EQUIVOCADAS\n");
			Sleep(2000);
			printf("E-MAIL DE SEGURANÇA ENVIADO PARA suportecon@hotmail.com\n");
			Sleep(2000);
			printf("DESLIGANDO O CONTROLADOR");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			system("cls");
			textcolor(4);
			printf("DESLIGADO!");
			break;
			
			
		}
		Sleep(1000);
		system("cls");
		//Sleep(10000);
				
				
	}
  }
}
using namespace std;

int main() {
		
	setlocale (LC_ALL,"PORTUGUESE");
	
	controlador();
	
	textcolor(7);

	
	return 0;
}



