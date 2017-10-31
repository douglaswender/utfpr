#include <stdio.h>

    int main(){

    int vet[100];
    int i;
    
    for(i=0; i<100; i++){
        vet[i]=i+1;
    }

    for(i=0; i<100; i++){
        printf("vet[%d] = %d \n ",i, vet[i]);
    }


}

