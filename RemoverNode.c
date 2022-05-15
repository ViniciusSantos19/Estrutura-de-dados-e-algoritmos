/*
void RemoverLista(Dados **Lista, int Num){
   Dados *Copia = *Lista, *Remover;
  //Se o id a ser removido for o primeiro da lista ponteiro lista = 
  a uma cópia de Lista que aponta para o próximo
  retorno para não precisar fazer o resto da função
   if(Copia  != NULL && Copia->Dados1 == Num){
      *Lista= Copia->proximo;
      free(Copia);
      return;
   }
   Lurka dentro da lista Salvando o antecessor do id procurado 
   exemplo 1,2,3,4 Remover(2) ele vair lurkar até o 2 mas e vai salvar o 1 
   na variavel remover
   while(Copia  != NULL && Copia->Dados1 != Num){
       Remover = Copia;
       Copia = Copia->proximo;
   }
   Se não foi achando o id no lurk termina a função
   if(Copia == NULL){
       return;
   }
   Aponta o ponteiro proximo anterio para o próximo, pulando o que está no meio
   ex 1,2,3,4 remover(3) ele pega o 2 e aponta para o quatro e depois libera 
   a memória do 3
   Remover->proximo = Copia->proximo;
   free(Copia);
   
}
*/