/*
 ============================================================================
 Name        : clase7LaboratorioEj1.c
 Author      : Geraghty Fleming Pedro 1E
 Version     : Ejercicio 7-1:
 Copyright   : Your copyright notice
 Description : Pedirle al usuario su nombre y apellido (en variables separadas, una para el nombre y otra para el apellido).
  	  	  	   Ninguna de las dos variables se puede modificar.
  	  	  	   Debemos lograr guardar en una tercer variable el apellido y el nombre con el siguiente formato:
  	  	  	   Por ejemplo:
  	  	  	   Si el nombre es juan ignacio y el apellido es gOmEz,
  	  	  	   la salida deber?a ser:  Gomez, Juan Ignacio
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 30



int main(void)
{
	setbuf(stdout,NULL);
	char nombre[MAX];
	char apellido[MAX];
	char nombreApellido [60];

	//int j;
	//INGRESA APELLIDO
	printf("\n Ingrese nombre\n");
	fflush(stdin);
	gets(nombre);
	//printf("\n Ingresaste: %s \n",nombre);
	//INGRESA APELLIDO
	printf("\n Ingrese apellido\n");
	fflush(stdin);
	gets(apellido);
	//printf("\n Ingresaste: %s \n",apellido);
	strlwr(nombre);
	strlwr(apellido);
	//PASO A MINUSCULA TODAS LAS LETRAS DEL STRING EXCEPTUANDO LA PRIMERA LETRA

	nombre[0] = toupper(nombre[0]);
	apellido[0] = toupper(apellido[0]);
	strcpy(nombreApellido,nombre);
	//strcat(nombreApellido,nombre);NO SE USA PORQUE NO ESTA INICIALIZADO
	strcat(nombreApellido,", ");
	strcat(nombreApellido,apellido);
	printf("\n %s",nombreApellido);



	return EXIT_SUCCESS;
}
