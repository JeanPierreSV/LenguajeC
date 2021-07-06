#include <stdint.h> 
#include <stdio.h>   
#include <windows.h>
uint8_t n1,n2=0;

void suma_teclado();

int main(){
	suma_teclado();
	return 0;}

void suma_teclado(){
	uint8_t suma=0;
	//LOS VALORES DE n1,n2 NO SE PUEDEN DECLARAR COMO VARIABLES LOCALES
	printf("Ingrese el primer numero: ");
	scanf("%u",&n1);  //Tipo de dato que se va a ingresar ,la variable donde se va a grabar
	                  //& :operador de punteros
	printf("Ingrese el segundo numero: ");
	scanf("%u",&n2);
	suma=n1+n2;
	printf("La suma es %u",suma);
}
