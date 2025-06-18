#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
#include<time.h>

#include "Personajes/Personajes.h"

char opcion[50];

void aleatorio();
void verificar();

void verificar() {
	printf("\n\nDeseas continuar con el programa (S/N):\n\n");
	scanf("%s", opcion);
	if(strcmp(opcion, "S") == 0) {
		system("cls");
		aleatorio();
		
	} else if(strcmp(opcion, "N") == 0) {
		printf("\n\nOk\n\n");
		Sleep(1500);
		system("exit");
		
	} else {
		perror("\n\nEntrada errónea\n\n");
		Sleep(1500);
		system("exit");
	}
}

void aleatorio() {
	int num_aleatorio = rand() % 7;
	if(num_aleatorio == 1) {
		for(int i = 0; i < sizeof(dado1) / sizeof(dado1[0]); i++) {
			printf(dado1[i]);
		}
		
		printf("\n\nEl número escogido es el 1\n\n");
		
		Sleep(3000);
		
		verificar();
		
	} else if(num_aleatorio == 2) {
		for(int ii = 0; ii < sizeof(dado2) / sizeof(dado2[0]); ii++) {
			printf(dado2[ii]);
		}
		
		printf("\n\nEl número escogido es el 2\n\n");
		
		Sleep(3000);
		
		verificar();
		
	} else if(num_aleatorio == 3) {
		for(int iii = 0; iii < sizeof(dado3) / sizeof(dado3[0]); iii++) {
			printf(dado3[iii]);
		}
		
		printf("\n\nEl número escogido es el 3\n\n");
		
		Sleep(3000);
		
		verificar();
		
	} else if(num_aleatorio == 4) {
		for(int iiii = 0; iiii < sizeof(dado4) / sizeof(dado4[0]); iiii++) {
			printf(dado4[iiii]);
		}
		
		printf("\n\nEl número escogido es el 4\n\n");
		
		Sleep(3000);
		
		verificar();
		
	} else if(num_aleatorio == 5) {
		for(int iiiii = 0; iiiii < sizeof(dado5) / sizeof(dado5[0]); iiiii++) {
			printf(dado5[iiiii]);
		}
		
		printf("\n\nEl número escogido es el 5\n\n");
		
		Sleep(3000);
		
		verificar();
		
	} else if(num_aleatorio == 6) {
		for(int iiiiii = 0; iiiiii < sizeof(dado6) / sizeof(dado6[0]); iiiiii++) {
			printf(dado6[iiiiii]);
		}
		
		printf("\n\nEl número escogido es el 6\n\n");
		
		Sleep(3000);
		
		verificar();
		
	} else {
		aleatorio();
	}
}

int main() {
	system("cls");
	srand(time(NULL));
	aleatorio();
}
