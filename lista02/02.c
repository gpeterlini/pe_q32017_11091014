#include<stdio.h>

double volume(double w, double l, double h){
  return h*l*w;
}

int main(){
  double w, l, h;
  scanf("%lf %lf %lf", &w, &l, &h);
  printf("%.2lf", volume(w, l, h));
  return 0;
}