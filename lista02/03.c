#include<stdio.h>
#include<math.h>

double pi(){
  double a1, pi;
  double a = 1.0;
  double b = 1.0/(sqrt(2.0));
  double t = 1.0/4.0;
  double p = 1.0;
  for(int i=0; i<10; i++){
    a1 = (a+b)/2.0;
    b = sqrt(a*b);
    t = t - p*pow((a-a1),2.0);
    p = 2.0*p;
    a = a1;
  }
  pi = pow((a+b),2.0)/(4.0*t);
  return pi;
}

int main(){
  printf("%.20lf", pi());
  return 0;
}