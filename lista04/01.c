#include<stdio.h>
#include<math.h>

typedef struct coordenadas{
  float x;
  float y;
  float z;
} coordenadas;

float distanciaPontos(coordenadas p1, coordenadas p2){
  float distancia = 0;
  distancia += pow(p2.x-p1.x, 2);
  distancia += pow(p2.y-p1.y, 2);
  distancia += pow(p2.z-p1.z, 2);
  distancia = sqrt(distancia);
  return distancia;
}

int main() {
  coordenadas p1, p2;
  scanf("%f %f %f", &(p1.x), &(p1.y), &(p1.z));
  scanf("%f %f %f", &(p2.x), &(p2.y), &(p2.z));

  float distancia = distanciaPontos(p1,p2);
  printf("%.2f\n", distancia);
  return 0;
}
