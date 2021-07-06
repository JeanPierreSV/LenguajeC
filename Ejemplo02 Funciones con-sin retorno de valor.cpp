#include <stdint.h> 
#include <stdio.h>   
#include <windows.h>
//float area=0.0;
float lado_cuadrado=20.0;
float area_final=0.0;

void area_triangulo(float base,float altura); //Funcion sin retorno de valor y con entrada de parametros 
// Las funciones con retorno de valor va indicado con el tipo del valor, no VOID
float area_cuadrado();                        //Funcion con retorno de valor y sin entrada de parametros 
float area_circulo(float radio);              //Funcion con retorno de valor y con entrada de parametros 

int main(){ 
	area_triangulo(10.0,20.0);
	area_triangulo(10.5,21);
	area_triangulo(15,3);
	Sleep(1000);
   //La funcion principal int es con retorno de valor
    area_final=area_cuadrado();    //area_final sera el valor que retorna area_cuadrado
    printf("\nArea del cuadrado es %.2f", area_final);      //%.2f dos decimales
      
    printf("\nArea del cuadrado es %.2f",area_cuadrado() ); //Para no crear una variable demas
      
    Sleep(1000);  
   // area_final=area_triangulo();   error porque area_triangulo no retorna nada  
    printf("\nArea del primer circulo es %.2f",area_circulo(10) );
    printf("\nArea del segundo circulo es %.2f",area_circulo(15) );
    printf("\nArea del tecer circulo es %.2f",area_circulo(16) );
	return 0;}

void area_triangulo(float base, float altura){
	float area=base*altura/2;
	printf("\nEl area del triangulo con base %.2f y altura %.2f es %f",base,altura,area);}
float area_cuadrado() {
	float area=lado_cuadrado*lado_cuadrado;
	return area;}
float area_circulo(float radio){
	float area=3.14159*(radio*radio);
	return area;}
	
