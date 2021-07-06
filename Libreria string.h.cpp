/*
//STRUPR
#include<stdio.h> 
#include <string.h> 
char str[] = "jeanpierre"; 

int main() 
{ 
  printf("La cadena es %s\n", str); 
  printf("\nLa cadena en mayusculas es: %s", strupr(str)); 
  return 0; 
} 
*/

/*
//STRREV
#include<stdio.h> 
#include<string.h> 
char str[50] = "123456789";  
int main() 
{ 
   printf("La cadena es : %s\n",str); 
   printf("Despues de usar strrev es : %s",strrev(str)); 
  
   return 0; 
} 
*/

/*
//STRCAT
#include <string.h> 
#include<stdio.h> 

int main() 
{ 
    char cadena1[50] = "Mi nombre es"; 
    char cadena2[50] = " Jean Pierre"; 
   
    printf("\n %s",strcat(cadena1,cadena2)); 
    return 0; 
} 
*/

/*
//STRNCAT
#include <string.h> 
#include<stdio.h> 
  
int main() 
{ 
    char dest[25] = "Este es un ejemplo"; 
    char src[50] = " de la funcion strncat() esto no va"; 
      
    printf("\n %s",strncat(dest, src, 24)); 
    return 0; 
  
} 
*/
/*
//MEMSET
#include <stdio.h> 
#include <string.h> 
  
int main() 
{   char cadena[50] = "AnsiC orientado a Sistemas embebidos"; 
    printf("\n   Antes del memset(): %s\n", str); 
  
    // Fill 8 characters starting from str[13] with '.' 
    memset(cadena + 6, '.', 11*sizeof(char)); 
  
    printf("Despues del memset():  %s", str); 
    return 0; } 
*/

/*
//MEMCMP
#include <stdio.h> 
#include <string.h>  
  
int main() 
{   char cadena1[] = "Bienvenidos a ANSI "; 
    char cadena2[] = "Bienvenidos a ANSI C"; 
  
    int a; 
    a = memcmp(cadena1, cadena2, sizeof(cadena1)); 
  
    if (a > 0) 
    printf("%s es mayor que %s", cadena1,cadena2); 
    else if (a < 0) 
    printf("%s es menor que %s", cadena1,cadena2); 
    else
    printf("%s es igual que %s", cadena1,cadena2);  
  
    return 0; } 
*/

/*
//STRSTR
#include <string.h> 
#include <stdio.h> 
  
int main() 
{   char s1[] = "Programacion ANSIC orientado a sistemas embebidos"; 
    char s2[] = "ANSIC"; 
    char* p; 
  
    // Find first occurrence of s2 in s1 
    p = strstr(s1, s2); 
  
    if (p) { 
        printf("CADENA ENCONTRADA\n"); 
        printf("Primera aparicion de la cadena '%s' en '%s'\n   es apartir de '%s'", s2, s1, p); 
    } else
        printf("CADENA NO ENCONTRADA\n"); 
  
    return 0; } 
*/


/*
//STRCPY
#include <stdio.h> 
#include <string.h> 
int main() 
{ 
    char base[] = "Programacion Ansi C"; 
  
    char destino[100]; 
  
    // copying src into dest. 
    strcpy(destino, base); 
    printf("string: %s\n", destino); 
    return 0; } 
*/

/*
//STRLEN
#include<stdio.h> 
#include <string.h> 
  
int main() 
{ 
   char ch[]={'H', 'e', 'l', 'l', 'o'}; 
  
   printf("El tamano del string es: %i", strlen(ch)); 
  
 return 0; 
} 
*/

/*
//STRNCPY
#include <stdio.h> 
#include <string.h> 
int main() 
{ 
    char cadena[] = "Bienvenidos";  
    char destino[5]; 
    strncpy(destino, cadena, 5); 
     
    int tamano = strlen(destino); 
    printf("String copiado: %s\n", destino); 
    printf("Dimension de la cadena de destino: %d\n", tamano); 
    return 0; } 
*/


/*
//STRCMP
#include<stdio.h> 
#include<string.h> 
  
int main() 
{   char nombre1[] = "JeanPierre"; 
    char nombre2[] = "Jeanpierre"; 
      
    int res = strcmp(nombre2,nombre1);     
    if (res==0) 
        printf("Strings iguales"); 
    else 
        printf("Strings no iguales"); 
      
    printf("\nEl valor retornado es  %i" , res); 
    return 0; } 
    
//Zero ( 0 ): A value equal to zero when both strings are found to be identical. 
//That is, That is, All of the characters in both strings are same.
//La función strcmpi () es la misma que la de la función strcmp () pero la única 
//diferencia es que la función strcmpi () no distingue entre mayúsculas y minúsculas y,
//por otro lado, la función strcmp () sí distingue entre mayúsculas y minúsculas.
*/


/*
//STRCMPI
#include <stdio.h> 
#include <string.h> 
  
int main( ) 
{ 
   char str1[] = "PROGramacion" ; 
   char str2[] = "Programacion" ;
   char str3[] = "Programacion" ;  
     
   int j1 = strcmpi ( str1, str2 ) ; 
   int j2 = strcmpi ( str2, str3 ) ;   
     
   printf ( "El valor retornado es = %d",j1 ) ; 
   printf ( "\nEl valor retornado es = %d",j2 ) ; 
   return 0; } 
*/


/*
//MEMMOVE
#include <stdio.h> 
#include <string.h> 
  
int main () 
{ char str1[] = "PIC";  
  char str2[]  = "AVR";  
  
  printf("str1 antes del memmove "); 
  printf ("%s",str1);
  memmove(str1, str2, sizeof(str2)); 
  
  printf("\nstr1 despues del memmove "); 
  printf ("%s",str1); 
  return 0; } 
*/

/*
//STRCHR
#include <stdio.h> 
#include <string.h> 
using namespace std; 
  
int main() 
{ 
    char str[] = "Mi nombre es Jean Pierre"; 
    char* ch = strchr(str, 'n'); 
    printf ("%i",ch-str+1); 
    return 0; } 
*/

/*
//MEMCPY
#include <stdio.h> 
#include <string.h> 
  
int main () 
{ char str1[] = "ANTES";   
  char str2[] = "DESPUES";   
  
  printf("str1 antes del memcpy "); 
  printf("%s",str1); 
  
  memcpy (str1, str2, sizeof(str2)); 
  
  printf("\nstr1 despues del memcpy "); 
  printf ("%s",str1);  
  
  return 0; } 
*/




//STRTOK
#include <stdio.h> 
#include <string.h> 
  
int main() 
{   char str[] = "Programacion-Ansi-C"; 
    char* token = strtok(str, "-"); 
    while (token != NULL) { 
        printf("%s\n", token); 
        token = strtok(NULL, "-"); 
    } 
  
    return 0; } 



