#include<stdio.h>
#include<stdlib.h>

int numeroRepete(int *v, int n){
	int *repeticoes = malloc(n*sizeof(int));
	for(int i=0; i<n; i++){
		repeticoes[i] = repeticoes[v[i]];
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int *v = malloc(n*sizeof(int));
	for(int i=0; i<n; i++){
		scanf("%d",&v[i]);
	}
	
	int *repeticoes = numeroRepete(v,n);
}
