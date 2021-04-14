#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int menu(float a, float b){
	int option; //Opcion del menu que el usuario elige
	system("cls");
	printf("Bienvenido a la calculadora\n");
	printf("1) Ingresar 1er operando (A=%.2f)\n", a);
	printf("2) Ingresar 2do operando (B=%.2f)\n", b);
	printf("3) Calcular todas las operaciones\n");
	printf("	a) Calcular la suma (A+B)\n");
	printf("	b) Calcular la resta (A-B)\n");
	printf("	c) Calcular la divisi%cn (A/B)\n", 162);
	printf("	d) Calcular la multiplicaci%cn (A*B)\n", 162);
	printf("	e) Calcular el factorial (A!)\n");
	printf("4) Informar resultados\n");
	printf("5) Salir\n\n");
	printf("Seleccione una opci%cn: ", 162);
	fflush(stdin);
	scanf("%d", &option);
	return option;
}

float getFloat(char mensaje[]){
	system("cls");
	float a;
	printf("%s", mensaje);
	fflush(stdin);
	scanf("%f",&a);
	return a;
}

float mathsAdd(float a, float b){
	return a + b;
}

float mathsSubtract(float a, float b){
	return a - b;
}

float mathsDivide(float a, float b){
	return a / b;
}

float mathsMultiply(float a, float b){
	return a * b;
}

long int mathsFactorize(int a){
	long int fact;
	if(a <= 1){
		fact = 1;
	}
	else{
		fact = a*mathsFactorize(a-1);
	}
	return fact;
}
