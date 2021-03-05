#include <iostream>
#include<string.h>
#include <conio.h>
#include<stdlib.h>
#include<time.h>
void insert_arch(){
	FILE *archive;
	archive = fopen("archive.dat","a+b");
	int degree;
	char answer;
	 	do{
	 		printf("Insert degree in C°: ");
	 		scanf("%i",&degree);
	 		fwrite(&degree,sizeof(degree),1,archive);
	 		printf("Do you wanna insert more?(Y)es/(N)o: ");
	 		scanf(" %c",&answer);
	 		
		 }while(toupper(answer) != 'N');
		 
		 fclose(archive);
	
	
}



// FNÇÃO PARA LEITURA DE ARQUIVOS
int ler_arch(){
	FILE *archive;
	archive = fopen("archive.dat","a+b");
	int contador = 0;
	rewind(archive);
	int teste;
	while(!feof(archive)){
	
	if(fread(&teste,sizeof(teste),1,archive)!= NULL){
		contador++;
		}
	}	

   int i = 0;
   int vet[contador];
   rewind(archive);
   
while(!feof(archive)){
	
	if(fread(&vet,sizeof(vet),1,archive)!= NULL){
		vet[i++];
	}
}
	int j;
	fclose(archive);
	srand(time(NULL));
 	j = rand() % contador;
  
  	return vet[j];
	
	
}
using namespace std;
int main() {
	
	setlocale (LC_ALL,"PORTUGUESE");
	int contador = 0 ;
	
	int on_off = 0;

	
    printf("%i",ler_arch());
    
    if (ler_arch() < 20 && on_off == 0){
    	printf("Ligado!");
	}



	
	return 0;
}
