#include <stdio.h>
#include <stdlib.h>


int main (){

int opcao;
char nome[100][100];
float preco[100];
int Quanti[100];
int i=0;
float total;
int vend=0;


do
{
    printf("Digite (1) Para Adicionar Uma Venda\nDigite (2)Para Mostrar a venda:");
    scanf("%d",&opcao);

    if (opcao ==1)
    {
        fflush(stdin);
      
        i++;
       

        printf("\nDigite o nome do %d produto:",i);
        gets(nome[i]);

        fflush(stdin);

        printf("\nDigite o preco do %d:",i);
        scanf("%f",&preco[i]);

        printf("\nDigite a quantidade compradado %d:",i);
        scanf("%d",&Quanti[i]);

        vend++;
       total+= preco[i] * Quanti[i];
    }
    
   if (opcao == 2)
   {
    if (opcao == 2)
{
    i = 1;
    do
    {
        printf("\n\nO Nome do %d produto :%s",i,nome[i]);
        printf("\nO preco do %d produto :%.1f",i,preco[i]);
        printf("\nA Quantidade Vendida do %d produto :%d",i,Quanti[i]);
        i++;
    } while (i <= vend);
}
     
     
     
  
   }
   
} while (opcao !=2);

printf("\n\nO Total de Vendas(preco) e :%.2f",total);
printf("\n\nO Total de Vendas Realizadas :%d",vend);




    return 0;
}