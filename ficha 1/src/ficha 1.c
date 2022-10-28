/*
 ============================================================================
 Name        : ficha.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
*/

#include <stdio.h>
#include <stdlib.h>

// ============================= Alinea 2 ==============

int main(void) {

	int lado = 1;
	int altura = 3;
	int perimetro = 2*(lado+altura);

	printf("%i", perimetro);





// =========================== ALINEA 3 ====================


	int a = 5;
	int b = 3;
	int c = 7;
	int d = 10;
	int e = 1;
	float numero = 5.0;
	float media =(a+b+c+d+e) / numero ;

	printf( " A media dos %f valores e: %f \n", numero, media);











// =========================== alinea 4 =======================


   float fahrenheit = 212 ;

   float celsius = (fahrenheit - 32) /1.8;


   printf( "%.2f fahrenheit sao %.1f celsius . \n\n ", fahrenheit , celsius);



// =========================== alinea 5 =======================


   int horas = 8 ;

   int minutos = 22;

   int segundos = 10;

   int segundostotal =(horas*3600)+(minutos*60)+segundos;
   printf( " O total e de : %i segundos.\n\n " , segundostotal);

   return 0;

}


