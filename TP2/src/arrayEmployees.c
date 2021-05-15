#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arrayEmployees.h"
#include "validations.h"
#include "menus.h"
#include "gets.h"
#define empty 0
#define full 1

int initEmployees(sEmployee list[], int len){
    int auxReturn=-1;
    for(int i=0; i < len; i++){
        list[i].isEmpty = empty;
        auxReturn=0;
    }
    return auxReturn;
}

int addEmployee(sEmployee list[], int len, int accountant){
    int index;
    int auxReturn=-1;
    system("cls||clear");
    index=findEmpty(list, len);
    if(index!= -1){
        printf("Ingrese los siguientes datos para completar el alta del empleado\n");
        list[index].id=idGenerator(1000, accountant);
        printf("El ID generado para el empleado es: %d\n", list[index].id);
        getString("Ingrese el nombre del empleado: ", list[index].name, 51);
        getString("Ingrese el apellido del empleado: ", list[index].lastName, 51);
        list[index].salary=getFloat("Ingrese el sueldo del empleado: ");
        list[index].sector=menuSector();
        list[index].isEmpty=full;
        auxReturn=1;
        system("cls||clear");
        printf("Empleado dado de alta correctamente\n\n");
        system("pause");
    }
    return auxReturn;
}

void modifyEmployee(sEmployee list[], int len, int triggerEmployees){
	system("cls||clear");
    if(triggerEmployees==1){
        int continu=1;
        int auxID=0;
        int findID=0;
        auxID=getInt("Ingrese el ID del empleado que desea modificar: ");
        findID=findEmployeeById(list, len, auxID);
        if(findID==1){
            for(int i=0; i<len ; i++){
                do{ //Menú Modificar
                    switch(menuModify()){
                        case 1: //Modificar Nombre
                            getString("Ingrese el nombre: \n", list[i].name, 51);
                            break;
                        case 2: //Modificar Apellido
                            getString("Ingrese el apellido: \n", list[i].lastName, 51);
                            break;
                        case 3: //Modificar Salario
                            list[i].salary=getFloat("Ingrese el salario: \n");
                            break;
                        case 4: //Modificar Sector
                            list[i].sector=menuSector();
                            break;
                        case 5: //Volver al Menú Principal
                            continu=0;
                            break;
                        default: //Mensaje de error por si el usuario ingresa una opción incorrecta
                        	system("cls||clear");
                            printf("Error: Debe ingresar un número entre el 1 y el 5\n\n");
                            system("pause");
                            break;
                    }
                }while(continu==1);
            }
        }
    }
    else{
        printf("Primero debe dar de alta algún empleado\n\n");
        system("pause");
    }
}

void removeEmployee(sEmployee list[], int len, int triggerEmployees){
	system("cls||clear");
    if(triggerEmployees==1){
        int auxID=0;
        int findID=0;
        auxID=getInt("Ingrese el ID del empleado que desea eliminar: ");
        findID=findEmployeeById(list, len, auxID);
        if(findID==1){
            for(int i=0; i<len; i++){
                if((auxID == list[i].id) && (list[i].isEmpty == full)){
                    list[i].isEmpty = empty;
                    break;
                }
            }
        }
        else{
            auxID=getInt("Error: No se pudo encontrar el ID, reingreselo: ");
            findID=findEmployeeById(list, len, auxID);
            if(findID==1){
                for(int i=0; i<len; i++){
                    if((auxID == list[i].id) && (list[i].isEmpty == full)){
                        list[i].isEmpty = empty;
                        break;
                    }
                }
            }
        }
    system("pause");
    }
    else{
        printf("Primero debe dar de alta algún empleado\n\n");
        system("pause");
    }
}

void printEmployees(sEmployee list[], int len, int triggerEmployees){
	system("cls||clear");
    if(triggerEmployees==1){
        printf("Lista de Empleados\n");
        printf("\n\tID\tNombre\tApellido\tSalario\t\tSector\n");
        for(int i=0; i<len ; i++){
            if(list[i].isEmpty == full){
                printf("\t%4d\t%8s\t%8s\t%5.2f\t%3d\n", list[i].id, list[i].name, list[i].lastName, list[i].salary, list[i].sector);
            }
        }
    }
    else{
        printf("Primero debe dar de alta algún empleado\n\n");
    }
        system("pause");
}

int findEmployeeById(sEmployee list[], int len, int id){
    int index=-1;
    for(int i=0; i < len; i++){
        if(id == list[i].id && list[i].isEmpty == full){
            index=1;
            break;
        }
    }
    return index;
}

int findEmpty(sEmployee list[], int len){
    int index=-1;
    for(int i=0; i < len; i++){
        if(list[i].isEmpty == empty){
            index=i;
            break;
        }
    }
    return index;
}

int idGenerator(int id, int cont){
    return id+cont;
}
