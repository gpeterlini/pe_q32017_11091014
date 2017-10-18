#include <stdio.h>

#define salDiretor 10000
#define salGerente 8000
#define salEngenheiro 6000
#define salTecnico 4000
#define salOperador 2000

int descontos(int sal, int faltas){
	int totalDC = 0;
	totalDC = (sal/20)*faltas;
	return totalDC;
}

double acrescimos(int sal, int hrsExtra){
	double totalAC = 0.0;
	totalAC = ((sal/20.0)/8.0)*hrsExtra + 40.0*hrsExtra;
}

double salarioTotal(double sal , double ac, double dc){
	return sal+ac-dc;
}



int imprimeSalario(int id, int faltas, int hrsExtra){
	int dc;
	double ac, total;
	switch(id){
	case 1:
		printf("cargo: Diretor\n");
		printf("# de faltas: %d\n", faltas);
		printf("# horas-extra: %d\n", hrsExtra);
		dc = descontos(salDiretor, faltas);
		printf("descontos: %d\n", dc);
		ac = acrescimos(salDiretor, hrsExtra);
		printf("acrescimos: %.2lf\n", ac);
		total = salarioTotal(salDiretor, ac, dc);
		printf("salario: %.2lf\n", total);
		break;
	case 2:
		printf("cargo: Gerente\n");
		printf("# de faltas: %d\n", faltas);
		printf("# horas-extra: %d\n", hrsExtra);
		dc = descontos(salGerente, faltas);
		printf("descontos: %d\n", dc);
		ac = acrescimos(salGerente, hrsExtra);
		printf("acrescimos: %.2lf\n", ac);
		total = salarioTotal(salGerente, ac, dc);
		printf("salario: %.2lf\n", total);
		break;
	case 3:
		printf("cargo: Engenheiro\n");
		printf("# de faltas: %d\n", faltas);
		printf("# horas-extra: %d\n", hrsExtra);
		dc = descontos(salEngenheiro, faltas);
		printf("descontos: %d\n", dc);
		ac = acrescimos(salEngenheiro, hrsExtra);
		printf("acrescimos: %.2lf\n", ac);
		total = salarioTotal(salEngenheiro, ac, dc);
		printf("salario: %.2lf\n", total);
		break;
	case 4:
		printf("cargo: Tecnico\n");
		printf("# de faltas: %d\n", faltas);
		printf("# horas-extra: %d\n", hrsExtra);
		dc = descontos(salTecnico, faltas);
		printf("descontos: %d\n", dc);
		ac = acrescimos(salTecnico, hrsExtra);
		printf("acrescimos: %.2lf\n", ac);
		total = salarioTotal(salTecnico, ac, dc);
		printf("salario: %.2lf\n", total);
		break;
	case 5:
		printf("cargo: Operador\n");
		printf("# de faltas: %d\n", faltas);
		printf("# horas-extra: %d\n", hrsExtra);
		dc = descontos(salOperador, faltas);
		printf("descontos: %d\n", dc);
		ac = acrescimos(salOperador, hrsExtra);
		printf("acrescimos: %.2lf\n", ac);
		total = salarioTotal(salOperador, ac, dc);
		printf("salario: %.2lf\n", total);
		break;
	}
}


 int main(){
 	int id, faltas, hrsExtra;
	scanf("%d %d %d", &id, &faltas, &hrsExtra);
	imprimeSalario(id, faltas, hrsExtra);	
 }
