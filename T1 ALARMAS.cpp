#include<stdio.h>
#include<stdint.h>
#include<string.h>
#include<windows.h>

struct ingresar_hora{
	char hora[10];
	char minuto[10];
	char segundo[10];
}exacto; 

struct editar_alarmas{
	char  hora[10];
	char  minuto[10];
	char  segundo[10];
}alarma[100];

uint8_t cantidad_alarmas=0;
uint8_t datos=0;
char contrasena[100];
char clave[]={"INICIAR SESION"};
void reloj();

int main(){
    printf("Bienvenido al sistema moderno de alarmas de las electrovalvulas");
    printf("\nPara iniciar debe ingresar la hora actual");
    Sleep(1000);
	printf("\n\nIngresar la hora   : ");
	fflush(stdin);  
	gets(exacto.hora);
	printf(    "Ingrese el minuto  : ");
	fflush(stdin);
	gets(exacto.minuto);
	printf(    "Ingrese el segundo : ");
	fflush(stdin);
	gets(exacto.segundo);
	printf("\n                [H]:%s - [M]:%s - [S]:%s",exacto.hora,exacto.minuto,exacto.segundo);
   
    Sleep(1000);
	printf("\n\nIngrese la cantidad de alarmas: ");
	scanf("%u",&cantidad_alarmas);

    Sleep(2000);
while(datos<cantidad_alarmas){
      	printf("\nHora de la alarma #%u",datos+1);
	    printf("\nIngresar la hora    : ");
	    fflush(stdin);
	    gets(alarma[datos].hora);
	    printf(  "Ingresar el minuto  : ");
        fflush(stdin);	
        gets(alarma[datos].minuto);	
		printf(  "Ingresar el segundo : ");
        fflush(stdin);	
        gets(alarma[datos].segundo);		
		    datos++;}
	datos=0;
	while(datos<cantidad_alarmas){
	    printf("\nAlarma #%u: [H]:%s - [M]:%s - [S]:%s",datos+1,alarma[datos].hora,alarma[datos].minuto,alarma[datos].segundo);
        datos++;}


    Sleep(2000);	
	printf("\nInserte la contrasena para iniciar: ");
	scanf("%c",&contrasena);	
    if(strcmp(contrasena,"INICIAR SESION")){
		printf("\nCLAVE CORRECTA");
		reloj();}
	else{
		printf("\nCLAVE INCORRECTA");
	}
		
	return 0;
}

void reloj(){
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


/*Con estructuras y sin estructuras y arreglos
H:00 - M:00 - S:00
El sistema debe permitir ingresar al reloj la hora actual para iniciar el conteo
El sistema pedira la cantidad de alarmas a configurar
"Ingrese la cantidad de activaciones de la electrovalvula a configurar: " 

Configuracion1 Activacion de la electrovalvula
Horas:
Minutos:
Segundos:
.....................
ConfiguracionN Activacion de la electrovalvula
Horas:
Minutos:
Segundos:

Una vez configurado el sistema de conteo no arrancará hasta 
que coloquen la cadena "INICIAR SISTEMA
*/
