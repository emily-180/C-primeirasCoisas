#include <stdio.h>

int main(){
	char nome[40];
	printf("Entre com seu nome: ");
	gets(nome);
	printf("Seja bem vindo, %s",nome);  //%d int %f float, %sc har, %c caracter
	return 0;
}
