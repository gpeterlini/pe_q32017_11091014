#include <stdio.h>

int main(){
	int x;
	int fatorial = 1;
	scanf("%d", &x);

	for(int i=x; i>0; i--){
		fatorial = fatorial*i;
	}
	printf("%d\n", fatorial);
}
