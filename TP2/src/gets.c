#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arrayEmployees.h"
#include "validations.h"
#include "menus.h"
#include "gets.h"

int getInt(char message[]){
    int num;
    printf("%s", message);
    fflush(stdin);
    scanf("%d", &num);
    return num;
}

float getFloat(char message[]){
    float num;
    printf("%s", message);
    fflush(stdin);
    scanf("%f", &num);
    return num;
}

void getString(char message[], char input[], int sizeString){
    printf("%s", message);
    fflush(stdin);
    gets(input);
    while(validationString(input)!=1 || input[0]=='\0' || input[0]==' ' || (strlen(input)<3)){
        printf("Reingrese un dato válido: ");
        fflush(stdin);
        gets(input);
    }
    input[0]=toupper(input[0]);
    for(int i=1; i< input[i]; i++){
        if (input[i-1] == ' '){
            input[i]=toupper(input[i]);
        }
        else{
            input[i]=tolower(input[i]);
        }
    }
}
