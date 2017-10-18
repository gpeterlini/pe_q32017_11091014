#include<stdio.h>
#include<math.h>

void celsius(float valor, int saida){
  float res;
  switch(saida){
    case 2:
      res = (valor * 1.8) + 32;
      printf("%.2f F\n", res);
      break;
    case 3:
      res = valor + 273.15;
      printf("%.2f K\n", res);
      break;
  }
}

void fahren(float valor, int saida){
  float res;
  switch(saida){
  case 1:
    res = (valor - 32) / 1.8;
    printf("%.2f C\n", res);
    break;
  case 3:
    res = ((valor - 32) / 1.8) + 273.15;
    printf("%.2f K\n", res);
    break;
  }
}

void kelvin(float valor, int saida){
  float res;
  switch(saida){
  case 1:
    res = valor - 273.15;
    printf("%.2f C\n", res);
    break;
  case 2:
    res = (valor * (9/5)) - 459.67;
    printf("%.2f K\n", res);
    break;
  }
}

void paraBinario(int valor){
  int v[10];
  int cont = 0;
	for(int j=0; j<10; j++){
		v[j] = 0;
	}
	while(valor!=0){
	  v[cont] = valor%2;
		valor = valor/2;
		cont++;
	}
	for(int i=cont-1; i>=0; i--){
		printf("%d", v[i]);
	}
}

void paraDecimal(int valor){
  int v[10];
  int cont = 0;
	for(int j=0; j<10; j++){
		v[j] = 0;
	}
	int res = 0;
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
	printf("%d\n", res);
}

int main(){
  int optTipo, optEntrada, optSaida;
  float valor;
  scanf("%d %d %d %f", &optTipo, &optEntrada, &optSaida, &valor);
  switch(optTipo){
    case 1:
      if(optEntrada == 1) celsius(valor, optSaida);
      if(optEntrada == 2) fahren(valor, optSaida);
      if(optEntrada == 3) kelvin(valor, optSaida);
      break;
    case 2:
      if(optEntrada == 1) paraBinario(valor);
      if(optEntrada == 2) paraDecimal(valor);
      break;
  }
  
  return 0;
}
