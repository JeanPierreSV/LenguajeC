#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <windows.h>
#include <string.h>

char trama[100]={"Curso de programacion en AnsiC orientado a sistemas embebidos"};
char cadena1[]={"Jean Pierre"};
char cadena2[20];
uint8_t long_trama=0;
int main(){
	memset(trama,'J',10);
	printf("%s",trama);
	
	printf("\n%u",strlen(trama));
	long_trama=strlen(trama);
	printf("\nLa cadena tiene %u caracteres",long_trama);
		
	if(strcmp(cadena1,"Jean Pierre")==0){
		printf("\nLas cadenas son iguales");}
	else{
		printf("\nLas cadenas son diferentes");}
	
	if(strcmp(cadena1,"Pedro Gamio")==0){
		printf("\nLas cadenas son iguales");}
	else{
		printf("\nLas cadenas son diferentes");}
	
	printf("\nLa trama2 es %s",cadena2);
	strcpy(cadena2,cadena1);
	printf("\nLa trama2 copiada de la trama1 es %s ",cadena2);	
	return 0; }
