#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

int numero;
char nome[99][100];
char telefones[100][15];
int i=0;


do
{
    printf("\n=====Comandos Utilizaveis=====");
    printf("\nDigite (1) para Adicionar um numero");
    printf("\nDigite (2)Para Ver Os Numeros Cadastrados!");

    printf("\n\nDigite o numero:");
    scanf("%d",&numero);


    if (numero == 1)
    {
        fflush(stdin);




        printf("\nDigite o nome do %d contato:",i+1);
        gets(nome[i]);

        fflush(stdin);

        printf("\nDigite o numero do %d contato:",i+1);
        gets(telefones[i]);
        
        i++;
    }else if (numero==2)
    {
        printf("\n Os Numeros Cadastrados sao:");

        for (int j = 0; j < i; j++)
        {
           printf("\n%s - %s",nome[j],telefones[j]);
        }
        
    }
    
    
} while (numero !=2);









return 0;
}