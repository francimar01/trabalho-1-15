#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "validaçao.h"
#include "cadastrar.h"
int valida(char *placa){
    if(strlen(placa) != 7){
        return 0;
    }
    for(int i = 0; placa[i] != 0; i += 1){
        if(i <= 2){
            if(!isalpha(placa[i])){
                return 0;
            }
        }else{
            if(!isdigit(placa[i])){
                return 0;
            }
        }
    }
    return 1;
}

