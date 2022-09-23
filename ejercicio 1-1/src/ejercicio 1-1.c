/*
 ============================================================================
 Name        : Entrada-Salida.c
 Author      : federico vivas 1d
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int numero;
	int numero1;
	int resultado;

	setbuf (stdout, NULL);

	printf("Ingrese un numero");
	scanf ("%d", &numero );
	while (numero < -50 || numero > 100)
	{
		printf("vuelva a ingresar un numero");
		scanf ("%d", &numero );
	}

	printf("Ingrese otro numero");
	scanf("%d", &numero1);
	while (numero1 < -50 || numero > 100)
	{
		printf("vuelva a ingresar un numero");
		scanf ("%d", &numero1 );
	}

	resultado = numero + numero1;


	printf("La suma entre %d y %d da como resultado : %d", numero, numero1, resultado);


	return EXIT_SUCCESS;
}
