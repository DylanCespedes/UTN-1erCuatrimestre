/*
 ============================================================================
 Name        : clase7LaboratorioTest.c
 Author      : Geraghty Fleming Pedro 1E
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	setbuf(stdout,NULL);
	char texto[] = "hola nona";
	char conjuntoCaracteres[] = {'h','o','l','a','\0'};
	char fraseUno[20];
	char fraseDos[20];
	char fraseTres[30];
	//int num1 = 44;
	printf("\n el texto es : %s",texto);

	strcpy(texto,"Pedro");//string copy remplaza el array de chars de una variable
	printf("\n el texto es : %s",texto);
	//Cuenta un caracter de mas
	printf("\nTexto:%s tamanio: %d \n", texto, sizeof(texto));
	printf("Longitud de la cadena= %d \n",strlen(texto));
	//printf("Longitud del numero= %d \n",strlen(num1)); no lo va a tomar
	printf("\nTexto:%s tamanio: %d \n", conjuntoCaracteres, sizeof(conjuntoCaracteres));
	printf("Longitud de la cadena= %d \n",strlen(conjuntoCaracteres));
	//Frase 1 es ingresado
	printf("\n Ingrese texto 1: \n");
	fflush(stdin);
	scanf("%s",fraseUno);
	printf("\n Ingresaste: %s \n",fraseUno);
	//Frase 2 es ingresada con gets
	printf("\n Ingrese texto 2\n");
	fflush(stdin);
	gets(fraseDos);
	printf("\n Ingresaste: %s \n",fraseDos);
	//Frase 3 es ingresada con fgets
	printf("\n Ingrese texto 3\n");
	fgets(fraseTres,30,stdin);
	printf("\n Ingresaste: %s \n",fraseTres);
	return EXIT_SUCCESS;
}
