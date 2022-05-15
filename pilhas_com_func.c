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
void pushin_p(int pilha[], int valor, int *topo){
     if(*topo == TAM-1){
      printf("A lista está cheia!");
  }else{
      *topo = *topo + 1;
      pilha[*topo] = valor + 1;
  } 
}
void pop_pilha(int pilha[TAM], int *topo){
    if(*topo == -1){
        printf("A pilha está vazia!");
    }else{
        pilha[*topo] = 0;
        *topo =  *topo -1;
    }
}
int main(){
    int pilha[TAM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int topo = -1;
    int valor;
    printf("Digite um número: \n");
    scanf("%d",&valor);
    //imprime_vetor(pilha);
    printf("\n");
    pushin_p(pilha, valor, &topo);
    imprime_vetor(pilha);
    printf("\n");
    pop_pilha(pilha, &topo);
    imprime_vetor(pilha);
}