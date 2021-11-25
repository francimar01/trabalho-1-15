#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "saida.h"

void saida (void){
	system("limpar || cls");
	char PLACA[8];
	char MARCA[20];
	printf("\t SAIDA DE VEICULO\n");
	printf("\t=================\n");
	getchar();
	printf("\tDIGITE A PLACA:\n");
	scanf("%[az-AZ-0-9]",PLACA);
	getchar();
	printf("\tDIGITE O MODELO:\n");
	scanf("%[a-z]", MARCA);
     getchar();
}
