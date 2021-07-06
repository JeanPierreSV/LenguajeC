#include <stdio.h>
#include <stdint.h>
uint8_t x=10;
uint8_t y=20;
uint16_t x2=10;
uint16_t y2=20;
uint32_t x3=10;
uint32_t y3=20;
uint64_t x4=10;
uint64_t y4=20;


int main(){
/* &  Operador de direccion
int dato=50;
printf("%i",dato);
printf("%p",&dato);
*/
	printf("x=%u y=%u",x,y);
	//8 bits = 1 byte
	printf("\nLa direccion de la variable x es %p",&x); //403010
	printf("\nLa direccion de la variable y es %p",&y); //403011
	
	//16 bits = 2 bytes
	printf("\nLa direccion de la variable x2 es %p",&x2); //403012
	printf("\nLa direccion de la variable y2 es %p",&y2); //403014
		
	//32 bits = 4 bytes
	printf("\nLa direccion de la variable x3 es %p",&x3); //403018
	printf("\nLa direccion de la variable y3 es %p",&y3); //40301C
	
	//64 bits = 8bytes
	printf("\nLa direccion de la variable x4 es %p",&x4); //403020
	printf("\nLa direccion de la variable y4 es %p",&y4); //403028
	
	return 0;
}


