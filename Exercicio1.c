#include <stdio.h>
#include <stdio.h>


int main (){

char nome [5][100];
int i;
float altura[5];
float peso[5];
int idade[5];
float malt= 0;
float mmalt= 1000;
float mpeso= 0;
float mmpeso= 1000;
int mid= 0;
int mmid=1000;

for ( i = 0; i < 5; i++)
{
    printf("\nDigite o nome da %d pessoa:",i+1);
    gets(nome[i]);

    fflush(stdin);

    printf("Digite o ano de nascimento da %d pessoa:",i+1);
    scanf("%d",&idade[i]);

    printf("Digite a altura da %d pessoa:",i+1);
    scanf("%f",&altura[i]);

    printf("Digite o peso da %d pessoa:",i+1);
    scanf("%f",&peso[i]);

    fflush(stdin);
}


for ( i = 0; i < 5; i++)
{
   printf("\n\nInformacao da %d pessoa",i+1);

    printf("\n\nO Nome da  pessoa e :%s",nome[i]);
    
    idade[i]=2023-idade[i];

    printf("\nA Idade da pessoa e :%d",idade[i]);

    printf("\nA Altura da pessoa e :%.2f",altura[i]);

    printf("\nO Peso da pessoa e :%.1f",peso[i]);

 
}

for ( i = 0; i < 5; i++)
{
    if (altura[i]>malt)
    {
        malt=altura[i];
        
    }
    
    if (altura[i]<mmalt)
    {
        mmalt=altura[i];
        
    }
    
    if (peso[i]>mpeso)
    {
        mpeso=peso[i];
    }
    
    if (peso[i]<mmpeso)
    {
        mmpeso=peso[i];
    }
    
    if (idade[i]>mid)
    {
        mid=idade[i];
    }
     
    if (idade[i]<mmid)
    {
        mmid=idade[i];
    }
    
}


printf("\n\n===Os Maiores e Menores===");
printf("\n\nA Maior altura e :%.2f",malt);
printf("\nA Menor altura e :%.2f",mmalt);

printf("\n\nA Maior peso e :%.1f",mpeso);
printf("\nA Menor peso e :%.1f",mmpeso);

printf("\n\nA Maior Idade e :%d",mid);
printf("\nA Menor Idade e :%d",mmid);


    return 0;
}