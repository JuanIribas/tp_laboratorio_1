/*******************************************************************
* Programa: Gestor de Empleados
*
* Objetivo: Gestionar Empleados
*
* Version: 2.3.5 del 15 de Mayo de 2021
*
* Autor: Juan Iribas
*
********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arrayEmployees.h"
#include "validations.h"
#include "menus.h"
#include "gets.h"
#define len 1000

int main(){
	setbuf(stdout, NULL);
    int continu=1; //Para que el programa continue hasta que el usuario elija salir del menú
    int triggerEmployees=0; //Para saber si ya se ingresó algún empleado
    int employeeAccountant=0; //Contador de Empleados
    sEmployee arrayEmployees[len];
    initEmployees(arrayEmployees, len);
    do{ //Menú Principal
        switch(menuMain()){
            case 1: //Altas
                addEmployee(arrayEmployees, len, employeeAccountant);
                triggerEmployees=1;
                employeeAccountant++;
                break;
            case 2: //Modificar
                modifyEmployee(arrayEmployees, len, triggerEmployees);
                break;
            case 3: //Baja
                removeEmployee(arrayEmployees, len, triggerEmployees);
                employeeAccountant--;
                break;
            case 4: //Informar
                printEmployees(arrayEmployees, len, triggerEmployees);
                break;
            case 5: //Salir
                continu=0;
                break;
            default: //Mensaje de error por si el usuario ingresa una opción incorrecta
            	system("cls||clear");
                printf("Error: Debe ingresar un número entre el 1 y el 5\n\n");
                system("pause");
                break;
        }
    }while(continu==1);
	system("cls||clear");
	printf("Se terminó la ejecución del programa con éxito.\n");
    return 0;
}
