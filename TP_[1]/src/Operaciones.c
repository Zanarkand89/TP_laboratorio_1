#include "Funciones.h"
#include <stdio.h>
#include <stdlib.h>

float pedirNumero(char mensaje[], char mensajeError[])
{
	float numero;
	printf("%s", mensaje);
	scanf("%f", &numero);
	while(numero<1)
	{
		printf("%s", mensajeError);
		scanf("%f", &numero);
	}
	return numero;
}

float calcularDebitoVuelos(float precio)
{
	float descuento=10;
	float precioDescontado;
	precioDescontado= precio - (precio/100* descuento);
	return precioDescontado;
}

float calcularCreditoVuelos(float precio)
{
	float aumento=25;
	float precioAumento;
	precioAumento= precio + (precio/100* aumento);
	return precioAumento;
}

float calcularBitcoinVuelos(float precio)
{
	float bitcoin=4606954.55;
	float precioBitcoin;
	precioBitcoin= precio /bitcoin;
	return precioBitcoin;
}

float calcularUnitarioVuelos(float precio, float km)
{
	float precioUnitario;
	precioUnitario= precio/km;
	return precioUnitario;
}


float calcularDifVuelos(float y, float z)
{
	float resultado;
	if(z>y)
	{
		resultado= z-y;
	}
	else
	{
		resultado= y - z;
	}
	return resultado;
}


void cargaForzada(void)
{
float x= 7090;
float y= 162965;
float z= 159339;
float precioDebA;
float precioCredA;
float precioBitA;
float precioUnitA;
float precioDebL;
float precioCredL;
float precioBitL;
float precioUnitL;
float precioDif;

precioDebA= calcularDebitoVuelos(y);
precioCredA= calcularCreditoVuelos(y);
precioBitA= calcularBitcoinVuelos(y);
precioUnitA= calcularUnitarioVuelos(y,x);
precioDebL= calcularDebitoVuelos(z);
precioCredL= calcularCreditoVuelos(z);
precioBitL= calcularBitcoinVuelos(z);
precioUnitL= calcularUnitarioVuelos(z,x);
precioDif= calcularDifVuelos(y,z);
printf("Carga Forzada ");

printf("\n km ingresados %.2f", x);
printf("\n precio Aerolineas %.2f", y);
printf("\n El precio con tarjeta de debito para Aerolineas es de: %.2f", precioDebA);
printf("\n El precio con tarjeta de credito para Aerolineas es de: %.2f", precioCredA);
printf("\n El precio con Bitcoin para Aerolineas es de: %.11f", precioBitA);
printf("\n El precio unitario para Aerolineas es de: %.2f", precioUnitA);

printf("\n precio Latam %.2f", z);
printf("\n El precio con tarjeta de debito para Latam es de: %.2f", precioDebL);
printf("\n El precio con tarjeta de credito para Latam es de: %.2f", precioCredL);
printf("\n El precio con Bitcoin para Latam es de: %.11f", precioBitL);
printf("\n El precio unitario para Latam es de: %.2f", precioUnitL);

printf("\n La diferencia de precio es de: %.2f", precioDif);

}

void mostrarCostos(float x, float y, float z,float precioDebA, float precioCredA, float precioBitA,float precioUnitA,float precioDebL,float precioCredL,float precioBitL,float precioUnitL,float precioDif)
{
	if( precioDebA==0||  precioCredA==0||  precioBitA==0|| precioUnitA==0|| precioDebL==0|| precioCredL==0|| precioBitL==0|| precioUnitL==0|| precioDif==0)
	{
		printf("NMo se pueden mostrar los costas porque no se calcularon");
	}
	else
	{
	printf("\n km ingresados %.2f", x);
	printf("\n precio Aerolineas %.2f", y);
	printf("\n El precio con tarjeta de debito para Aerolineas es de: %.2f", precioDebA);
	printf("\n El precio con tarjeta de credito para Aerolineas es de: %.2f", precioCredA);
	printf("\n El precio con Bitcoin para Aerolineas es de: %.11f", precioBitA);
	printf("\n El precio unitario para Aerolineas es de: %.2f", precioUnitA);

	printf("\n precio Latam %.2f", z);
	printf("\n El precio con tarjeta de debito para Latam es de: %.2f", precioDebL);
	printf("\n El precio con tarjeta de credito para Latam es de: %.2f", precioCredL);
	printf("\n El precio con Bitcoin para Latam es de: %.11f", precioBitL);
	printf("\n El precio unitario para Latam es de: %.2f", precioUnitL);


	printf("\n La diferencia de precio es de: %.2f", precioDif);
	}

}
