#include <stdio.h>
#include <stdlib.h>
#include "entrada.h"

void entrada (void){
	char PLACA[8];
	system("limpar || cls");
	printf("\tENTRADA DE VEICULOS\n");
	printf("\t===================\n");
	printf("\t\n");
	getchar();
	printf("\tDIGITE A PLACA:\n");
	scanf("%[az-AZ-0-9]",PLACA);
	getchar();
	system ("pause");
     getchar();
}
