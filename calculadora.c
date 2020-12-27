#include <stdio.h>
#include <stdlib.h>
int main() {
int x,y,e;
int suma,resta,multiplicacion,division;
// Operaciones
printf("\n[1] Suma");
printf("\n[2] Resta");
printf("\n[3] Multiplicacion");
printf("\n[4] Division\n");
printf("\nIngresa la operacion: ");
scanf("%i",&e);
// Ingreso de valores por pantalla
printf("Ingresa el primer numero: ");
scanf("%i",&x);
printf("Ingresa el segundo numero: ");
scanf("%i",&y);
if (e == 1) {
	suma = x + y;
	printf("El resultado es: %i", suma);
}
else if (e == 2) {
	resta = x - y;
	printf("El resultado es; %i", resta);
}
else if (e == 3) {
	multiplicacion = x * y;
	printf("El resultado es: %i", multiplicacion);
}
else if (e == 4) {
	division = x / y;
	printf("El resultado es: %i", division);
}
else {
	printf("No existe esta opcion");
}
}
