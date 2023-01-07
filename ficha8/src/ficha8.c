/*
 ============================================================================
 Name        : ficha8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void readfile() {
	FILE *fp;
	fp = fopen("words.txt", "r");

	char c = fgetc(fp);

	while (c != EOF) {
		printf("%c \n", c);
		c = fgetc(fp);
	}

	fclose(fp);
}

void readline() {
	FILE *fp;
	fp = fopen("words.txt", "r");
	char buffer[256];

	while (fgets(buffer, 256, fp) != NULL) {
		printf(" %c ", buffer);
	}

	fclose(fp);
}

void readlineN() {
	FILE *fp;
	fp = fopen("words.txt", "r");
	char buffer[256];
	int cont = 0;
	while (fgets(buffer, 256, fp) != NULL) {
		cont++;
	}
	printf("%d", cont);
	fclose(fp);
}

void notes() {
	FILE *fp;
	fp = fopen("notes.txt", "w");
	char names[4][255] = { "rui freitas", "joao torres", "alberto mendes",
			"leonor freitas" };
	int num = 0;
	int grades[4] = { 16, 13, 9, 19 };
	int size = 4;
	for (int i = 0; i < size; i++) {
		fprintf(fp, "%s : %d \n ", names[i], grades[i]);
		num = num + grades[i];
	}
	int media = num / size;
	fprintf(fp, " A media e : %d \n ", media);
	printf("%d", num);
	fclose(fp);
}

void readred() {
	FILE *fp;
	fp = fopen("notes.txt", "r");
	char buffer[256];
	char *token = ":";
	char *split;

	while (fgets(buffer, 256, fp) != NULL) {

		split = strtok(buffer, token);

		while (split != NULL) {

			puts(split);
			split = strtok(NULL, token);
		}
	}
	fclose(fp);

}
int main(void) {

	//readfile();
	//readline();
	//readlineN();
	//notes();
	readred();
	return 0;
}
