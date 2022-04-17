/*
 ============================================================================
 Name        : TP1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main(void)
	{
	setbuf(stdout, NULL);
	int opcion;
	float x=0;
	float y=0;
	float z=0;
	float precioDebA=0;
	float precioCredA=0;
	float precioBitA=0;
	float precioUnitA=0;
	float precioDebL=0;
	float precioCredL=0;
	float precioBitL=0;
	float precioUnitL=0;
	float precioDif=0;

	do
	{
		printf("\n 1. Ingresar Kilómetros:(km=%.2f)", x);
		printf("\n 2. Ingresar Precio de Vuelos:(Aerolineas=%.2f, Latam=%.2f)", y, z);
		printf("\n 3. Calcular todos los costos:");
		printf("\n 4. Informar Resultados");
		printf("\n 5. Carga forzada de datos");
		printf("\n 5. Carga forzada de datos");
		printf("\n 6. Salir");
		fflush(stdin);
		scanf("%d", &opcion);

		switch(opcion)

		{
		case 1:
			x= pedirNumero("Ingrese km: ", "Error reingrese km mayor a 1");
		break;

		case 2:
			y= pedirNumero("Ingrese precio de Aerolineas: ", "Error reingrese precio de Aerolineas");
			z= pedirNumero("Ingrese precio de Latam: ", "Error reingrese precio de Latam");
		break;

		case 3:
			if(x==0 || y==0 || z==0 )
			{
				printf("No se puede calcular porque no hay datos ingresados");
			}
			else
			{
			 precioDebA= calcularDebitoVuelos(y);
			 precioCredA= calcularCreditoVuelos(y);
			 precioBitA= calcularBitcoinVuelos(y);
			 precioUnitA= calcularUnitarioVuelos(y,x);
			 precioDebL= calcularDebitoVuelos(z);
			 precioCredL= calcularCreditoVuelos(z);
			 precioBitL= calcularBitcoinVuelos(z);
			 precioUnitL= calcularUnitarioVuelos(z,x);
			 precioDif= calcularDifVuelos(y,z);
			 printf("Se calculo ");
			}

		break;

		case 4:
			mostrarCostos( x,  y,  z, precioDebA,  precioCredA,  precioBitA, precioUnitA, precioDebL, precioCredL, precioBitL, precioUnitL, precioDif);

		break;
		case 5:  cargaForzada();



		break;
		case 6:
			printf("Saliste");
		break;
		default:
			printf("Ingrese una opcion valida");
		}


	}while(opcion!=6);

	}








