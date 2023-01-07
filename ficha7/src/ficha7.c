/*
 ============================================================================
 Name        : ficha7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "fichan7.h"

int main(void) {
	/*
	char str1[6] = "ola";

	reverseString(str1); */
// ----------------------- ex 2 -------------------------

	char str2[60];
	char caracter;

	scanf("%s %c", &str2, &caracter);

	//scanf("%c", &caracter);

	int indexofchar = indexchar(str2, caracter);

	printf("o indice e %d : ", indexofchar);

// ----------------------- ex 2 -------------------------
	char str3[60] = "alop";

	int vogais=numvogais(str3, caracter)

	printf("o indice e %d : ", vogais);

	return 0;
}
