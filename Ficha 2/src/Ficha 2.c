i/*
 ============================================================================
 Name        : Ficha.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {

	//=====================EX 1===============================

	printf("-------- Exercicio 1 --------- \n");

	float nota1 = 12;

	float nota2 = 10.6;

	float notafq = 13.4;

	float media =( nota1 * 0.3) + (nota2 * 0.3) + (notafq * 0.4);

	printf("\n\n A media final e de %1.00f valores.", media);



	//=====================EX 2===============================
	printf("\n-------- Exercicio 2 --------- \n");


	float base = 12.4;
	float altura = 22;
	float area= base*altura;

	printf ("\n\n A area do retangulo e de %1.0f metros. ", area) ;


	//=====================EX 3===============================
		printf("\n-------- Exercicio 3 --------- \n");


		float comprimento = 12.4;
		float largura = 22;
		float altura = 25;
		float area= base*altura;

		printf ("\n\n A area do retangulo e de %1.0f metros. ", area) ;


		//=====================EX 4===============================

				printf("\n-------- Exercicio 4 --------- \n");















		//=====================EX 5===============================
				printf("\n-------- Exercicio 5 --------- \n");

        // sqrt(2) raiz quadrada    //   pow(x,3  expoente  //


				int  x1 = 1;
				int  y1 = 2;

				int  x2 = 3;
				int  y2 = 3;

				float distance = sqrt(pow(x2 - x1, 2)+ pow(y2 - y1, 2));



	return 0;

}
