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
	
	if(hora_atual->tm_hour > 9 && hora_atual->tm_hour < 19){
		
		while(1){
				srand(time(NULL));
				temp_ambiente = 5 ;
				velocidade_vento = 11;
				sensacao_term = 33 + (10 * sqrt(velocidade_vento) + 10.45 - velocidade_vento) * (temp_ambiente - 33)/22;
				
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
					printf("AR LIGADO!");
					
					while(temperatura_ar != 24){
						
						printf("TEMPERATURA [%.2fC°]\n",temperatura_ar);
						Sleep(1000);
						printf(".");
						Sleep(1000);
						printf(".");
						Sleep(1000);
						printf(".");
						
						
						temperatura_ar += 0.5;
						
					}

					break;
					
					
				}		
		}	
		
	}
}

using namespace std;

int main() {
		
	setlocale (LC_ALL,"PORTUGUESE");
	
	controlador();


	
	
	
	
	
	



	
	return 0;
}



