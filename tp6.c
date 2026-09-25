#include <stdio.h>
float calcularAreaRectangulo (float longitud, float altura) {
	float area;
	area = longitud * altura;
	return area;
}
float calcularPerimetroRectangulo (float longitud, float altura) {
	float perimetro;
	perimetro = 2*(longitud + altura);
	return perimetro;
}
float calcularAreaCirculo (float radio) {
	float area;
	area = 3.14 * radio * radio;
	return area;
}
float calcularPerimetroCirculo (float radio) {
	float perimetro;
	perimetro = 2 * 3.14 * radio;
	return perimetro;
}
void imprimirResultados (float area, float perimetro) {
	printf("\nEl area es %.2f\n", area);
	printf("El perimetro es %.2f\n", perimetro);
}
int main(int argc, char *argv[]) {
	int opcion;
	printf("Ingrese la figura que desea calcular \n1: rectangulo\n2: circulo\n: ");
	scanf("%d", &opcion);
	if (opcion == 1) {
		printf("Ha seleccionado el rectangulo.\n");
		float longitud;
		printf("Ingrese la longitud del rectangulo: ");
		scanf("%f", &longitud);
		float altura;
		printf("Ingrese la altura del rectangulo: ");
		scanf("%f", &altura);
		float area_final = calcularAreaRectangulo (longitud, altura);
		float perimetro_final = calcularPerimetroRectangulo (longitud, altura);
		imprimirResultados(area_final, perimetro_final);
			
	}
	else if (opcion ==2) {
		printf("Ha seleccionado el circulo.\n");
		float radio;
		printf("Ingrese el radio del circulo: ");
		scanf("%f", &radio);
		float area_circulo_final = calcularAreaCirculo(radio);
		float perimetro_circulo_final = calcularPerimetroCirculo(radio);
		imprimirResultados (area_circulo_final, perimetro_circulo_final);
	}
	else {
		printf("Opcion incorrecta.");
	}
	
	
	
	return 0;
}

