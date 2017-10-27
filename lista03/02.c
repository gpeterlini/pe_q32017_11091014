#include<stdio.h>
#include<stdlib.h>

void inverte (char entrada[]){
   int tamanho = 0;
   char inv[255];
   while(entrada[tamanho] != '\0'){
   		tamanho++;
   }
   int i=0;
   while(tamanho >= 0){
   		inv[i] = entrada[tamanho-1];
   		tamanho--;
   		i++;
   }
   int j=0;
   while(entrada[j] != '\0'){
   		entrada[j] = inv[j];
   		j++;
   }   
}

int main ()
{
	char entrada[255];
	fgets (entrada, 255 , stdin);
	inverte(entrada);	
	printf("%s\n", entrada);
	return 0;
}
