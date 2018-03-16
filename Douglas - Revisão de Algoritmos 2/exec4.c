#include<stdio.h>
#include<stdlib.h>

typedef struct Date{
    int dia, mes, ano;
}date;

typedef struct Endereco{
    char rua[30], bairro[30], cep[9], cidade[30], estado[2];
}endereco;

typedef struct Usuario{
    char nome[30];
    date dat;
    endereco end;
}user;

user* func(int valor){
	user *u;
	u = (user*) malloc(sizeof(user)*valor);
	
	return u;
	
}

int main(){
	
	user *user;
	int n;
	
	printf("Por favor informe o tamanho:\n");
	
	user = func(scanf("%d", &n));
	
	printf("%x", user);
	
	return 0;
}
