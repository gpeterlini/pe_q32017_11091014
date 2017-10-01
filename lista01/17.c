#include <stdio.h>
#include <math.h>

int somaQuadrados(int x, int y){
	int soma = 0;
	for(int i=x; i<=y; i++){
		soma += pow(i,2);
	}
	return soma;
}

int quadradoSoma(int x, int y){
	int soma = 0;
	for(int i=x; i<=y; i++){
		soma += i;
	}
	return pow(soma,2);
}

int diferenca(int x, int y){
	return (quadradoSoma(x,y) - somaQuadrados(x,y));
}

int main(){
	int x,y;
	scanf("%d %d", &x, &y);
	printf("soma dos quadrados = %d\n", somaQuadrados(x,y));
	printf("quadrado da soma   = %d\n", quadradoSoma(x,y));
	printf("diferenca          = %d\n", diferenca(x,y));	
}
