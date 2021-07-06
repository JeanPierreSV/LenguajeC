#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <windows.h>

char gps_tramaNmea[100]={"$GPGGA,123519,4807.038,S,01131.000,O,1,08,0.9,545.4,M,46.9,M,,*47"};
uint8_t posicionhora=7;
uint8_t posicionlatitud=14;
uint8_t posicionlongitud=25;

int main(){
	printf("La hora del satelite es : ");
	while(posicionhora!=13){
		printf("%C",gps_tramaNmea[posicionhora]);
		posicionhora++;
		}

	printf("\nLa latitud es : ");
	while(posicionlatitud!=22){
		printf("%C",gps_tramaNmea[posicionlatitud]);
		posicionlatitud++;
		}
		
	printf("\nLa longitud es : ");
	while(posicionlongitud!=34){
		printf("%C",gps_tramaNmea[posicionlongitud]);
		posicionlongitud++;
		}			

    if(gps_tramaNmea[23]='N'){
    	printf("\nEstas en el norte");}
	if(gps_tramaNmea[23]='S'){
    	printf("\nEstas en el sur");}
	
	if(gps_tramaNmea[35]='E'){
    	printf("\nEstas en el este");}
	else {printf("\nEstas en el oeste");}
	return 0;
}


