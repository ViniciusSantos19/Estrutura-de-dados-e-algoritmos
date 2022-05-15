#include <stdio.h>
#define TAM 10
void Insertion_sort(int vet[]){
    int i, j, aux, aux2;
    for(i = 0; i < TAM - 1; i++){
        aux = i;
        for(j = i + 1; j < TAM; j++){
            if(vet[j] < vet[aux]){
            aux = j;
            }
        }
        aux2 = vet[aux];
        vet[aux] = vet[i];
        vet[i] = aux2;
    }
}
void imprime_vetor(int vet[]){
    int i;
    for(i = 0; i < TAM; i++){
        printf("%d ",vet[i]);
    }
}
int main(){
   int vet[TAM] = {10,2,3,5,6,8,9,4,1,7};
   Insertion_sort(vet);
   imprime_vetor(vet);
   
}
// aux =10 > j =2 