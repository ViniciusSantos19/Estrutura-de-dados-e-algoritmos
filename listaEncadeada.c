#include <stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Dados{
   int Dados1;
   int Dados2;
   char Nome[10];
   struct Dados *proximo;
}Dados;
int TamanhoLista();
void MenuPrincipal();
void Limpa_tela();
void MostraLista();
void BuscaLista();
Dados* CriaLista();
void InserirListaFim();
void RemoverLista();
int main()
{
   Dados *Numero;
   Dados *Numero02;
   Dados *RemoverAux;
   int Opcao;
   int tamanho;
   int Sair = 0;
   int Busca, Remover;
   int Num1, Num2;
   char NomeTemp[10];
   Numero = CriaLista();
   Numero02 = CriaLista();
   while(!Sair){

    MenuPrincipal(&Opcao);
    Limpa_tela();   
       switch(Opcao){
      case 0:
        printf("Programa foi fechado");
        Sair = 1;
         break;
      case 1:
           printf("Tamanho atual lista 1: %d \n",TamanhoLista(Numero));
           printf("Digite o Dado1: \n");
           scanf("%d",&Num1);
           printf("Digite o Dado2: \n");
           scanf("%d",&Num2);
           getchar();
           printf("Digite o nome: \n");
           fgets(NomeTemp,10,stdin);
    
            InserirListaFim(&Numero, Num1, Num2, NomeTemp);
         
        break;
      case 2:
           printf("Tamanho atual lista 2: %d \n",TamanhoLista(Numero02));
          printf("Digite o Dado1: \n");
           scanf("%d",&Num1);
           printf("Digite o Dado2: \n");
           scanf("%d",&Num2);
           getchar();
           printf("Digite o nome: \n");
           fgets(NomeTemp,10,stdin);
         
             InserirListaFim(&Numero02, Num1, Num2, NomeTemp);
         
         break;;
      case 3:
         MostraLista(Numero);
         break;
      case 4:
         MostraLista(Numero02);
         break;
      case 5:
         printf("Digite o número do código 1 que você gostaria de pesquisar: \n");
         scanf("%d",&Busca);
         BuscaLista(Numero, Busca);
         break;
      case 6:
         printf("Digite o número do código 1 que você gostaria de pesquisar: \n");
         scanf("%d",&Busca);
         BuscaLista(Numero02, Busca); 
         break;
      case 7:
         printf("Digite o id do nó que você gostaria de remover  Lista 1: \n");
         scanf("%d",&Remover);
         RemoverLista(&Numero, Remover);
         //free(RemoverAux);
         break;
      case 8:
         printf("Digite o id do nó que você gostaria de remover  Lista 2: \n");
         scanf("%d",&Remover);
         RemoverLista(&Numero02, Remover);
         //free(RemoverAux);
         break;
       }
   }
   
}
void MenuPrincipal(int *Menu){
  
  //printf("\n**************************************\n");
  printf("Digite |0| para fechar o programa: \n");
  printf("\n");
  printf("Digite |1| para adicoonar um nó à lista encadeada: \n");
  printf("\n");
  printf("Digite |2| para adicoonar um nó em outra lista encadeada: \n");
  printf("\n");
  printf("Digite |3| para ver a lista 1: \n");
  printf("\n");
  printf("Digite |4| para ver a lista 2: \n");
  printf("\n");
  printf("Digite |5| para buscar no vetor 1: \n");
  printf("\n");
  printf("Digite |6| para buscar no vetor 2: \n");
  printf("\n");
  printf("Digite |7| para apagar um nó no vetor 1: \n");
  printf("\n");
  printf("Digite |8| para apagar um nó no vetor 2: \n");
  printf("\n**************************************\n");
  printf("\n");
  scanf("%d",Menu);
  
}

void Limpa_tela(){
  system("clear");
}

Dados *CriaLista(){
   return NULL;
}

void MostraLista(Dados *Lista){
   Dados *Copia;
   for( Copia = Lista; Copia != NULL; Copia = Copia->proximo){
      printf("\n**************************************\n");
      printf("Número aleatorio %d",Copia->Dados1);
      printf("\n");
      printf("Número aleatorio %d",Copia->Dados2);
      printf("\n");
      printf("O nome é: %s",Copia->Nome);
      printf("\n");
      printf("\n**************************************\n");
   }
}

void BuscaLista(Dados *Lista, int busca){
    Dados *Copia;
   for( Copia = Lista; Copia != NULL; Copia = Copia->proximo){
      if(busca == Copia->Dados1){
         printf("\n**************************************\n");
      printf("Número aleatorio %d",Copia->Dados1);
      printf("\n");
      printf("Número aleatorio %d",Copia->Dados2);
      printf("\n");
      printf("O nome é: %s",Copia->Nome);
      printf("\n");
      printf("\n**************************************\n");
      }
      /*else{
         printf("\n**************************************\n");
         printf("Não está na lista");
         printf("\n**************************************\n");
      */}
   }

int TamanhoLista(Dados *Lista){
   Dados *Copia;
   int Tamamnho = 0;
   for( Copia = Lista; Copia != NULL; Copia = Copia->proximo){
      Tamamnho++;
   }
   return Tamamnho;
}

void InserirListaFim(Dados **Lista, int Dados1, int Dados2, char Nome[]){
   Dados *Copia= *Lista;
   Dados *Novo =  (Dados *)  malloc(sizeof(Dados));
   Novo->Dados1 = Dados1;
   Novo->Dados2 = Dados2;
   strcpy(Novo->Nome,Nome);
   Novo->proximo = NULL;
   
   
   if(*Lista == NULL){
    *Lista = Novo;  
   }
   else{
     Copia = *Lista;
     while(Copia->proximo){
        Copia = Copia->proximo; 
     }
     
     Copia->proximo = Novo;
    
   }
   
   
}
void RemoverLista(Dados **Lista, int Num){
   Dados *Copia = *Lista, *Remover;
   if(Copia  != NULL && Copia->Dados1 == Num){
      *Lista= Copia->proximo;
      free(Copia);
      return;
   }
   while(Copia  != NULL && Copia->Dados1 != Num){
       Remover = Copia;
       Copia = Copia->proximo;
   }
   if(Copia == NULL){
       return;
   }
   Remover->proximo = Copia->proximo;
   free(Copia);
   
}