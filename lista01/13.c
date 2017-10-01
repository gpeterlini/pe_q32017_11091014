#include <stdio.h>

int soma(int valor){
	int soma = 0;
	for(int i=1; i<=valor; i++){
		soma = soma + i;
	}
	return soma;
}

int main(){
	int valor;
	scanf("%d", &valor);
	int res = soma(valor);
	printf("soma de 1 a %d = %d\n", valor, res);
	return 0;
}
