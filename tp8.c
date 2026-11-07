//https://github.com/mariadanielamarquezs-dot/info-1
#include <stdio.h>
#include <stdlib.h>

#define TAM 20

int cuantas_piezas(int);
int rectificable(float, float);
int rechazada(float, float);

void cargar_piezas(float *, int);
int contar(int (*)(float, float), float, float *, int);
float* reserva_memoria(int);
void segregar(int (*)(float, float), float, float *, int, float *);
void mostrar_piezas(char *, float *, int);

int main (void) {
	float diametros[TAM] = {0};
	int n;
	float max = 12;
	float min = 10;
	n = cuantas_piezas(TAM);
	cargar_piezas(diametros, n);
	int n_rectificar = contar(rectificable, max, diametros, n);
	float *p_rectificables = reserva_memoria(n_rectificar);
	segregar(rectificable, max, diametros, n, p_rectificables);
	int n_rechazar = contar(rechazada, min, diametros, n);
	float *p_rechazadas = reserva_memoria(n_rechazar);
	segregar(rechazada, min, diametros, n, p_rechazadas);
	mostrar_piezas("rectificables", p_rectificables, n_rectificar);
	mostrar_piezas("rechazadas", p_rechazadas, n_rechazar);
	return 0;
}
void cargar_piezas(float *p, int n) {
	for (int i=0; i<n; i++) {
		float diam;
		do {
			printf("Ingrese el diametro de la pieza %d: ", i);
			scanf("%f", &diam);
			if (diam <= 0) {
				printf("Error. El diametro debe ser positivo.\n");
			}
		} while(diam<=0);
		*(p + i) = diam;
	}
}

int cuantas_piezas(int max) {
	int n;
	do {
		printf("Cuántas piezas ingresará? ");
		scanf("%d", &n);
	} while (n < 0 || n > max);
	return n;
}
int rectificable(float diametro, float valor) {
	if (diametro > valor)
		return 1;
	else
		return 0;
}
int rechazada(float diametro, float valor) {
	if (diametro < valor)
		return 1;
	else
		return 0;
}

	int contar(int (*criterio)(float, float), float valor, float *p, int n) {
		int cuenta=0;
		for(int i=0; i<n; i++)
			if (criterio(*(p+i), valor))
				cuenta++;
		return cuenta;
	}
	float* reserva_memoria(int n){
		float *p = (float *) malloc (n * sizeof(float));
		if (p == NULL && n>0){
			printf("Error. No se pudo reservar memoria.");
			exit(1);
		}
		return p;	
	}
void segregar(int (*criterio)(float, float), float valor, float *p, int n, float *q) {
	int seg = 0;
	for (int i=0; i<n; i++){
		if (criterio(*(p+i), valor)) {
			*(q + seg) = *(p+i);
			seg++;
		}
	}
}
void mostrar_piezas(char *mensaje, float *p, int n) {
	printf("\n Piezas %s: \n", mensaje);
	for(int i=0; i<n; i++)
		printf("Diametro: %.2f\n", *(p+i));
}
