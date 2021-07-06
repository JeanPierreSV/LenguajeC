#include <stdio.h>
#include <stdint.h>

uint8_t x=10;
uint8_t *p_x; //p_x es una variable del tipo puntero que apunta a la variable entera x
              //Es una buena practica
int main(){
	p_x=&x;
	printf("El valor de la variable p_x es %p",p_x);
	printf("\nEl valor de la variable p_x es %u",*p_x); //* Para acceder a su contenido
	
	//ARITMETICA DE PUNTEROS
	
	//Toda cadena tiene caracter NULL en su parte final
	//Un puntero puede alterar actualizar los valores que "almacena"
	
	//Crear una funcion que imprima la trama
	//printf_tx esta funcion va a tener una variable char del tipo puntero
	
	return 0;
}
