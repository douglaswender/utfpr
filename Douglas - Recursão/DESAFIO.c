#include<stdio.h>

int numero;
int aux=0;
int k=0;

int verifica(int n){
    if(n==0)
      return 0;
     else
    {
     if(aux==(n %10))
     {
        k++;
     }
     n=n / 10;
     return verifica(n);
    }
return 0;
 }
int main(){
   printf("Digite um numero:");
   scanf("%d",&numero);
   printf("Digite o numero a ser verificado:");
   scanf("%d",&aux);
   verifica(numero);
   printf("Vezes de numeros repetidos %d",k);
   return 0;
}
