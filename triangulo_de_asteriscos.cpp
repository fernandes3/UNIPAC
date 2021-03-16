#include <iostream>
#include <vector>
#include <stdio.h>
#include <string.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {


int i , j , n ;
printf("Digite a altura da piramide :");
cin >> n;
for (i = i ; i <= n;i++){
	for (j = 1; j < n - i ; j++){
		cout <<" ";
	}
	for (j = 1 ; j <= 2*i-1;j++){
		cout << "*";
	}
	cout << "\n";
}

	return 0;
}
