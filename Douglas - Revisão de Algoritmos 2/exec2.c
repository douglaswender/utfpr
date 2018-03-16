#include<stdio.h>

double func(){
    double n;
    do{
        printf("Informe um valor:\n");
        scanf("%lf", &n);
    }while(n<1);
    return n;
}
int main(){
    double n;

    n = func();

    printf("O valor maior que zero digitado e: %.1lf", n);

    return 0;
}



