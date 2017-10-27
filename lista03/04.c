#include<stdio.h>
#include<stdlib.h>

int main(){
	int m1[3][3];
	int mT[3][3];
	for(int i=0; i<3; i++){
		for(int j=0; j<3 ; j++){
			scanf("%d", &m1[i][j]);
		}
	}
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3 ; j++){
			mT[i][j] = m1[j][i];
		}
	}
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3 ; j++){
			printf("%d ", mT[i][j]);
		}
		printf("\n");
	}
}
