#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arrayEmployees.h"
#include "validations.h"
#include "menus.h"
#include "gets.h"

int validationString(char string[]){
    int i=0;
    int returnValue=1;
    while(string[i]!='\0'){
        if((string[i]!=' ') && (string[i]<'a' || string[i]>'z') && (string[i]<'A' || string[i]>'Z')){
            returnValue=0;
        }
        i++;
    }
    return returnValue;
}
