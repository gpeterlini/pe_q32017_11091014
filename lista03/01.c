#include<stdio.h>

int contaVogal(char *entrada){
    int i = 0;
    int vogais = 0;
	while(entrada[i] != '\0'){
		if(entrada[i] == 'a'|| entrada[i] == 'e' || entrada[i] == 'i' || entrada[i] == 'o' || entrada[i] == 'u') vogais++;
		i++;
	}
	return vogais;
}

int main ()
{
	char entrada[255];
	fgets (entrada, 255 , stdin);
	int vogais = contaVogal(entrada);
	printf("%d\n", vogais);
	return 0;
}
