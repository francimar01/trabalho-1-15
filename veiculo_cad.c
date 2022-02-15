#include <stdio.h>
#include <stdlib.h>
#include "veiculo_cad.h"
#include "cadastrar.h"

void veiculos_cad (void){
    FILE*fp;
fp=fopen("veiculos.txt","r");
if(fp==NULL){
    printf("ERRO AO ABRIR O ARQUIVO!\n");
}
printf("================================================\n");
printf("=======\t        ESTACIONAMENTO            ======\n");
printf("================================================\n");
printf("PLACA MARCA/MODELO COR\n ");
while(!feof(fp)){
fread(&carro, sizeof(struct veiculos),1, fp);
if(!feof(fp))
printf("%s  %s  %s\n",carro.PLACA,carro.MARCA,carro.COR);
}
fclose(fp);
}
