//ESTRUCTURAS ANIDADAS ejem1
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <windows.h>
#include <string.h>

struct info_direccion{
	char distrito[20];
	char provincia[20];
	char departamento[20];
};

struct empleado{
  char nombre[20];	
  char situacion[20];
  char area[20];
  int tiempo=0;
  struct info_direccion dir_empleado;
  float salario=0.0;
}empleados[2];

int main(){
	    
	for(int i=0;i<2;i++){
		printf("------------INFORMACION : PERSONA[%i] ------------",i+1);
		printf("\n     DATOS PERSONALES ");
		printf("\nDigite su nombre: ");
		gets(empleados[i].nombre);
		printf("Situacion conyugal actual ");
		printf("\n[Soltero] - [Casado] - [Divorciado]  : ");
		gets(empleados[i].situacion);
		fflush(stdin);
		
		printf("\n     DATOS GEOGRAFICOS ");
		printf("\nDigite su distrito de procedencia: ");
		gets(empleados[i].dir_empleado.distrito);
		printf("Digite su provincia de procedencia: ");
		gets(empleados[i].dir_empleado.provincia);
		printf("Digite su departamento de procedencia: ");
		gets(empleados[i].dir_empleado.departamento);
		fflush(stdin);
		
		printf("\n     DATOS LABORALES ");
		printf("\nArea en la que trabaja: ");
		gets(empleados[i].area);
		printf("Cuanto tiempo lleva en la empresa? [anios] ");
		scanf("%i",&empleados[i].tiempo);
		printf("Digite su salario[soles] : ");
		scanf("%f",&empleados[i].salario);
		fflush(stdin);
		printf("\n\n\n");
	}
	Sleep(2000);
	printf("                GRACIAS POR COLABORAR CON LA ENCUESTA :) ");
	Sleep(2000);
	
    for(int i=0;i<2;i++){
    printf("\n\nDatos personales de la persona %i",i+1);
    printf("\nSe llama %s y es %s, ", empleados[i].nombre,empleados[i].situacion);
	printf("\nActuamente vive en %s, provincia de %s, distrito de %s ", empleados[i].dir_empleado.departamento,empleados[i].dir_empleado.provincia,empleados[i].dir_empleado.distrito);
	printf("\ntrabaja en el area de %s desde hace %i anios y percibe un sueldo de %f soles",empleados[i].area,empleados[i].tiempo,empleados[i].salario);	
	printf("\n\n");
    }
	return 0;
}
