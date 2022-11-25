/*
 ============================================================================
 Name        : Ficha6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Arrayutils.h"
int main(void){

int array[6] = {4,1,6,5,2,4};
int value = 1;
int size = 6;

// ------------------------  ex 1 ----------------------------------------
int index = indexOf(array, value, size);

//printf("O indice do valor %d e: %d",value, index);

// ------------------------  ex 2 ----------------------------------------

int indexmax = indexofMax(array, size);

printf("O indice do valor maior e  %d.", indexmax);

// ------------------------  ex 3 ----------------------------------------


int  indexmin = indexofMin(array, size);

printf("\n O indice do valor menor e  %d.", indexmin);

// ------------------------  ex 4 ----------------------------------------

int indexnummax = indexofnumMax(array,size);

printf("\n O numero do valor maior e  %d.", indexnummax);

// ------------------------  ex 5 ----------------------------------------
int indexnummin = indexofnumMin(array,size);

printf("\n O numero do valor menor e  %d.", indexnummin);

// ------------------------  ex 5 ----------------------------------------
float media = indexofMedia(array, size);

printf("\n A media e de  %f.", media);


return 0;
}
