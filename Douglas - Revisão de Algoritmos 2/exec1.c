#include<stdio.h>

int func (int valor, int*vet, int tam){
    int qtd = 0, i;
    for(i=0; i<tam; i++){
        if(vet[i]==valor){
            qtd++;
        }
    }
    return qtd;

}

int main (){
    int i, tam = 10, valor, r;
    int vet[tam];
    for(i=0; i<10; i++){
        scanf("%d", &vet[i]);
    }
    printf("Informe o número que deseja pesquisar\n");
    scanf("%d", &valor);

    r = func(valor, vet, tam);

    printf("O valor %d aparece %d vezes no vetor!!!\n", valor, r);

    return 0;
}



