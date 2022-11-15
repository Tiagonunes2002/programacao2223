/*
 * ficha5.c
 *
 *  Created on: 11/11/2022
 *      Author: 2082322
 */

<<<<<<< Updated upstream

           //Alinea 1
=======
#include "ficha5.h"

>>>>>>> Stashed changes
void levantamento(float qlevantar){

	float saldo = 4000;

	if (qlevantar < saldo){

		float srestante = saldo - qlevantar;

<<<<<<< Updated upstream
		printf("O seu levantamento foi feito com sucesso, o saldo disponivel e de %f EUROS", srestante);
=======
				printf("O seu levantamento foi feito com sucesso, o saldo disponivel e de %f EUROS", srestante);
>>>>>>> Stashed changes
	}

	else{

		printf("Nao foi possivel ( o seu saldo e inferior a %f EUROS),o seu saldo e de %f EUROS", qlevantar, saldo);
	}
}
<<<<<<< Updated upstream

        //Alinea 2
void pin2(){

	int pinverdadeiro = 8574;
	int pin = 0;
	int i = 1;

	while(pin != pinverdadeiro && i<3){

	puts("introduza o pin:");

	scanf("%i", &pin);

	if( pinverdadeiro == pin){

		puts (" O pin foi introduzido com sucesso");

}
	else{
			printf(" O pin foi introduzido icoretamente tem %i tentativas", 3 - i);

		}
	i++;
}
}



=======
>>>>>>> Stashed changes
