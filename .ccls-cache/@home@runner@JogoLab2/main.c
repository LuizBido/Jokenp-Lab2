#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
 int tentativa, computador, jogador=0, vitoria_computador=0, op=1;
  while(op == 1){
  srand(time(NULL)); // semente do número aleatório
  computador = 1 + rand() % 2; // faixa de numeros aleatórios de 1 até 3
  printf("\nescolha uma opção: 1.PEDRA 2.PAPEL 3.TESOURA\n");
  scanf("%d", &tentativa);
  while(tentativa<0 || tentativa>3){
  printf("jogada inválida, jogue novamente:\n");
  scanf("%d", &tentativa);
  }
  if(computador == 1 && tentativa == 1){
    printf("ocorreu um empate\n");
    printf("\njogar novamente?\n1.SIM 2.NÃO\n");
    scanf("%d", &op);
    while(op<0 || op>2){
    printf("opção inválida, tente novamente:\n");
    scanf("%d", &op);
    }
  }
  else if(computador == 2 && tentativa == 2){
    printf("ocorreu um empate\n");
    printf("\njogar novamente?\n1.SIM 2.NÃO\n");
    scanf("%d", &op);
    while(op<0 || op>2){
    printf("opção inválida, tente novamente:\n");
    scanf("%d", &op);
    }
  }
  else if(computador == 3 && tentativa == 3){
    printf("ocorreu um empate\n");
    printf("\njogar novamente?\n1.SIM 2.NÃO\n");
    scanf("%d", &op);
    while(op<0 || op>2){
    printf("opção inválida, tente novamente:\n");
    scanf("%d", &op);
    }
  }
  else if(computador == 1 && tentativa == 2){
    printf("computador joga pedra");
    printf("\nvocê venceu, papel cobre pedra\n");
    jogador++;
    printf("\njogar novamente?\n1.SIM 2.NÃO\n");
    scanf("%d", &op);
    while(op<0 || op>2){
    printf("opção inválida, tente novamente:\n");
    scanf("%d", &op);
    }
  }
  else if(computador == 2 && tentativa == 3){
    printf("computador joga papel");
    printf("\nvocê venceu, tesoura corta papel\n");
    jogador++;
    printf("\njogar novamente?\n1.SIM 2.NÃO\n");
    scanf("%d", &op);
    while(op<0 || op>2){
    printf("opção inválida, tente novamente:\n");
    scanf("%d", &op);
    }
  }
  else if(computador == 3 && tentativa == 1){
    printf("computador joga tesoura");
    printf("\nvocê venceu, pedra amassa tesoura\n");
    jogador++;
    printf("\njogar novamente?\n1.SIM 2.NÃO\n");
    scanf("%d", &op);
    while(op<0 || op>2){
    printf("opção inválida, tente novamente:\n");
    scanf("%d", &op);
    }
}
  else if(computador == 1 && tentativa == 3){
    printf("computador joga pedra");
    printf("\nvocê perdeu, pedra amassa tesoura\n");
    vitoria_computador++;
    printf("\njogar novamente?\n1.SIM 2.NÃO\n");
    scanf("%d", &op);
    while(op<0 || op>2){
    printf("opção inválida, tente novamente:\n");
    scanf("%d", &op);
    }
  }
  else if(computador == 2 && tentativa == 1){
    printf("computador joga papel");
    printf("\nvocê perdeu, papel cobre pedra\n");
    vitoria_computador++;
    printf("\njogar novamente?\n1.SIM 2.NÃO\n");
    scanf("%d", &op);
    while(op<0 || op>2){
    printf("opção inválida, tente novamente:\n");
    scanf("%d", &op);
    }
  }
  else if(computador == 3 && tentativa == 2){
    printf("computador joga tesoura");
    printf("\nvocê perdeu, tesoura corta papel\n");
    vitoria_computador++;
    printf("\njogar novamente?\n1.SIM 2.NÃO\n");
    scanf("%d", &op);
    while(op<0 || op>2){
    printf("opção inválida, tente novamente:\n");
    scanf("%d", &op);
    }  
  }
}
printf("\ntotal de vitórias do jogador: %d", jogador);
printf("\ntotal de vitórias do computador %d", vitoria_computador++);
}