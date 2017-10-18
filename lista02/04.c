#include<stdio.h>
#include<math.h>

float soma(float a, float b){
  return a+b;
}

float subt(float a, float b){
  return a-b;
}

float mult(float a, float b){
  return a*b;
}

float divs(float a, float b){
  return a/b;
}

float pot(float a, float b){
  return pow(a,b);
}

int main(){
  int opt;
  float a, b, r;
  scanf("%d %f %f", &opt, &a, &b);
  switch(opt){
    case 1:
    r = soma(a,b);
    break;
    case 2:
    r = subt(a,b);
    break;
    case 3:
    r = mult(a,b);
    break;
    case 4:
    r = divs(a,b);
    break;
    case 5:
    r = pot(a,b);
    break;
  }
  printf("%f", r);
  return 0;
}