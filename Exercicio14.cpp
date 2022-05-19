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
		printf("Aprovado!! Média: %f", media);
	else(media <= 6 and media >= 4)
		printf("Recuperação!! Média: %f", media);
	else
		printf("Reprovado!! Média: %f", media);
}
