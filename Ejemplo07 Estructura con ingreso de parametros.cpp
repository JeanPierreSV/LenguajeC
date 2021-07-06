//Base de datos de todo el personal de una empresa
#include <stdio.h>
#include <stdint.h>
#include <string.h>  //	para la funcion fflush(stdin);
//Declaracion de una estructura
struct empresa_trabajadores{
	char apellidos_nombres[35];
	char sueldo[10];
	int edad;
}personal;   //Dato se ha declarado como una variable del tipo estructura 
             //y tiene acceso acceso a los mienbros de la estructura
 
int main(){
	printf("Ingresar nombres y apellidos : ");
	fflush(stdin);  //fflush cada vez que se van a ingresar datos
	gets(personal.apellidos_nombres);
	
	printf("\nIngrese su sueldo mensual : ");
	fflush(stdin);
	gets(personal.sueldo);
	
	printf("\nIngrese su edad : ");
	fflush(stdin);
	scanf("%u",&personal.edad); 

	printf("\n\nTu nombre es %s",personal.apellidos_nombres);
	printf("\nTu sueldo es %s",personal.sueldo);
	printf("\nTu edad es %u",personal.edad);
	return 0;
}
