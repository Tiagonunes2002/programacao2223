/*
 ============================================================================
 Name        : jogo_da_forca.c
 Author      : 
 Version     :
 Copyright   :
 Description : jogo da forca
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "jogoforca.h"
#include <string.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");
	puts("---------- Bem Vindo ao Jogo da Forca ---------- ");
	char options =' ';
	char name[20];
	puts("Indique o seu nome :");
	scanf("%s", name);
	while (options != '4') {

		puts("Escolha uma op��o:");
		displayMenu();
		fflush(stdin);
		scanf("%c", &options);

		switch (options) {

		case '1':
			displayInstructions();
			//Instru��es
			break;
		case '2':
			system("cls");
			play();
			// jogar
			break;
		case '3':
			displayScores(name);
			//Pontua��o
			break;
		case '4':
			//Sair
			break;
		default:
			system("cls");
			puts("Op��o invalida\n");
		}
	}
	return 0;
}
