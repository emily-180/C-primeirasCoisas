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

int main(){
	int res, cont;
	for(cont = 1; cont <= 1000; cont++){
		res = ehPrimo(cont);
		if(res == 1)
			printf("%d\n",cont);
	}
}
