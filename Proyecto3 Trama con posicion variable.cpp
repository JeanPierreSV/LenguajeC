#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <windows.h>

char gps_tramaNmea[100]={"$GPGGAJeanPierreSV,123519,4807.038,S,01131.000,O,1,08,0.9,545.4,M,46.9,M,,*47"};
char byte_nmea;
uint8_t x=0;
uint8_t posicion=0;
char cabecera[30];
char hora_gps[20];
char latitud_gps[20];
char longitud_gps[20];
char norte_sur[3];
char este_oeste[3];

int main(){
	while(1){
	byte_nmea=gps_tramaNmea[posicion];
	if (byte_nmea==','){
	 	 posicion++;
	     break;	}
	cabecera[x]=byte_nmea;
	x++; posicion++; }
	
	
	x=0;
	while(1){
	byte_nmea=gps_tramaNmea[posicion];
	 if (byte_nmea==','){
	 	posicion++;
	    break;	}
	hora_gps[x]=byte_nmea;
	x++; posicion++; }
	
	
	x=0;
	while(1){
	byte_nmea=gps_tramaNmea[posicion];
	 if (byte_nmea==','){
	 	posicion++;
	    break;	}
	latitud_gps[x]=byte_nmea;
	x++; posicion++; }
	
	
	x=0;
	while(1){
	byte_nmea=gps_tramaNmea[posicion];
	 if (byte_nmea==','){
	 	posicion++;
	    break;	}
	norte_sur[x]=byte_nmea;
	x++; posicion++; }
	
	
	x=0;
	while(1){
	byte_nmea=gps_tramaNmea[posicion];
	 if (byte_nmea==','){
	 	posicion++;
	    break;	}
	longitud_gps[x]=byte_nmea;
	x++; posicion++; }
	
	x=0;
	while(1){
	byte_nmea=gps_tramaNmea[posicion];
	 if (byte_nmea==','){
	 	posicion++;
	    break;	}
	este_oeste[x]=byte_nmea;
	x++; posicion++; }
	
	printf("la cebecera es %s",cabecera);
	printf("\nla hora es %s",hora_gps);
	printf("\nla latitud es %s",latitud_gps);
	printf("\nEstamos en el %s",norte_sur);
	printf("\nLa longitud es %s",longitud_gps);
	printf("\nEstamos en el %s",este_oeste);
}


