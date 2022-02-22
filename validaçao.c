#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "validaçao.h"

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



///Código pego do projeto exemplo de Flavius Gorgônio
int ehLetra(char c) {
    if (c >= 'A' && c <= 'Z') {
        return 1;
    } else if (c >= 'a' && c <= 'z') {
        return 1;
    } else {
        return 0;
    }
}
int validarNome(char* nome) {
    for (int i=0; nome[i]!='\0'; i++) {
        if (!ehLetra(nome[i])) {
            return 0;
        }
    }
    return 1;
}


