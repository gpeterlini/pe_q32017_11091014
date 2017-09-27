#include <stdio.h>

int main(){
	double temperatura, result;
	int opt;
	scanf("%lf %d", &temperatura, &opt);
	if(opt == 1){
		result = temperatura + 273.15;
		printf("%.2lf", result);
	}
	else{
		result = temperatura - 273.15;
		printf("%.2lf", result);
	}
}
