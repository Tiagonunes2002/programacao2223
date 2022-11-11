/*
 * ficha5.c
 *
 *  Created on: 11/11/2022
 *      Author: 2082322
 */

#include "ficha5.h"

void levantamento(float qlevantar){

	float saldo = 4000;

	if (qlevantar < saldo){

		float srestante = saldo - qlevantar;

				printf("O seu levantamento foi feito com sucesso, o saldo disponivel e de %f EUROS", srestante);
	}

	else{

		printf("Nao foi possivel ( o seu saldo e inferior a %f EUROS),o seu saldo e de %f EUROS", qlevantar, saldo);
	}
}
