#include <stdio.h>
#include <stdlib.h>
#include "veiculo_cad.h"
#include "cadastrar.h"

void veiculos_cad (void){
    for(i=0;i<1;i++){
	system ("limpar || cls");
	printf("\tTELA  VEICULO CADASTRADOS\n");
	printf("\t======================\n");
	printf("PLACA:  %s\n",cadastro.PLACA);
	printf("MODELO:  %s\n",cadastro.MARCA);
	printf("COR:  %s\n",cadastro.COR);
	getchar();
	system ("pause");
    }
}
