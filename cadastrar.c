#include <stdio.h>
#include <stdlib.h>
#include "cadastrar.h"

void cadastrar (void){
	char PLACA[8];
	char MARCA[20];
	char COR[15];
	system ("limpar || cls");
	printf("\tBEM VINDO A PARTE DE CADASTRO\n");
     getchar();
	printf("PLACA:\t\n");
	scanf("%[az-AZ-0-9]",PLACA);
	getchar();
	printf("MODELO:\t\n");
	scanf("%[a-z]", MARCA);
	getchar();
	printf("COR:\t\n");
	scanf("%c", COR);
	getchar();
	printf("\tveiculo cadastrado com sucesso\n");
	printf("\tPressione qualquer tecla para continuar\n");
	getchar();
}
