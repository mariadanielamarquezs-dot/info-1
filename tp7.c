#include <stdio.h>
//https://github.com/mariadanielamarquezs-dot/info-1
#define TAM 5
int main(void) {
	int codigo[TAM];
	float precio[TAM];
	int i, mayor, menor;
	printf("Ingrese los %d codigos, se solicitara el codigo y el precio\n", TAM);
	for (i=0; i < TAM; i++){
		do {
		printf("\nIngrese el codigo de barra (1-999999999): ");
		scanf("%d", &codigo[i]);
		if(codigo[i] > 999999999 || codigo[i] < 1) 
			printf("Error. El codigo de barras debe estar entre 1 y 999999999.\n");
	} while(codigo[i] < 1 || codigo[i] > 999999999);
		do {
			printf("\nIngrese el precio: ");
			scanf("%f", &precio[i]);
			if (precio[i] < 0) 
				printf("Error. El precio no debe ser negativo.");
		} while(precio[i] < 0);
	}
	printf("\n Codigo         Precio\n");
	for (i = 0; i<TAM; i++) {
		printf("%9d          %.2f\n", codigo[i], precio[i]);
	}
	mayor=0;
	menor=0;
	for (i=1; i<TAM;i++) {
		if (precio[i] > precio[mayor])
			mayor = i;
		if (precio[i] < precio[menor])
			menor = i;
	}
	printf("\nEl mas caro es [%d] %.2f", codigo[mayor], precio[mayor]);
	printf("\nEl mas barato es [%d] %.2f", codigo[menor], precio [menor]);
	return 0;
}

