#include <stdio.h>
#include <locale.h>
int main(){
	float media, n1, n2;
	printf("Nota 1: ");
	scanf("%f", &n1);
	printf("Nota 2: ");
	scanf("%f", &n2);
	media = (n1 + n2) / 2;
	if(media >= 6)
		printf("Aprovado!! M�dia: %f", media);
	else(media <= 6 and media >= 4)
		printf("Recupera��o!! M�dia: %f", media);
	else
		printf("Reprovado!! M�dia: %f", media);
}
