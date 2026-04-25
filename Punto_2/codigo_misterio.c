#include <stdio.h>

void invertir(int *p_dato_secreto) {
    int dato_secreto_aux = *p_dato_secreto; //p_dato_secreto es la direccion de memoria del dato, entonces usando el operardor de indirección (*) obtenemos el valor del dato y lo asignamos a dato_secreto_aux.
    int num_invertido = 0; //Variable que se va a utilizar para almacenar el numero invertido.
    while (dato_secreto_aux > 0) {
        num_invertido = (num_invertido * 10) + (dato_secreto_aux % 10);
        dato_secreto_aux = dato_secreto_aux / 10;
    }
    *p_dato_secreto = num_invertido;
}

void dividir(int *p_dato_secreto) {
    *p_dato_secreto = *p_dato_secreto / 2;
}

void sumar(int *p_dato_secreto) {
    int dato_secreto_aux = *p_dato_secreto;
    int suma_digitos = 0; //Variable que se va a utilizar para almacenar la suma de los digitos.
    while (dato_secreto_aux > 0) {
        suma_digitos = suma_digitos + (dato_secreto_aux % 10);
        dato_secreto_aux = dato_secreto_aux / 10;
    }
    *p_dato_secreto = *p_dato_secreto + suma_digitos;
}

void procesar_enigma(int *p_dato_secreto) { //Recibe un puntero del tipo entero y lo utiliza para modificar el contenido de dato_secteto.
    invertir(p_dato_secreto); //Invierte el orden de los digitos del dato.
    dividir(p_dato_secreto);//Divide a la mitad el numero invertido.
    sumar(p_dato_secreto);//Con el resultado de la division, suma cada uno de sus digitos al resultado.
}

int main() {
    int dato_secreto = 452;
    
    printf("Iniciando depuracion con el valor: %d\n", dato_secreto);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesar_enigma(&dato_secreto); //Envia la direccion de memoria del dato como argumento a la funcion.
    
    printf("Resultado final del enigma: %d\n", dato_secreto);
    
    getchar();
    return 0;
}