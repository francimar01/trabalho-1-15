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
    for (i=0;i<1;i++){
	system ("limpar || cls");
	printf("===================================================================\n");
	printf("======\t        ENTRADA DE VEICULO                           ======\n");
	printf("===================================================================\n");
    getchar();
    do{
	printf("PLACA:\t\n");
    scanf("%s",cadastro.PLACA);
    fputs(cadastro.PLACA,fp);
    getchar();
    }while(!valida(cadastro.PLACA));
	printf("MARCA/MODELO:\t\n");
	scanf("%s",cadastro.MARCA);
	fputs(cadastro.MARCA,fp);
	getchar();
	printf("COR:\t\n");
	scanf("%s",cadastro.COR);
	fputs(cadastro.COR,fp);
	getchar();
	printf("\tveiculo cadastrado com sucesso\n");
	printf("\tPressione qualquer tecla para continuar\n");
	getchar();
    }
    fclose(fp);
}
