#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 10
void imprime_vetor(int fila[TAM], int tamanho){
    int i; 
    for(i = 0; i < TAM; i++){
        printf("%d -",fila[i]);
    }
}
void construtor_fila(int *tras, int *frente){
    *frente = 0;
    *tras = -1;
}
void enfileirar(int fila[TAM], int valor, int *tras){
   if(*tras == TAM - 1){
       printf("A fila esta cheia!");
   }else{
    *tras = *tras + 1;
    fila[*tras] = valor;
   }
}
int tamanho(int tras, int frente){
    return (tras - frente) + 1;
}
int main(){
    int fila[TAM] = {0};
    int frente;
    int tras;
    int valor;
    printf("Digite o valor que você gostaria de adicionar na fila; \n");
    scanf("%d",&valor);
    construtor_fila(&frente, &tras);
    enfileirar(fila, valor, &tras);
    imprime_vetor(fila, tamanho(tras,frente));
}