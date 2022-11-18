/*
 * ficha_5.c
 *
 *  Created on: 11/11/2022
 *      Author: 2082322
 */

//Alinea 1
#include "ficha_5.h"

void levantamento(float qlevantar) {

	float saldo = 4000;

	if (qlevantar < saldo) {

		float srestante = saldo - qlevantar;

		printf(
				"O seu levantamento foi feito com sucesso, o saldo disponivel e de %f EUROS", srestante);

	}

	else {

		printf(
				"Nao foi possivel ( o seu saldo e inferior a %f EUROS),o seu saldo e de %f EUROS", qlevantar, saldo);
	}
}
//Alinea 2

void pin2() {

	int pinverdadeiro = 8574;
	int pin = 0;
	int i = 1;

	while (pin != pinverdadeiro && i < 3) {

		puts("introduza o pin:");

		scanf("%i", &pin);

		if (pinverdadeiro == pin) {

			puts(" O pin foi introduzido com sucesso");

		} else {
			printf(" O pin foi introduzido icoretamente tem %i tentativas",3 - i);

		}

		i++;
	}
}



//  alinea 3



void calculartt(int he, int me, int se, int hs, int ms, int ss){

	int hes = he * 3600 + me * 60 + se;
	int hss = hs * 3600 + ms * 60 + ss;

	int difrenca = hss - hes ;

	int h = difrenca / 3600 ;
	int rh = difrenca % 3600 ;
	int m = rh / 60 ;
	int s = rh % 60 ;

	printf("Trabalhou %d horas, %d minutos e  %d segundos.  ", h , m , s);
}

// ---------- alinea 4 ------------


void adivinhaN(){
		int t = 0;

		srand((unsigned) time(&t));

		int secret = rand() % 11;
		int palpite = 0;

		while ( palpite != secret){

		puts("indique o seu palpite");
		scanf("%d", &palpite);


		if( palpite == secret){
			puts("acertou");
			break;
		}
		else{
			if( palpite > secret){
			puts("Acima");
			}
			else{
				puts("Abaixo");
			}
		}

		}
  }



