/*
 ============================================================================
 Name        : hola.c
 Author      : FEDERICO VIVAS DIV D
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	int numero1;
	int numero2;
	int numeroDelMedio;

	printf ("Ingrese el primer numero");
	scanf("%d", &numero);

	printf ("Ingrese el segundo numero");
	scanf("%d", &numero1);

	printf ("Ingrese el tercer numero");
	scanf("%d", &numero2);


	if ( numero > numero1 && numero < numero2 )
	{
		numeroDelMedio = numero;
	}

	else
	{
		if (numero1 > numero && numero1 < numero2)
		{
			numeroDelMedio = numero1;
		}

		else if (numero2 > numero && numero2 < numero1)
		{
			numeroDelMedio = numero2;
		}
	}

	if (numero == numeroDelMedio || numero1 == numeroDelMedio || numero2 == numeroDelMedio)
	{
		printf ("El numero del medio es %d ", numeroDelMedio);
	}

	else
	{
		printf("No hay numero del medio");
	}
