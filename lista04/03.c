#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct alunos{
  char nome[100];
  int ra;
  float p1;
  float p2;
  float p3;
  float media;
} alunos;

float calculaMedia(alunos aluno){
  float media;
  media = (aluno.p1 + aluno.p2 + aluno.p3) / 3;
  return media;
}

int main() {
  FILE * leitura;
  FILE * escrita;
  alunos aluno[50];

  leitura = fopen("lista_alunos.txt", "r");
  for(int i=0; i<50; i++){
    fscanf(leitura, "\%s \%d \%f \%f %f", aluno[i].nome, &aluno[i].ra, &aluno[i].p1, &aluno[i].p2 , &aluno[i].p3);
    aluno[i].media = calculaMedia(aluno[i]);
  }
  fclose(leitura);
  escrita = fopen("media_alunos.txt", "w");
  for(int i=0; i<50; i++){
    fprintf(escrita, "\%s \%d %.2f\n", aluno[i].nome , aluno[i].ra, aluno[i].media);
  }
  fclose(escrita);
  return 0;
}
