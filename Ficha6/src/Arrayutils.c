/*
 * Arrayutils.c
 *
 *  Created on: 25/11/2022
 *      Author: 2082322
 */

int indexOf(int array[], int value, int size){
	for (int i = 0; i < size; i++) {
		if (array[i] == value) {
			return i;
		}
	}
	return -1 ;
}

int indexofMax(int array[], int size){
	int max = array[0];
	int index = 0;
	for (int i = 1; i < size; i++) {
		if (array[i] > max) {
			max = array[i];
			index = i;
		}
	}

	return index;
}

int indexofMin(int array[], int size){
	int min = array[0];
	int index = 0;
	for (int i = 1; i < size; i++) {
		if (array[i] < min) {
			min = array[i];
			index = i;
		}
	}

	return index;
}
int indexofnumMin(int array[], int size){
	int min = array[0];
	int index = 0;
	for (int i = 1; i < size; i++) {
		if (array[i] < min) {
			min = array[i];
		}
	}

	return min;
}
int indexofnumMax(int array[], int size){
	int max = array[0];
	int index = 0;
	for (int i = 1; i < size; i++) {
		if (array[i] > max) {
			max = array[i];
		}
	}

	return max;
}
float indexofMedia(int array[], int size){
	int soma = 0;
		for(int i = 1; i < size; i++){

		soma += array[i];
	}
		float media = soma/size;



return media;
}
