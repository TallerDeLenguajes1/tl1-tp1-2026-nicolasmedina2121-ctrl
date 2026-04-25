// codigo_roto.c
#include <stdio.h> //Faltaba incluir la libreria stdio.h para poder usar printf y scanf.

void duplicar_numero(int *numero) { // Se le pasa un puntero como argumento a la funcion.
    *numero = *numero * 2; //Entonces, para operar con el dato al que apunta el puntero, se tuvo que agregar el operador de indirección (*). 
}

int main() {
    int valor1;
    int valor2;

    printf("Ingrese el primer valor: ");
    scanf("%d", &valor1); //Faltaba el operador de dirección (&) pues el segundo argumento de scanf debe ser una direccion en memoria.

    printf("Ingrese el segundo valor: ");
    scanf("%d", &valor2);

    int suma = valor1 + valor2; //Faltaba el punto y coma (;) al final de la linea.
    printf("La suma es: %d\n", suma);

    duplicar_numero(&valor1); //Faltaba el operador de dirección (&) pues el argumento de la funcion debe ser una direccion en memoria por su declaracion.
    printf("El primer valor duplicado es: %d\n", valor1);

    getchar();
    return 0;
}