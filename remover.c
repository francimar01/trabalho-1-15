#include <stdio.h>
#include <stdlib.h>
#include "remover.h"

void remover (void){
	char PLACA[8];
	system("limpar || cls");
	printf("remover veiculo");
	printf("informe a placa do veiculo:\t\n");
	scanf("%[az-AZ-0-9]",PLACA);
}
