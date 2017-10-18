#include<stdio.h>

int fatorial(int n){
  if(n==1){
    return 1;
  }
  return n*fatorial(n-1);
}

float coefBinomial(float n, float k){
  float res;
  res = fatorial(n);
  res = res / fatorial(k);
  res = res / fatorial(n-k);
  return res;
}

int main(){
  int n, k;
  scanf("%d %d", &n, &k);
  printf("%.2f", coefBinomial(n,k));
  return 0;
}