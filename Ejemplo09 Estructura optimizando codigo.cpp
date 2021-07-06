#include <stdio.h>
#include <stdint.h>
#include <string.h> 
struct empresa_trabajadores{
	char  apellidos_nombres[40];
	char sueldo[10];
	uint8_t edad;
}persona[100];
uint8_t datos=0;

int main(){
	while(datos<3){
      	printf("\nDatos del personal #%u",datos+1);
	    printf("\nIngresar nombres y apellidos : ");
	    fflush(stdin);
	    gets(persona[datos].apellidos_nombres);
	    
        printf("Ingresar su salario mensual: ");
        fflush(stdin);	
        gets(persona[datos].sueldo);		
		    datos++;}
		
	datos=0;
	while(datos<3){
	    printf("\nNombres y apellidos del personal #%u: %s",datos+1,persona[datos].apellidos_nombres);
        printf("\n             Sueldo del personal #%u: %s \n",datos+1,persona[datos].sueldo);	
	        datos++;}
	
	return 0;
}


