#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 10
void imprime_vetor(int pilha[TAM]){
    int i; 
    for(i = 0; i < TAM; i++){
        printf("%d -",pilha[i]);
    }
}
int main(){
  int pilha[TAM] = {0};
  int topo = -1;
  int valor;
 
  if(topo == TAM-1){
      printf("A lista está cheia!");
  }
  do{
      topo = topo + 1;
      printf("Digite um número:\n");
      scanf("%d",&valor);
      pilha[topo] = valor;
  } while(topo < TAM -1);

  imprime_vetor(pilha);
}