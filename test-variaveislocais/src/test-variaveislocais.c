/*
 ============================================================================
 Name        : test-variaveislocais.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int g ;// variavel global



//implementacao
int soma(int a; int b) {
	int c = a+b ;
	return c;

}
int main(void) {

	int a,b;// variavel local

	int resultado = int soma(5,8);


	a = 10;
	b = 20;
	g = a+b;

	printf("valor of a = %d; b = %d and g = %d \n", a,b,g);

	return EXIT_SUCCESS;
}

