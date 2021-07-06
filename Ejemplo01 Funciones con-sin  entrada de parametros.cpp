#include <stdint.h>  //standar int Libreria que incluye los tipos de int
#include <stdio.h>   //standar intput output - Libreria necesario para printf
#include <windows.h>  //Permite hacer temporizaciones Sleep (con S mayuscula)
//Ctrl + Alt + click sobre alguna de las librerias para ver sus funcionalidades

//Variables universales
uint8_t datoa=15; uint8_t datob=20;

//Zona de declaracion de funciones
//La funcion void no tiene retorno de valor
void suma_1();  //Funcion sin entrada de parametros
void suma_2(uint8_t a,uint8_t b); //Funcion con entrada de parametros

//Funcion general
int main()
{	printf("Hola mundo de los sistemas embebidos");
	suma_1();
	Sleep(1000); //Tiempo en milisegundos
	suma_2(10,20);
	Sleep(1000);
	suma_2(100,200);
	Sleep(1000);
	printf("\nFinalizando el programa");
	return 0;}
	
void suma_1(){   
	//   \n salto de linea (Alt+92)
    // %u entero sin signo    %f float  %s string   
	// %i entero con signo    %c char
	uint8_t resultado=datoa+datob;  
	//La variable resultado solo ocupa espacio en la memoria cuando suma_1() se ejecuta
	printf("\nEl resultado de la suma es: %u",resultado);
	printf("\nHola que tal");
	printf("\nMe llamo Jean Pierre"); }
// Funcion con entrada de paramentros
void suma_2(uint8_t a,uint8_t b){
	uint8_t resultado=a+b;
	printf("\nEl resultado de la suma es: %u",resultado); }
	
