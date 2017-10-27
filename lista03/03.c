#include<stdio.h>
#include<stdlib.h>

int somaVetor(int *v1, int *v2){
	int *soma = malloc(5*sizeof(int));
	for(int i=0; i<5; i++){
		soma[i] = v1[i] + v2[i];
	}
	return soma;
}

int main(){
	int v1[5];
	int v2[5];
	for(int i=0; i<5; i++){
		scanf("%d", &v1[i]);
	}
	for(int j=0; j<5; j++){
		scanf("%d", &v2[j]);
	}
	
	int *v3 = somaVetor(v1,v2);
	for(int k=0; k<5; k++){
		printf("%d ", v3[k]);
	}
	printf("\n");	
	free(v3);
	return 0;
}
