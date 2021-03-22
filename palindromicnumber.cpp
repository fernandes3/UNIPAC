#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int invertnumber(int numero){
	int reverse = 0 ;
	int rem = 0;
	while(numero != 0){
		
		rem = numero % 10 ;
		reverse = reverse * 10 + rem;
		numero /= 10;
	}
	
	return reverse;
	
}
int main() {
	
	setlocale(LC_ALL,"PORTUGUESE");
	int i = 999;
	int j = 999;
	int pol = 0;
	int temppol=0;
	int poltemp;
	
	while(i >= 100){
		j = i ;
		
		while(j >= 100){
			
			 temppol = i * j ;
			if(temppol == invertnumber(temppol)){
				poltemp = invertnumber(temppol);
			if(poltemp > pol){
				pol = poltemp;
			}
				
			}
			j--;
		}
		i-- ;
		
	}
	printf("O maior pol é : %i",pol);
	return 0;
}
