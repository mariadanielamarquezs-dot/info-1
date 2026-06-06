#include <stdio.h>

int main(void) {
	float peso;
	float altura;
	printf("Ingrese su peso en kg: ");
	scanf("%f", &peso);
	printf("Ingrese su altura en metros: ");
	scanf("%f", &altura);
	float imc;
	imc = peso / (altura * altura); 
	printf("Su indice de masa corporal es: %f\n\n\n", imc);
	
	printf("Indice      |      Condicion\n"); 
	printf("=============================\n");
	printf(" <18,5      |      Bajo Peso\n 18,5 a 24,9|      Normal\n 25,0 a 29,9|      Sobrepeso\n =>30       |      Obesidad\n");
	
	
	
	return 0;
}

