/*
 ============================================================================
 Name        : Ficha-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//-------------------------exercicio 1 -----------------------------------------

float calculoCilindroVolume (float raio, float altura ){

	float area  = M_PI * pow(raio, 2);
	float volume = area * altura;

	return volume;
}
//-------------------------exercicio 2 -----------------------------------------
float calculoImc (float peso, float altura){

	float imc = (peso / pow( altura, 2));

	return imc;
}

void mensagemImc (float imcfinal){

	if ( imc < 18.5 ) {

		printf("Abaixo do peso");
	}

	if else ( imc >= 18.5 && imc < 25){
		printf("peso normal");
	}
	if else( imc >= 25 && imc < 30 ){

			printf("acima do peso");
	}
	else{
			printf("obeso");
	}
}


int main(void) {
//	------------------------- exercicio 1 ------------------------------
/*

	float raio = 2;
	float altura = 4;
	float volumec = calculoCilindroVolume (raio, altura);

	printf( "O cilindro de raio %f e a altura %f tem o volume de %f.", raio,altura,volumec);*/


//	------------------------- exercicio 1 ------------------------------

	float altura=1.50;
	float peso = 78;
	float imcfinal = calculoImc(peso,altura);


	printf("imc e : %f \n",imcfinal);

	mensagemImc(imcfinal);

	return 0;
}




void quadradoA (int width, ){

for(int i = 0; i< width;i++){

	printf("%c", "*")
}

}

