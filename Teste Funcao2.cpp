#include <stdio.h>

int ehPar(int num){
	if(num%2==0)
		return 1;
	else
		return 0;
}

int main(){
	int numero, quant, cont, soma=0;
	printf("Digite a quantidade: ");
	scanf("%d", &quant);
	for(cont=1;cont<=quant;cont++){
		printf("Valor %d: ", cont);
		scanf("%d", &numero);
		if(ehPar(num)==1)
			soma = soma + num;
	}
	printf("Soma dos pares: %d\n", soma);
	return 0;
}
