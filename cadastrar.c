#include <stdio.h>
#include <stdlib.h>
#include "cadastrar.h"
#include "validação.h"
void cadastrar (void){

    int i;
    for (i=0;i<1;i++){
	system ("limpar || cls");
	printf("\tBEM VINDO A PARTE DE CADASTRO\n");
    getchar();
    do{
	printf("PLACA:\t\n");
    fflush(stdin);
    gets(cadastro.PLACA);
	getchar();
    }while(!valida(cadastro.PLACA));
	printf("MODELO:\t\n");
	gets(cadastro.MARCA);
	getchar();
	printf("COR:\t\n");
	gets(cadastro.COR);
	getchar();
	printf("\tveiculo cadastrado com sucesso\n");
	printf("\tPressione qualquer tecla para continuar\n");
	getchar();
    }
}
