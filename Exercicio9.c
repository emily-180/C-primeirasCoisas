#include <stdio.h>
#include <math.h>

int main(){
	float base, exp, res;
	printf("Base: ");
	scanf("%f", &base);
	printf("Expoente: ");
	scanf("%f", &exp);
	res = pow(base,exp);
	printf("Resultado: %.2f", res);
}
