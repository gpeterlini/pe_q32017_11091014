#include <stdio.h>

int main(){
	double temperatura, result;
	int opt;
	scanf("%lf %d", &temperatura, &opt);
	if(opt == 1){
		result = ((temperatura*1.8)+32);
		printf("%.1lf", result);
	}
	else{
		result = ((temperatura-32)/1.8);
		printf("%.1lf", result);
	}
}
