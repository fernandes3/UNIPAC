#include <stdlib.h>
#include <Windows.h>
#include <iostream>
#include <time.h>
#include <math.h>
#include <conio.c>

#define ANSI_COLOR_RED      "\x1b[31m"


void controlador(){
		struct tm *hora_atual;
	float temp_ambiente;
	float velocidade_vento;
	float sensacao_term;
	time_t segundos;
	time(&segundos);
	float temp_ar = 19;
	
	int on = 0;
	hora_atual = localtime(&segundos);
	float temperatura_ar = 19;
	
	if(hora_atual->tm_hour > 9 && hora_atual->tm_hour < 22){
	
		srand(time(NULL));
		temp_ambiente = rand() % 40 ;
		velocidade_vento = rand() % 14;
		sensacao_term = 25 + (10 * sqrt(velocidade_vento) + 10.45 - velocidade_vento) * (temp_ambiente - 33)/22;
		printf("SENSAÇAO TÉRMICA [%.1f°C]\n",sensacao_term);
			
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
		}else if(sensacao_term < 19 && on){
			printf("LIGADO!");
		}else if(sensacao_term >= 19 && sensacao_term <= 25 && on){
			
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
			printf("DESLIGADO!");
			
		}else if (sensacao_term > 25 && !on){
			
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
			
		}else if (sensacao_term > 25 && on){
			textcolor(2);
			printf("LIGADO!");
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



