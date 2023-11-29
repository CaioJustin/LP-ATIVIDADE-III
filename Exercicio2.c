#include <stdio.h>
#include <stdlib.h>


int main (){

char nome[5][100];
int idade[5];
float nota[5][3];
int i=0;
int j=0;
float media[5];

 
 for ( i = 0; i < 5; i++)
 {
    float soma = 0;
    printf("\nDigite o nome do %d aluno:",i+1);
    gets(nome[i]);

    fflush(stdin);

    printf("\nDigite o ano de nascimento de cada aluno:");
    scanf("%d",&idade[i]);

    idade[i]=2023-idade[i];

    for ( j = 0; j < 3; j++)
    {
        fflush(stdin);

        printf("\nDigite a %d nota:",j+1);
        scanf("%f",&nota[i][j]);

        soma+=nota[i][j]; 

    }
    
     media[i]= soma/j;

     fflush(stdin);

 }
 

for ( i = 0; i < 5; i++)
{   
    printf("\n\n====Informacaoes do %d aluno :",i+1);
    printf("\nO Nome do aluno e :%s",nome[i]);
    printf("\nA Idade e:%d",idade[i]);
      
    for ( j = 0; j < 3; j++)
    {
        printf("\nA %d nota e :%.1f",j+1,nota[i][j]);
    }
    
     if (media[i] >=7.0)
    {
        printf("\nAprovado!");
    }else if (media[i] >=5.0 && media[i]<7.0)
    {
        printf("\nRecuperacao");
    }else{
        printf("\nReprovado");
    }
}




    return 0;
}