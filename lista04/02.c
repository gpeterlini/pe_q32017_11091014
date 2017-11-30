#include<stdio.h>

typedef struct tempo{
  int minutos;
  int segundos;
  int centesimos;
} tempo;

tempo difTempo (tempo t1, tempo t2){
  tempo diferenca;
  int temp;
  temp = t2.centesimos + (t2.segundos*1000) + (t2.minutos*60000);
  temp -= (t1.centesimos + (t1.segundos*1000) + (t1.minutos*60000));
  diferenca.minutos = temp/60000;
  temp = temp%60000;
  diferenca.segundos = temp/1000;
  temp = temp%1000;
  diferenca.centesimos = temp%100;
  return diferenca;
}

int main() {
  tempo t1, t2;
  scanf("%dm %ds %d", &(t1.minutos), &(t1.segundos), &(t1.centesimos));
  scanf("%dm %ds %d", &(t2.minutos), &(t2.segundos), &(t2.centesimos));

  tempo diferenca = difTempo(t1,t2);

  printf("%dm %ds %d\n", diferenca.minutos, diferenca.segundos, diferenca.centesimos);
  return 0;
}
