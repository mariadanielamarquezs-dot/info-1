#include <stdio.h>

int main(void) {
	float peso;
	float altura;
	do{ 
	printf("Ingrese su peso en kg: ");
	scanf("%f", &peso);
		if (peso<=0) {
			printf("Error, ingrese un numero valido.");
		}
	} while (nota<=0);
	do {
	printf("Ingrese su altura en metros: ");
	scanf("%f", &altura);
		if (altura<=0) {
			printf("Error, ingrese un numero valido.");
		}
	} while (altura<=0);
	float imc;
	imc = peso / (altura * altura); 
	printf("Su indice de masa corporal es: %f\n\n\n", imc);
	
	printf("Indice      |      Condicion\n"); 
	printf("=============================\n");
	printf(" <18,5      |      Bajo Peso\n 18,5 a 24,9|      Normal\n 25,0 a 29,9|      Sobrepeso\n =>30       |      Obesidad\n\n");
	
	if (imc<18.5) {
		printf("Su condicion es: Bajo Peso");
	}
	else if (imc>18.5&&imc<24.9) {
		printf("Su condicion es: Normal");
	}
	else if (imc>25&&imc<29.9) {
		printf("Su condicion es: Sobrepeso");
	}
	else if (imc>=30) {
		printf("Su condicion es: Obesidad");
	}
	
	
	return 0;
}



