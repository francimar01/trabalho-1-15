#include <stdio.h>
#include <stdlib.h>
#include "cadastrar.h"
#include "validaçao.h"
void cadastrar (void){
    fp=fopen("veiculos.dat","a+b");
    if(fp==NULL){
        printf("ERRO AO ABRIR O ARQUIVO!");
    }
    int i;
    for (i=0;i=i;i++){
	system ("limpar || cls");
	printf("===================================================================\n");
	printf("======\t        ENTRADA DE VEICULO                           ======\n");
	printf("===================================================================\n");
    getchar();
    printf("DIGITE A PLACA:\n");
    gets(cadastro.PLACA);
    printf("DIGITE A MARCA/MODELO DO VEICULO:");
    gets(cadastro.MARCA);
    printf("DIGITE A COR DO VEICULO:");
    gets(cadastro.COR);
    fwrite(&cadastro, sizeof(struct veiculos), 1, fp);
	printf("\tveiculo cadastrado com sucesso\n");
	printf("\tPressione qualquer tecla para continuar\n");
	getchar();
    }
    fclose(fp);
}
