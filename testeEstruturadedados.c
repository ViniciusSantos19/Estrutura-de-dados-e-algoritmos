#include<stdlib.h>
#include <stdio.h>
#include<string.h>
typedef struct DadosAcoes{
char NomePapel[6];
float PrecoCompra;
float QntdPapeis;
struct Acoes *prox;
//struct Acoes anterior*;
}Acoes;

int Qntd_Vendas = 0;
int Qntd_compras = 0;
int Qntd_trasacoes = 0;
Acoes *UltimaOperacao;
void MenuPrincipal();
Acoes* CriaVetor();
void Limpa_tela(){
  system("clear");
}
void MostraStruct();
int main()
{
   int menu;
   int i;
   int sair = 0;
   Acoes *PonteiroInicial;
   Acoes *PonteiroInicial2;
   int TamanhoLista = 0;
   while(!sair){
     MenuPrincipal(&menu);
     Limpa_tela();
     switch(menu){
        case 0:
        printf("O programa foi fechado:\n");
        sair++;
        break;
       //Limpa_tela();
        
        case 1:
        printf("Ofertas de compra:\n");
        MostraStruct(TamanhoLista,PonteiroInicial);
        break;
        //Limpa_tela();
        
        case 2:
        printf("Ofertas de venda:\n");
        MostraStruct(TamanhoLista,PonteiroInicial2);
        break;
        //Limpa_tela();
        
        case 3:
        printf("adicionar oferta de compra:\n");
        printf("Digite o tamanho do vetor:\n");
        scanf("%d",&TamanhoLista);
        PonteiroInicial = CriaVetor(TamanhoLista);
        for(i = 0; i < TamanhoLista; i++){
            printf("Digite o valor da oferta do papel: \n");
            scanf("%f",&PonteiroInicial[i].PrecoCompra);
            printf("Digite a quantida de pepeis que você gostaria de comprar: \n");
            scanf("%f",&PonteiroInicial[i].QntdPapeis);
            getchar();
            printf("Digite o nome do papel: \n");
            fgets(PonteiroInicial[i].NomePapel,6,stdin);
        }
        //free(PonteiroInicial);
        break;
        //Limpa_tela();
        
        case 4:
        printf("Adicionar oferta de título:\n");
        printf("Digite o tamanho do vetor:\n");
        scanf("%d",&TamanhoLista);
        PonteiroInicial2 = CriaVetor(TamanhoLista);
        for(i = 0; i < TamanhoLista; i++){
            printf("Digite o valor da oferta do papel: \n");
            scanf("%f",&PonteiroInicial2[i].PrecoCompra);
            printf("Digite a quantida de pepeis que você gostaria de comprar: \n");
            scanf("%f",&PonteiroInicial2[i].QntdPapeis);
            getchar();
            printf("Digite o nome do papel: \n");
            fgets(PonteiroInicial2[i].NomePapel,6,stdin);
        }
        //free(PonteiroInicial2);
        break;
        //Limpa_tela();
        
        case 5:
        printf("Mostrar ofertas por título:\n");
        break;
        //Limpa_tela();
        
        case 6:
        printf("Mostrar ultima transação realizada:\n");
        //Limpa_tela();
        
        default:
        printf("Opcao inválida:\n");
     }
        //Limpa_tela(); 
   }
}
void MenuPrincipal(int *menu){
    int opcao;
  
  printf("Digite 1 para mostar as ofertas de compra: \n");
  printf("\n");
  printf("Digite 2 para mostrar as ofertas de venda: \n");
  printf("\n");
  printf("Digite 3 para adicionar uma oferta de compra: \n");
  printf("\n");
  printf("Digite 4 para adicoonar uma ofetra de venda: \n");
  printf("\n");
  printf("Digite 5 para mostar oferta por titulo: \n");
  printf("\n");
  printf("Digite 6 para mostar a ultima transação relaizada: \n");
  printf("\n");
  scanf("%d",menu);
}
Acoes* CriaVetor(int tamanho){
    Acoes *V;
    V = (Acoes *) malloc(tamanho * sizeof(Acoes));
    return V;
}

void MostraStruct(int tamanho, Acoes *vetor){
    int i;
    for(i = 0; i < tamanho; i++){
        printf("\n");
        printf("O nome do paple é: %s",vetor[i].NomePapel);
        printf("\n");
        printf("Quantidade de papeis %.2f",vetor[i].QntdPapeis);
        printf("\n");
        printf("Preço dos papeis %.2f",vetor[i].PrecoCompra);
        printf("\n");
    }
}