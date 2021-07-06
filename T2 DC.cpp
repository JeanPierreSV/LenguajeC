#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <windows.h>
#include <string.h>

uint8_t menu=0;
uint8_t ingreso=0;
uint8_t dinero_ingresado=0;
uint8_t dinero_acumulado=10;
uint8_t vuelto=25;
char codigo;

void ingresar_usuarios();
void mostrar_menus();
void elegir_menu();
void DISPENSADOR_DE_COMIDAS();


int main(){
    ingresar_usuarios();
    mostrar_menus();
    elegir_menu();
    DISPENSADOR_DE_COMIDAS();
	return 0; }


void ingresar_usuarios(){
	//char codigo;
	printf("Ingrese su codigo para acceder al Menu de hoy : ");
	scanf("%c",&codigo);
		
	if(codigo=='R')
	{printf("\nEres cliente preferencial");
	printf("\nBienvenido Richard\n");	}

	if(codigo=='O')
	{printf("\nEres cliente preferencial");
	printf("\nBienvenido Omar\n");	}
		
	if(codigo=='L')
	{printf("\nEres cliente preferencial");
	printf("\nBienvenido Luis\n");	}
	}

void mostrar_menus(){
	printf("\n-------Menus del dia de hoy----------");
	printf("\n  1)Lomo Saltado     : 25.00 soles  ");
	printf("\n  2)Arroz con pollo  : 30.00 soles  ");
	printf("\n  3)Pachamanca       : 45.00 soles  ");
	printf("\n  4)Ceviche          : 60.00 soles  ");
	printf("\n  5)Aji de gallino   : 15.00 soles  ");
	printf("\n  6)Seco de cabrito  : 50.00 soles  ");
	}

void elegir_menu(){
	    printf("\nSeleccione del 1 al 6 el menu que desee: ");
	scanf("%u",&menu);
	if(menu==1){
		printf("   Usted eligio Lomo Saltado : Ingresar 25.00 soles");}
	
	if(menu==2){
		printf("Usted eligio Arroz con Pollo : Ingresar 30.00 soles");}
		
	if(menu==3){
		printf("     Usted eligio Pachamanca : Ingresar 45.00 soles");}
		
	if(menu==4){
		printf("        Usted eligio Ceviche : Ingresar 60.00 soles");}		
			
	if(menu==5){
		printf(" Usted eligio Aji de gallina : Ingresar 15.00 soles");}
		
	if(menu==6){
		printf("Usted eligio Seco de cabrito : Ingresar 50.00 soles");}
}

void DISPENSADOR_DE_COMIDAS(){
	printf("\n\nIngresar monedas de 5 soles o billetes de 10 soles");
	while(ingreso==0){
	  printf("\nIngresar dinero: ");	
		scanf("%u",&dinero_ingresado);
		
		if(dinero_ingresado==5 || dinero_ingresado==10){
			printf("   Monto valido, dinero aceptado");
			dinero_acumulado=dinero_ingresado+dinero_acumulado;
		    printf("\nDesea finalizar la compra? ");
		    scanf("%u",&ingreso);
			}
			else{printf("   Monto NO aceptado");}
		}
		dinero_acumulado=dinero_acumulado-10;
		printf("\n   ....... Saldo : %u ..........",dinero_acumulado);	

	if(menu==1){
		if(dinero_acumulado-25==0 || dinero_acumulado-25>0){
			printf("\nCompra finalizada \nDESPACHANDO...");
			vuelto=dinero_acumulado-25;
			printf("\nSu vuelto es de %u soles",vuelto);
			}
		else{printf("\nNO ALCANZA EL MONTO");}}
	
	if(menu==2){
		if(dinero_acumulado-30==0 || dinero_acumulado-30>0){
			printf("\nCompra finalizada \nDESPACHANDO...");}
		else{printf("\nNO ALCANZA EL MONTO");}}
		
	if(menu==3){
		if(dinero_acumulado-45==0 || dinero_acumulado-45>0){
			printf("\nCompra finalizada \nDESPACHANDO...");}
		else{printf("\nNO ALCANZA EL MONTO");}}
		
	if(menu==4){
		if(dinero_acumulado-60==0 || dinero_acumulado-60>0){
			printf("\nCompra finalizada \nDESPACHANDO...");}
		else{printf("\nNO ALCANZA EL MONTO");}}
	
	if(menu==5){
		if(dinero_acumulado-15==0 || dinero_acumulado-15>0){
			printf("\nCompra finalizada \nDESPACHANDO...");}
		else{printf("\nNO ALCANZA EL MONTO");}}
		
	if(menu==6){
		if(dinero_acumulado-50==0 || dinero_acumulado-50>0){
			printf("\nCompra finalizada \nDESPACHANDO...");}
		else{printf("\nNO ALCANZA EL MONTO");}}	
		
}	

