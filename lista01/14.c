#include <stdio.h>

int soma(int vet[]){
	int soma = 0;
	for(int i=0;i<10;i++){
		soma += vet[i];
	}
	return soma;
}

double media(int vet[]){
	double med;
	med = soma(vet)/10.0;
	return med;
}

int main(){
	int vetor[10];
	for(int i=0;i<10;i++){
		scanf("%d", &vetor[i]);
	}
	printf("soma = %d\n", soma(vetor));
	printf("media = %.1lf\n", media(vetor));
	return 0;
}
