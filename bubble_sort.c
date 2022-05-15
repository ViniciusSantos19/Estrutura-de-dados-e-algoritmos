#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 10

void Bubble_sort(int vet[]){
    int i, j;
    int aux;
    for(i = 0; i < TAM-1 ; i++){
        for(j = 0; j < TAM-1 ; j++){
            if(vet[j] > vet[j + 1]){
             aux = vet[j];
             vet[j] = vet[j + 1];
             vet[j + 1] = aux;  
            }
        }
    }
}
void Imprime_vetor(int vet[]){
    int i;
    for(i = 0; i < TAM; i++){
        printf("%d ",vet[i]);
    }
}
int main(){
  int vet[10] = {3, 2, 5, 7, 8, 9, 1, 4, 6, 10};
  Bubble_sort(vet);
  Imprime_vetor(vet); 
}