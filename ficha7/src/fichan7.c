/*
 * fichan7.c
 *
 *  Created on: 02/12/2022
 *      Author: 2082322


#include "fichan7.h"
#include "string.h"
void reverseString( char str1[]){
	int len = strlen(str1);
	for(int i = len-1 ; i>=0 ; i--){
		printf("%c", str1[i]);
	}

}
*/

int indexchar( char str2[], char caracter){
	int len = strlen(str2);
	for(int i = 0 ; i< len; i++){

		if (caracter == str2[i])


			return i;
		}
		return -1 ;
	}


int numvogais( char str3[], char caracter){
	int len = strlen(str3);
	int nvogais = 0;
		for(int i = 0 ; i< len; i++){

			if (str3[i] == 'a'  || str3[i] == 'e' || str3[i] == 'i'|| str3[i] == 'o' || str3[i] == 'u')

				nvogais++;
		}
	return nvogais;
}

