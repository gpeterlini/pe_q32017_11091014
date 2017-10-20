#include<stdio.h>

int pascal(int n, int k){
  if(n==k) return 1;
  if(k==0) return 1;
  if(k==1) return n;
  
  return pascal(n-1,k-1)+pascal(n-1,k);
}

int main(){
  int n,k,t;
  scanf("%d %d", &n, &k);
  t = pascal(n,k);
  printf("%d", t);
  return 0;
}