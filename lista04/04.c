#include<stdio.h>
#include<time.h>
#include<limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

int f1(ulint x)
{
  ulint num = 1;
  while(num<x){
    num << 1;
    if(num=x){
        return 1;
      }
    }
    return 0;
}

int f2(ulint x)
{
  ulint num = 1;
  while(num<x){
    num = num * 2;
    if(num=x){
      return 1;
    }
  }
  return 0;
}

int main (void)
{
  clock_t tempo_init, tempo_fim;
  double tempo_gasto;


  tempo_init = clock();
  for(int i =0;i<BIGNUM; i++)
  {
    f2(i);
  }
  tempo_fim = clock();
  tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
  printf("Tempo gasto na versao normal :  %lf\n" , tempo_gasto);

  tempo_init = clock();
  for (int i=0; i<BIGNUM; i++)
  {
    f1(i);
  }
  tempo_fim = clock();
  tempo_gasto = (double)(tempo_fim - tempo_init)/CLOCKS_PER_SEC;
  printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);
  return 0;
}
