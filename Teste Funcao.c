#include <stdio.h>

void desenhaLinha(int);// prototipo da fun��o

int main(){
	int tamanho;
	printf("Digite valor: ");
	scanf("%d", &tamanho);
	desenhaLinha(tamanho);
	return 0;
}

void desenhaLinha (int tam){
	int cont;
	for (cont=1; cont <= tam; cont++)
		printf("-");
	printf("\n");
}
