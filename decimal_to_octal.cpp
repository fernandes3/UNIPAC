#include <iostream>
#include <string.h>


using namespace std;
int main() {
	setlocale (LC_ALL,"PORTUGUESE");
	int decimal , decimal2;
	char binario[15];
	cout << "Insira o decimal: ";
	cin >> decimal;
	int i;
	decimal2 = decimal;
	
	if (decimal == 0 ){
		binario [i] = '0';
	}else{
	
	while(decimal != 0){
		
		if(decimal % 2 == 0){
			
			binario[i] = '0';
		}else{
			
			binario[i] = '1';		
		}
		
		decimal = decimal / 2;
		i++;
		
	}
}
	cout << "Decimal -> " << decimal2 << "\n";
	cout << "Binário -> " ;
	for (int n = i ; n >= 0 ; n--){
		
		cout << binario[n];
	}
	
	return 0;
}
