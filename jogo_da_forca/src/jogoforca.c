/*
 * jogoforca.c
 *
 *  Created on: 06/12/2022
 *      Author: 2082322,
 */

#include "jogoforca.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <time.h>
int failed = 0;
int hits = 0;
void displayMenu() {

	puts("---------------------------------------------------");
	puts("\t 1 - Instruções");
	puts("\t 2 - Jogar");
	puts("\t 3 - Pontuação");
	puts("\t 4 - Sair");
	puts("---------------------------------------------------");
}

void displayInstructions() {

	puts("===================================== Como jogar? ==================================================================\n");

	puts("O objetivo deste jogo é adivinhar a palavra secreta a partir de letras que são introduzidas pelo jogador.");
	puts("Para jogar entre no menu e insire a tecla 2 para iniciar um novo jogo. ");

	puts("De inicio terá 8 vidas, cada vez que não adivinhar uma letra da palavra, irá perder 1 vida.");
	puts("Se adivinhar a palavra secreta, ganha o jogo.");
	puts("Se errar nas letras ao ponto de ficar sem vidas, perde o jogo e terá de começar um jogo novo.");
	puts("Para consultar as pontuações terá de ir ao menu e primir a tecla 3.\n");

	puts("=================================  Boa sorte e bom jogo ============================================================\n");

}

void displayScores(char name[] ) {

	puts("------------------- pontuações --------------------");
	puts(" Nome do jogador: \n ");
	printf("  ");
	for (int i = 0; i < strlen(name); i++) {
		printf("%c", name[i]);
	}
	printf("\n\n  O jogador acertou em %d palavra(s).\n\n ",hits);

	printf(" O jogador teve %d tentativa(s) falhada(s). \n\n",failed);

	puts("--------------------------------------------------");

}

void displayBoard(char board[]) {
	puts("--------------------------------------------------");
	printf("\n\t");
	for (int i = 0; i < strlen(board); i++) {
		printf("%c ", board[i]);
	}
	printf("\n\n");
	puts("--------------------------------------------------");
}

void displayLost(char secret[]) {

	printf("\n Ficaste sem tentativas, a palavra secreta e:\n\n\t\t");

	for (int i = 0; i < strlen(secret); i++) {

		printf("%c", secret[i]);
	}
	printf("\n\n");

}

void getRandomWord(char *a) {
	FILE *fp = fopen("../secrets.txt", "r");
	int count = 0;
	char buffer[256] = "";
	srand(time(NULL));
	int random = rand() % 43;

	while (fgets(buffer, 256, fp)) {
		if (count == random) {
			printf("%s", buffer);
			buffer[strlen(buffer) - 1] = '\0';
			strcpy(a, buffer);
		}
		count++;
	}

	fclose(fp);

}

void play() {
	char secret[255];
	getRandomWord(secret);
	int len = strlen(secret);
	char board[255] = "";
	char guess;                      //letra a introduzir
	int tries = 8;

	for (int i = 0; i < len; i++) {
		board[i] = '_';
	}

	int compare = strcmp(secret, board);

	while (compare != 0 && tries > 0) {
		int count = 0;
		system("cls");
		displayBoard(board);

		printf("Encontra-se com %d tentativas \n", tries);

		puts("\nDigite uma letra:");
		fflush(stdin);

		scanf("%c", &guess);
		printf("\n");

		for (int i = 0; i < len; i++) {

			if (secret[i] == guess) {
				board[i] = guess;
				count++;
			}
		}

		if (count == 0) {
			tries--;
		}

		compare = strcmp(secret, board);
	}

	if (compare == 0) {
		system("cls");
		displayBoard(board);
		printf("Acertou na palavra secreta! :)\n\n");
		hits++;
	}
	if (tries == 0) {

		displayLost(secret);
		failed++;
	}
}
