/*******************************************************************
* Programa: Calculadora
*
* Objetivo: Resolver Operaciones Matematicás
*
* Version: 2.1.3 del 14 de Abril de 2021
*
* Autor: Juan Iribas
*
********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(){
	setbuf(stdout, NULL);
	float num1; //1er operando
	float num2; //2do operando
	float sum; //Resultado de la suma
	float subtraction; //Resultado de la resta
	float division; //Resultado de la division
	float multiplication; //Resultado de la multiplicacion
	int factorA; //Resultado del factorial de A
	int factorB; //Resultado del factorial de B
	int triggerNum1 = 0; //Para saber si ya fue ingresado el 1er operando
	int triggerNum2 = 0; //Para saber si ya fue ingresado el 2do operando
	int triggerMaths = 0; //Para saber si ya fueron realizados los calculos
	int continu = 1; //Para que el programa continue hasta que el usuario elija la opción 5 del menu
	do{ //Menú
		switch(menu(num1, num2)){
			case 1: //Ingresar el 1er operando
				num1 = getFloat("Ingrese el 1er operando: ");
				triggerNum1 = 1;
				break;
			case 2: //Ingresar el 2do operando
				num2 = getFloat("Ingrese el 2do operando: ");
				triggerNum2 = 1;
				break;
			case 3: //Calcular todas las operaciones
				if(triggerNum1==1 && triggerNum2==1){
					system("cls");
					sum = mathsAdd(num1, num2);
					subtraction = mathsSubtract(num1, num2);
					if(num2!=0){ //Si num2 es 0, entonces no se hace la division
						division = mathsDivide(num1, num2);
					}
					multiplication = mathsMultiply(num1, num2);
					factorA = mathsFactorize(num1);
					factorB = mathsFactorize(num2);
					printf("Las operaciones se realizaron con exito\n");
					printf("Presione 4 en el menu para mostrar los resultados\n\n");
					triggerMaths = 1;
					system("pause");
				}
				else{
					system("cls");
					printf("Debe ingresar los n%cmeros para poder realizar los calculos\n\n", 163);
					system("pause");
				}
				break;
			case 4: //Informar resultados
				if(triggerMaths==1){
					system("cls");
					printf("Resultados:\n");
					printf("a) El resultado de A+B es: %.2f\n", sum);
					printf("b) El resultado de A-B es: %.2f\n", subtraction);
					if(num2!=0){
						printf("c) El resultado de A/B es: %.2f\n", division);
					}
					else{
						printf("c) No es posible dividir por cero\n");
					}
					printf("d) El resultado de A*B es: %.2f\n", multiplication);
					printf("e) El factorial de A es: %d y el factorial de B es: %d\n\n", factorA, factorB);
					num1 = 0;
					num2 = 0;
					triggerNum1 = 0;
					triggerNum2 = 0;
					triggerMaths = 0;
					system("pause");
				}
				else{
					system("cls");
					printf("Debe realizar los calculos para poder mostrar los resultados\n\n");
					system("pause");
				}
				break;
			case 5: //Salir
				system("cls");
				printf("Nos vemos!\n");
				continu=0;
				break;
			default: //Mensaje de error por si el usuario ingresa una opción incorrecta
				system("cls");
				printf("Error: Debe ingresar un n%cmero entre el 1 y el 5\n\n", 163);
				system("pause");
				break;
		}
	}while(continu==1);
	return 0;
}
