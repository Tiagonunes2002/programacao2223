/*
 ============================================================================
 Name        : arrays2dimensoes.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[5][2][3] ={ { { 0, 0 }, { 1, 2 }, { 2, 4 }, { 3, 6 }, { 4, 8 } }, { { 0, 0 }, { 1, 2 }, { 2, 4 }, { 3, 6 }, { 4, 8 } },{ { 0, 0 }, { 1, 2 }, { 2, 4 }, { 3, 6 }, { 4, 8 } } };

	for (int i = 0; i < 5; i++) {

		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 3; k++) {
				printf("a[%d] [%d] [%d] = %d\n", i, j, k, a[i][j][k]);
			}
		}
	}
	return 0;
}
