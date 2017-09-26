#include <stdio.h>

int main(){
	int i, temp;
	int x = 1;
	int ant = 0;
	scanf("%d", &i);
	printf("0,");

	for(int j=0; j<i; j++){
		printf(" %d,", x);
		temp = x;
		x = x+ant;
		ant = temp;
	}
}
