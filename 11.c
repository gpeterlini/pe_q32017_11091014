#include <stdio.h>
#include <math.h>
int v[20];
int decimalParaBinario(int valor){
  int cont = 0;
	while(valor!=0){
	   v[cont] = valor%2;
	   valor = valor/2;
	   cont++;
	}
	for(int i=cont-1; i>=0; i--){
		printf("%d", v[i]);
	}
}

int binarioParaDecimal(int valor){
	int res = 0;
	int cont = 0;
	while(valor!=0){
	    v[cont] = valor%10;
	    valor = valor/10;
	    cont++;
	}
	for(int i=0; i<cont; i++){
            if(v[i] == 1){
	        res = res + pow(2,i);
	    }
	}
	printf("%d", res);
}

int main()
{
	int valor, opt;
	
	scanf("%d %d", &valor, &opt);
	for(int j=0; j<10; j++){
		v[j] = 0;
	}

	if(opt == 1){ decimalParaBinario(valor); }
	else{ binarioParaDecimal(valor); }
	return 0;
}