#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
 int tentativa, computador, ct=0;
  for(ct=0; ct<=3; ct++){  
  srand(time(NULL)); // semente do número aleatório
  computador = rand() % 3;
  printf("\nescolha uma opção: 1.PEDRA 2.PAPEL 3.TESOURA\n");
  scanf("%d", &tentativa)
  }
}