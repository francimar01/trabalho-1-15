#include <stdio.h>
#include <stdlib.h>
#include "cadastrar.h"

void cadastrar (void){

    int i;
    for (i=0;i<1;i++){
	system ("limpar || cls");
	printf("\tBEM VINDO A PARTE DE CADASTRO\n");
    getchar();
	printf("PLACA:\t\n");
    fflush(stdin);
    gets(vei_cadastrados[i].PLACA);
	getchar();
	printf("MODELO:\t\n");
	gets(vei_cadastrados[i].MARCA);
	getchar();
	printf("COR:\t\n");
	gets(vei_cadastrados[i].COR);
	getchar();
	printf("\tveiculo cadastrado com sucesso\n");
	printf("\tPressione qualquer tecla para continuar\n");
	getchar();
    }
}
