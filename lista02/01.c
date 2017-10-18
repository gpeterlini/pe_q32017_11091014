#include<stdio.h>

int ehPar(int n){
  if(n%2 == 0){
    return 0;
  }
  return 1;
}

int main(){
  int n;
  scanf("%d", &n);
  printf("%d", ehPar(n));
  return 0;
}