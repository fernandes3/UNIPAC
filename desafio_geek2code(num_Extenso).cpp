#include <iostream>
#include <string.h>

using namespace std;

char unidades[20][20] = {"zero","um","dois","três","quatro","cinco","seis","sete","oito","nove","dez",
						  "onze","doze","treze","quatorze","quinze","dezesseis","dezessete","dezoito","dezenove"};
						
char dezenas[11][11] = {"","","vinte","trinta","quarenta","cinquenta","sessenta","setenta","oitenta","noventa"};

char centenas[20][20] = {"cento","duzentos","trezentos","quatrocentos","quinhentos","seiscentos","setecentos","oitocentos","novecentos"};
int centena = 0;

void convert(int value){
	
	if(value >= 0 && value <= 2147483647){
			if (value >= 1000000000){
				if (value / 1000000000 == 1){
					convert(value / 1000000000);
					cout << " bilhão ";
				}else{
					convert(value / 1000000000);
					cout << " bilhões ";
				}
				if ( value % 1000000000){
					convert(value % 1000000000);
				}
			}
			else if (value >= 1000000){
				if (value / 1000000 == 1){
					convert(value / 1000000);
					cout << " milhão ";
				}else{
					
					convert(value / 1000000);
					cout << " milhões ";
				}
				
				if (value % 1000000){
					
					convert(value % 1000000);
				}
				
		}
		else if (value >= 1000){
			
			if ((value / 1000) == 1){
				cout << "mil ";
			}else{
				
				convert(value / 1000);
				cout << " mil ";				
			}
			
			if (value % 1000){
				
					if (value % 1000 < 100){
						
						cout << " e ";
					}
					
					cout << " ";
					convert(value % 1000);
				
				
			}
			
		}else if (value >= 100){
			
			centena = 1;
			if (value == 100){
				cout << "cem";
			}else {
				convert(value / 100);
			}
			
			
			if (value % 100){
				centena = 0;
				cout << " e ";
				convert(value % 100);
				
			}
			
		}
		
		else if(value >= 20){
			
			cout << dezenas[value / 10];
			if(value % 10){
				cout << " e ";
				convert(value % 10);
				
			}
		}else if (value < 10 && centena){
			
			cout << centenas[value - 1];
			
		}else{
			
			cout << unidades[value];
		}		
		
	}else{
			cout << "VALOR INVÁLIDO";
	}
	
}

int main(int argc, char** argv) {

	setlocale (LC_ALL,"PORTUGUESE");
	int value ;
	int a = 2147483647 ;
	int b = 1002;
	int c = 27;
	int d = 120;
	int e = 1120;
	int f = 110195;
	int g = 1342000000;
	
	
	/*cout << "ENTER THE NUMBER : ";
	cin >> value;
	*/

	cout << "Entrada: "<< a << ","<< "Saida: " ;
	convert(a);
	cout << "\n";
	cout << "Entrada: "<< b << ","<< "Saida: " ;
	convert(b);
	cout << "\n";
	cout << "Entrada: "<< c << ","<< "Saida: " ;
	convert(c);
	cout << "\n";
	cout << "Entrada: "<< d << ","<< "Saida: " ;
	convert(d) ;
	cout << "\n";
	cout << "Entrada: "<< e << ","<< "Saida: " ;
	convert(e);
	cout << "\n";
	cout << "Entrada: "<< f << ","<< "Saida: " ;
	convert(f) ;
	cout << "\n";
	cout << "Entrada: "<< g << ","<< "Saida: " ;
	convert(g) ;
	cout << "\n";
	return 0;
}
