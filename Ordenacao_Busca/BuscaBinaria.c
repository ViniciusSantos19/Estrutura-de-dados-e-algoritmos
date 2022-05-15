#include<stdio.h>
#include<stdlib.h>
int BuscaBinaria(int Vetor[], int Busca, int Tamanho){
    int Esquerda = 0;
    int Direita = Tamanho - 1 ;
    int Meio;
    while(Esquerda <= Direita){
        Meio = (Esquerda + Direita)/2;
        if(Vetor[Meio] == Busca){
            return Meio;
        }
        if(Busca > Vetor[Meio]){
            Esquerda = Meio + 1;
        }
        else{
            Direita = Meio - 1;
        }
    }
    return -1;
}
int main(){
    int Vetor[10] = {0,1,2,3,4,5,6,7,8,9};
    int Busca;
    int Achar;
    int Tamanho;
    Tamanho = sizeof(Vetor) / sizeof(int);
    printf("Digite qual valor você deseja buscar no vetor: \n");
    scanf("%d",&Busca);
    Achar = BuscaBinaria(Vetor,Busca,Tamanho);
    if(Achar == -1){
        printf("O número não está no vetor: \n");
    }
    else{
        printf("O número está na posição %d",Achar);
    }
}