#include <stdio.h>
#include <stdlib.h>
#include "cadastrar.h"
#include "validaçao.h"
void cadastrar (void){
    fp=fopen("veiculos.txt","ab");
    if(fp==NULL){
        printf("ERRO AO ABRIR O ARQUIVO!");
    }
    int i;
    for (i=0;i<1;i++){
	system (" cls");
	printf("===================================================================\n");
	printf("======\t        ENTRADA DE VEICULO                           ======\n");
	printf("===================================================================\n");
    getchar();
    printf("DIGITE A PLACA:\n");
    gets(carro.PLACA);
    printf("DIGITE A MARCA/MODELO DO VEICULO:");
    gets(carro.MARCA);
    printf("DIGITE A COR DO VEICULO:");
    gets(carro.COR);
    fwrite(&carro, sizeof(struct veiculos), 1, fp);
	printf("\tveiculo cadastrado com sucesso\n");
	printf("\tPressione qualquer tecla para continuar\n");
	getchar();
    }
    fclose(fp);
}
