#include<stdio.h>
#include<math.h>
void bhaskara(double a, double b, double c){
  double delta, x1, x2;
  delta = pow(b,2) - 4*a*c;
  if(delta<0){
    delta = delta * (-1);
    delta = sqrt(delta);
    delta = delta * (-1);
  }
  else{
    delta = sqrt(delta);
  }
  x1 = (-b + delta)/(2*a);
  x2 = (-b - delta)/(2*a);
  printf("%.3lf %.3lf", x1, x2);
}


int main(){
  double a, b, c;
  scanf("%lf %lf %lf", &a, &b, &c);
  bhaskara(a,b,c);
  return 0;
}