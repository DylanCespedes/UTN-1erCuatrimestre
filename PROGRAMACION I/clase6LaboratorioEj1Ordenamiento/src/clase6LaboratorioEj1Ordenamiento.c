/*
 ============================================================================
 Name        : clase6LaboratorioEj1Ordenamiento.c
 Author      : Geraghty Fleming Pedro 1E
 Version     :	Ejercicio 6-1: Ordenamiento
 Copyright   : Your copyright notice
 Description :  Disponemos de dos variables numéricas (a y b).
 	 	 	 	 Realizar un algoritmo que permita el intercambio de valores de dichas variables.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int swapear(int* primeroPuntero, int* segundoPuntero);

int main(void)
{
	setbuf(stdin,NULL);
	int numeroUno;
	int numeroDos;
	numeroUno = 4;
	numeroDos = 9;
	swapear(&numeroUno,&numeroDos);
	printf("%d es el primero y %d es el segundo",numeroUno,numeroDos);
	return EXIT_SUCCESS;
}

int swapear(int* primeroPuntero, int* segundoPuntero)
{
	int ret;
	if(primeroPuntero != NULL && segundoPuntero != NULL)
	{

		int aux;
		int segundoLocal;
		aux = *primeroPuntero;
		segundoLocal = *segundoPuntero;
		*primeroPuntero = segundoLocal;
		*segundoPuntero = aux;
		ret = 0;
	}
	else
	{
		ret = -1;
	}

	return ret;
}


