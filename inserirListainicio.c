
//Insere no começo da lista. Ou seja o primeiro a ser adcionado será passa pra frete
//Quado outro for adiconado ex add 1, dps add 2. a lista vai ficar 2 , 1 e por ai vai
/*Dados* InserirLista(Dados *Lista, int Dados1, int Dados2, char Nome[]){
   Dados *Novo =  (Dados *)  malloc(sizeof(Dados));
   Novo->Dados1 = Dados1;
   Novo->Dados2 = Dados2;
   strcpy(Novo->Nome,Nome);
   Novo->proximo = Lista;
   return Novo;
}
Insere no final da lista. Ou seja o primeiro a ser adionado será  primeiro da lista,
 e por ai vai
void InsereListaFim(Dados **Lista, int Dados1, int Dados2, char Nome[]){
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