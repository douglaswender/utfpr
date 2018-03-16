#include<stdio.h>
#include<string.h>

void func (char*vet){
    int i, j, k;
    char aux;
    for(i=0; vet[i]!='\0'; i++){
        if((vet[i]>=97)&&(vet[i]<=122)){
            vet[i]=vet[i]+2;
        }else if((vet[i]>=65)&&(vet[i]<=90)){
            vet[i]=vet[i]+3;
        }
    }
    /*for(i=0; vet[i]!='\0'; i++){
        printf("%c", vet[i]);
    }
    printf("\n");
*/
    k=i;
    for(j=0; j<k/2; j++){
        aux = vet[j];
        vet[j]=vet[i-1];
        vet[i-1]=aux;
        i--;
    }
}

int main (){
    int tam = 8;
    char palavra[13] = "Algoritmos 2";

    func(palavra);

    printf("%s", palavra);

    return 0;
}




