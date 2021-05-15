#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arrayEmployees.h"
#include "validations.h"
#include "menus.h"
#include "gets.h"

int menuMain(){
    int option; //Opción del menú que el usuario elige
    system("cls||clear");
    printf("Menú de Gestión de Empleados\n");
    printf("1) Altas\n");
    printf("2) Modificar\n");
    printf("3) Baja\n");
    printf("4) Informar\n");
    printf("5) Salir\n\n");
    printf("Seleccione una opción: ");
    fflush(stdin);
    scanf("%d", &option);
    return option;
}

int menuSector(){
    int option; //Opción del menú que el usuario elige
    system("cls||clear");
    printf("Sectores disponibles:\n");
    printf("1) Compras\n");
    printf("2) Ventas\n");
    printf("3) Contable\n");
    printf("4) RRHH\n");
    printf("5) Sistemas\n\n");
    printf("Seleccione el sector del empleado: ");
    fflush(stdin);
    scanf("%d", &option);
    return option;
}

int menuModify(){
    int option; //Opción del menú que el usuario elige
    system("cls||clear");
    printf("¿Qué desea hacer?\n");
    printf("1) Modificar Nombre\n");
    printf("2) Modificar Apellido\n");
    printf("3) Modificar Salario\n");
    printf("4) Modificar Sector\n");
    printf("5) Volver al menú principal\n\n");
    printf("Seleccione una opción: ");
    fflush(stdin);
    scanf("%d", &option);
    return option;
}

int menuInform(){
    int option; //Opción del menú que el usuario elige
    system("cls||clear");
    printf("¿Qué desea hacer?\n");
    printf("1) Ver el listado de los empleados ordenados alfabéticamente por apellido y sector.");
    printf("2) Ver el total y promedio de los salarios, y cuántos empleados superan el salario promedio.");
    printf("3) Volver al menú principal\n\n");
    printf("Seleccione una opción: ");
    fflush(stdin);
    scanf("%d", &option);
    return option;
}
