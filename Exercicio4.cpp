#include <stdio.h>

int main(){
	float celsius, farh;
	printf("Digite o graus Celsuis: ");
	scanf("%f", &celsius);
	farh = (9* celsius +160)/5;
	printf("A tempeatura convertida: %.2f", farh);
}
