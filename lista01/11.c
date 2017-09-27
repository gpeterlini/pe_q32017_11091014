#include <stdio.h>
#include <math.h>

int main()
{
	int valor, opt;
	int cont = 0;
	
	scanf("%d %d", &valor, &opt);
	int v[10];
	for(int j=0; j<10; j++){
		v[j] = 0;
	}

	if(opt == 1)
	{
		while(valor!=0)
		{
			v[cont] = valor%2;
			valor = valor/2;
			cont++;
		}
		for(int i=cont-1; i>=0; i--){
			printf("%d", v[i]);
		}
	}
	else
	{
		int res = 0;
		while(valor!=0)
		{
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
	return 0;
}
