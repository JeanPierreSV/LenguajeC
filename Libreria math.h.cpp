#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
 int b= 2, e=5;
 double x = 6.25, y = 0.5;
 float base= 36, resultado=0;
 printf( "base % i y exponente %i = % .2f ", b, e, pow(b,e) );
 printf( "\nbase %.2f y exponente %.2f = %.2f ", x, y, pow(x,y) );
 resultado=sqrt(base);
 printf( "\nLa raiz cuadrada de  %.2f  es %.4f ", base, resultado) ;
 return 0;
}

/*
#include <stdio.h>
#include <math.h>
int main()
{
int a=1;
float b = 0.5;

printf("\n El logaritmo de %i es %.2f", a, log(a));
printf("\n El logaritmo en base 10 de %i es %.4f", b , log10(b));
printf("\n El logaritmo natural de %i es %.4f", b , log(b));

return 0;
}
*/
/*
#include <math.h>
#include <stdio.h>
#include <conio.h>
int main()
{
float num = 211.84;
float baja=0 , sube=0;
baja = floor(num);
sube = ceil(num);
printf("Numero original %.2f", num);
printf("\nNumero redondeado con floor %.2f", sube);
printf("\nNumero redondeado con ceil %.2f", baja);
return 0;
}
*/


/*
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
int numE=0;
char cade[]= "128";
numE = atoi(cade);
printf("\nCadena = %s entero = %i ", cade, numE);
printf( "\nSuma entero+3 = %i ", numE+3);
return 0;
}
*/



/*
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
float numf=0;
char cade[]= "234.28";
numf = atof(cade);
printf("\nCadena = %s float = %.2f ", cade, numf);
printf( "\n \t  Suma float = % .2f ", numf+3);
return 0;
}
*/





/*
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
srand(time(NULL));
int num=1+rand()%41;
printf("\n %i", num);
return 0;
}
*/
