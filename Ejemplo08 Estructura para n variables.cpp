#include <stdio.h>
#include <stdint.h>
#include <string.h> 
//Declaracion de una estructura
struct empresa_trabajadores{
	char apellidos_nombres[40];
	char sueldo[10];
	uint8_t edad;
}persona1,persona2,persona3,persona4,persona5; 
//5 variables del tipo estructura
//char  apellidos_nombres[30];

int main(){
	printf("Datos del personal #1 ");
	
	printf("\nIngresar nombres y apellidos: ");
	fflush(stdin);
	gets(persona1.apellidos_nombres);
	printf("Ingresar su salario mensual: ");
    fflush(stdin);
	gets(persona1.sueldo);
    printf("Ingresar su edad : ");
	fflush(stdin);
    scanf("%u",&persona1.edad);
    
    /////////////////////////////////////////
	printf("\n\nDatos del personal #2 ");
	printf("Ingresar nombres y apellidos: ");
	fflush(stdin);
	gets(persona2.apellidos_nombres);
	printf("Ingresar su salario mensual: ");
    fflush(stdin);
	gets(persona2.sueldo);
    printf("Ingresar su edad : ");
	fflush(stdin);
    scanf("%u",&persona2.edad);
    
	/////////////////////////////////////////
	printf("\n\nDatos del personal #3 ");
	printf("Ingresar nombres y apellidos: ");
	fflush(stdin);
	gets(persona3.apellidos_nombres);
	printf("Ingresar su salario mensual: ");
    fflush(stdin);
	gets(persona3.sueldo);
    printf("Ingresar su edad : ");
	fflush(stdin);
    scanf("%u",&persona3.edad);
	
//Imprimiendo la base de datos SOLO PARA 3 PERSONAS
    printf("\n\n\n");
    printf("Personal #1 su nombre es: %s",persona1.apellidos_nombres);
    printf("\nPersonal #1 su salario es: %s",persona1.sueldo);
	printf("\nPersonal #1 su edad es: %u",persona1.edad);
	printf("\n\n\n");
    printf("Personal #2 su nombre es: %s",persona2.apellidos_nombres);
    printf("\nPersonal #2 su salario es: %s",persona2.sueldo);
	printf("\nPersonal #2 su edad es: %u",persona2.edad);
	printf("\n\n\n");
    printf("Personal #3 su nombre es: %s",persona3.apellidos_nombres);
    printf("\nPersonal #3 su salario es: %s",persona3.sueldo);
	printf("\nPersonal #3 su edad es: %u",persona3.edad);
	
	return 0;
}
