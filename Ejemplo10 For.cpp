#include<stdio.h>
#include<stdint.h>
#include<string.h>
#include<windows.h>

void ejemplo1();
void ejemplo2();
void ejemplo3();
void ejemplo4();
int main(){
//	ejemplo1();
//	ejemplo2();
	ejemplo3();
//	ejemplo4();
	return 0;
}
 
void ejemplo1(){
   uint8_t cuenta=0; //Parametro local	
   for(cuenta=0;cuenta<=10;cuenta++){
      printf("\nCuenta %u",cuenta);   	
   	  Sleep(500);
   }	
}

void ejemplo2(){
   uint8_t data[10];
   uint8_t i=0;
   for(i=0;i<10;i++){
   	  printf("\nIngresar el dato %u que estara en el arreglo en la posicion %u: ",i+1,i);
   	  scanf("%u",&data[i]);}
   
   for(i=0;i<10;i++){
      printf("\nPosicion[%u] dato: %u",i,data[i]);}
}

void ejemplo3(){
//Desarrollar un reloj digital	FOR ANIDADO
//se detiene una unica vez
	uint8_t segundos=0;
	uint8_t minutos=0;
	uint8_t horas=0;
	for(horas=22;horas<=23;horas++){
	   for(minutos=0;minutos<=59;minutos++){
	   	  for(segundos=0;segundos<=59;segundos++){
	   	  	   printf("\nH:%u - M:%u - S:%u",horas,minutos,segundos);
	   	  	   Sleep(1);
	   	  	   if(horas==22 && minutos==15 && segundos==59){
	   	  	   	    while(1){
	   	  	   		printf("\nActivando electrovalvula durante 5 segundos");
	   	  	   		Sleep(5000);
					return ;}
					}
			 }
	    } 
	}	
}
/*
void ejemplo4(){
//Desarrollar un reloj digital	FOR ANIDADO
//Se detiene para luego reanudar
	uint8_t segundos=0;
	uint8_t minutos=0;
	uint8_t horas=0;
	for(horas=22;horas<=23;horas++){
	   for(minutos=0;minutos<=59;minutos++){
	   	  for(segundos=0;segundos<=59;segundos++){
	   	  	   printf("\nH:%u - M:%u - S:%u",horas,minutos,segundos);
	   	  	   Sleep(1);
	   	  	   if(horas==22 && minutos==15 && segundos==59){
	   	  	   	    printf("\nActivando electrovalvula durante 5 segundos");
	   	  	   		Sleep(5000);
					}
			 }
	    } 
	}	
}

*/


