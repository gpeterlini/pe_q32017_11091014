#include<stdio.h>

int potencia(int x,int y){
	if(y==0) { return 1; }
	y--;
	return x*potencia(x,y);
}

int main(){
	int x, y, res;
	scanf("%d %d", &x, &y);
	res = potencia(x,y);
	printf("%d\n", res);
}
