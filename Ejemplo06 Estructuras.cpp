#include <stdio.h>
//Declaracion de una estructura
struct mi_estructura1{
	int   mienbro1;
	char  mienbro2;
	float mienbro3;
};

struct mi_estructura2{
	int   mienbro1;
	int   mienbro2;
	char  trama_nmea[100];
};
/*  - Declaro una variable del tipo estructura para 
      tener acceso a su lista de mienbros 
    - Las estructuras no deben tener igual nombre y sus 
      variables  (dato1 dato2) deben ser diferentes tambien
    - Las estructuras pueden tener una lista de mienbros 
      con nombre iguales  */
 
 struct mi_estructura1 dato1;
 struct mi_estructura2 dato2;
int main(){
	dato1.mienbro1=20;		
	dato1.mienbro2='c';
	dato1.mienbro3=20.56;
	dato2.mienbro1=400;
	
	printf("El dato del mienbro1 de la primera estructura1 es %i",dato1.mienbro1);
	printf("\nEl dato del mienbro2 de la primera estructura1 es %c",dato1.mienbro2);
	printf("\nEl dato del mienbro3 de la primera estructura1 es %.2f",dato1.mienbro3);
	printf("\nEl dato del mienbro1 de la segunda estructura1 es %i",dato2.mienbro1);
	return 0;}
	
