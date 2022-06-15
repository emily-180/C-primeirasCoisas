#include <stdio.h>
int ehPrimo(int num){
	int res, cont, primo = 1;
	if(num==1 || num== -1)
		return 0;
	for(cont=2; cont < num; cont++){
		if(num%cont == 0){
			primo = 0;
			break;
		}
	}
	return primo;
}
//----------------------------------------------------
int quantPrimo(int n){
	int cont, qtd=0;
	for(cont=1; cont<=n; cont++)
		if(ehPrimo(cont) == 1)
			qtd++;
	return qtd;
}
//----------------------------------------------------
int main(){
	int res, num, quant, cont, quantP=0;
	printf("Digite uma certa quantidade: ");
	scanf("%d", &quant);
	res = quantPrimo(quant);
	printf("A quantidade de números primos:%d ", res);
	return 0;
}
