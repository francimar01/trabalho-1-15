#include <stdio.h>
#include <stdlib.h>
#include "veiculos_cad.h"
#include "cadastrar.h"

void veiculos_cad (void){
    for(i=0;i<1;i++){
	system ("limpar || cls");
	printf("\tTELA  VEICULO CADASTRADOS\n");
	printf("\t======================\n");
	printf("PLACA:  %s\n",vei_cadastrados[i].PLACA);
	printf("MODELO:  %s\n",vei_cadastrados[i].MARCA);
	printf("COR:  %s\n",vei_cadastrados[i].COR);
	getchar();
	system ("pause");
    }
}
