/*******************************************************************
* Programa: Calculadora
*
* Objetivo: Resolver Operaciones Matematicás
*
* Version: 2.2.5 del 17 de Abril de 2021
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
	float division; //Resultado de la división
	float multiplication; //Resultado de la multiplicación
	int factorA; //Resultado del factorial de A
	int factorB; //Resultado del factorial de B
	int triggerNum1 = 0; //Para saber si ya fue ingresado el 1er operando
	int triggerNum2 = 0; //Para saber si ya fue ingresado el 2do operando
	int triggerMaths = 0; //Para saber si ya fueron realizados los calculos
	int continu = 1; //Para que el programa continue hasta que el usuario elija la opción 5 del menú
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
				system("cls||clear");
				if(triggerNum1==1 && triggerNum2==1){
					sum = mathsAdd(num1, num2);
					subtraction = mathsSubtract(num1, num2);
					if(num2!=0){ //Si num2 es 0, entonces no se hace la división
						division = mathsDivide(num1, num2);
					}
					multiplication = mathsMultiply(num1, num2);
					factorA = mathsFactorize(num1);
					factorB = mathsFactorize(num2);
					printf("Las operaciones se realizaron con éxito.\n");
					printf("Presione 4 en el menú para mostrar los resultados.\n\n");
					triggerMaths = 1;
				}
				else{
					printf("Debe ingresar los números para poder realizar los calculos.\n\n");
				}
				system("pause");
				break;
			case 4: //Informar resultados
				system("cls||clear");
				if(triggerMaths==1){
					printf("Resultados:\n");
					printf("a) El resultado de A+B es: %.2f.\n", sum);
					printf("b) El resultado de A-B es: %.2f.\n", subtraction);
					if(num2!=0){
						printf("c) El resultado de A/B es: %.2f.\n", division);
					}
					else{
						printf("c) No es posible dividir por cero.\n");
					}
					printf("d) El resultado de A*B es: %.2f.\n", multiplication);
					if(num1>=0){
						if(num2>=0){ //A y B son positivos
							printf("e) El factorial de A es: %d y el factorial de B es: %d.\n\n", factorA, factorB);
						}
						else{ //A es positivo y B negativo
							printf("e) El factorial de A es: %d y B es un número negativo, no se puede calcular su factorial.\n\n", factorA);
						}
					}
					else{
						if(num2>=0){ //A es negativo y B positivo
							printf("e) A es un número negativo, no se puede calcular su factorial y el factorial de B es: %d.\n\n", factorB);
						}
						else{ //A y B son negativos
							printf("e) A y B son números negativos, no se pueden calcular sus factoriales.\n\n");
						}
					}
					num1 = 0;
					num2 = 0;
					triggerNum1 = 0;
					triggerNum2 = 0;
					triggerMaths = 0;
				}
				else{
					printf("Debe realizar los calculos para poder mostrar los resultados.\n\n");
				}
				system("pause");
				break;
			case 5: //Salir
				system("cls||clear");
				printf("Se terminó la ejecución del programa con éxito.\n");
				continu=0;
				break;
			default: //Mensaje de error por si el usuario ingresa una opción incorrecta
				system("cls||clear");
				printf("Error: Debe ingresar un número entre el 1 y el 5.\n\n");
				system("pause");
				break;
		}
	}while(continu==1);
	return 0;
}
