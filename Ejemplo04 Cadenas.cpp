#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <windows.h>
float horas_trabajadores[10]={10,12,14,7,8,5,6,8,10,9};
float valor_horas=0;
//Toda cadena tiene un caracter NULL = fin de cadena '\0'
char letra1='J'; char letra2='e';  char letra3='a';  char letra4='n'; 
char nombre[20]={"Jean"};
char nombrecompleto[40]={"Jean Pierre Sulluchuco Valentin"};
uint8_t posicion=0;

int main(){
	valor_horas=horas_trabajadores[3];
	printf("El valor de la cuarta posicion del arreglo es %.2f ",valor_horas);
	printf("\nEl valor de la cuarta posicion del arreglo es %.2f ",horas_trabajadores[3]);
	
	printf("\n\n%c%c%c%c",letra1,letra2,letra3,letra4);
	printf("\n%c%c%c%c",nombre[0],nombre[1],nombre[2],nombre[3]);
	printf("\n%s\n",nombrecompleto);
	
	while(posicion!=30){
		printf("%C",nombrecompleto[posicion]);
		posicion++;
		Sleep(500);	}
	printf("\nEncontre el caracter NULL");
	return 0;}

