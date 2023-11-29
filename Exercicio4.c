#include <stdio.h>
#include <stdlib.h>

int main (){

int numero[5];
int i=0;
int soma=0;
float media=0;
int par=0;
int impar=0;
float medip=0;
int menor=9999;
int maior=0;
int neg=0;

for ( i = 0; i < 5; i++)
{
    printf("Digite o %d numero:",i+1);
    scanf("%d",&numero[i]);

    soma+=numero[i];

 if (numero[i]%2 ==0)
    {
    par++;
    medip=(float)par/i;

    }else{
        impar++;
    }
    
if (numero[i]> maior)
{
    maior=numero[i];
}

if (numero[i]< menor)
 {
     menor=numero[i];
 }
     
  
 if (numero[i]<neg)
{
    neg++;
 }
       
    
}




  media= (float)soma/i;
printf("\nA Media e :%.1f",media);
printf("\nA Quantidade de par e:%d",par);
printf("\nA Media de par e:%.1f",medip);
printf("\nA Quantidade de impar e:%d",impar);
printf("\nO Maior e:%d",maior);
printf("\nO Menor e :%d",menor);
printf("\nA Quantidade de numeros negativos e :%d",neg);


    return 0;
}