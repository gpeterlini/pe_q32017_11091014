#include <stdio.h>

void divisiveis(int n){
	for(int i=100;i<=n;i++){
		if(i%2==0){
		    printf("%d, ", i);
		}
	}
}

int main(){
	int n;
	scanf("%d", &n);
	divisiveis(n);
	printf("\n");
}
