#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <windows.h>
#include <string.h>
/*Cadenas en Lenguaje C
memset(trama,0,100) strlen(trama)  strcmp  strstr  strcpy */

uint16_t len_cadena=0;
uint8_t byte_char;
uint8_t bytes_trama=0;
uint8_t x=0;
uint8_t compara;
uint8_t t1=0;
char trama[100];
unsigned char caracter;
float temp;

int main(){
	
	while(1){
		x=0;
		memset(trama,0,100);
		printf("\nIngresar la cantidad de bytes de tu trama a enviar a la tarjeta de adquision de datos");
		scanf("%u",&bytes_trama);
		printf("\nUsted ingresara %u bytes a su trama para enviar \n",bytes_trama);
		
		while(x!=bytes_trama){
			fflush(stdin);
			scanf("%c",&caracter);
			trama[x]=caracter;
			x++;}
			
	printf("\nLa trama a enviar es %s",trama);	
	if (strcmp(trama,"Led1on*")==0)	{
		printf("\nEncendiendo el Led1");}
	if (strcmp(trama,"Led1of*")==0)	{
		printf("\nApagando el Led1");}	
	}
	return 0;
}
