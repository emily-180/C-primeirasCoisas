#include <stdio.h>
double pesoIdeal(double alt, char sexo){
	double resultado;
	if(sexo == "F")
		return resultado = 62.1 * alt - 44.7;
	else if (sexo == "M")
		return resultado =  72.7 * alt  - 58;	
}
//----------------------------------------------------
int main(){
	double res;
	double alt;
	char sexo[1];
	printf("Digite o sexo (F/M): ");
	//gets(sexo);
	scanf("%s", &sexo);
	printf("Digite a altura: ");
	scanf("%lf", &alt);
    res = pesoIdeal(alt, sexo);
	printf("\nPeso ideal: %.2lf", res);
}
