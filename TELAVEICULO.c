#include <stdio.h>
#include<stdlib.h>
#include "TELAVEICULO.h"

void telaveiculo(void){
char opcao;
    do{
    opcao=menuveiculo();
    switch(opcao){
      case '1':cadastrar();
            break;
      case '2':entrada();
            break;
      case '3':saida();
            break;
      case '4':exclveiculo();
            break;
      case '5':estaciona();
              break;
      case '6':editarveiculo();
    }
}while(opcao != '0');

}

char menuveiculo(void){
char op;
system("cls");
printf("==============================================================\n");
printf("======        SISTEMA DE CONTROLE DE FLUXO DE VEICULO   ======\n");
printf("==============================================================\n");
printf("====== 1) CADASTRAR                                     ======\n");
printf("====== 2) ENTRADA DE VEICULO                            ======\n");
printf("====== 3) SAIDA DE VEICULO                              ======\n");
printf("====== 4) EXCLUIR VEICULO                               ======\n");
printf("====== 5) ESTACIONAMENTO                                ======\n");
printf("====== 6) EDITAR  VEICULO                               ======\n");
printf("====== 0) VOLTAR AO MENU INICIAL                        ======\n");
printf("==============================================================\n");
scanf("%c",&op);

return op;
}

void cadastrar(void){

arq=fopen("veiculos.txt","a");
if(arq == NULL){
    printf("ERRO AO TENTAR ABRIR O ARQUIVO!");
}
    int i;
    for (i=0;i<1;i++){
	system("cls");
	printf("===========================================================================\n");
    printf("======       SISTEMA DE CONTROLE DE FLUXO DE VEICULOS                ======\n");
    printf("===========================================================================\n");
    printf("===========================================================================\n");
    printf("======                    CADASTRO DE VEICULO                        ======\n");
    printf("===========================================================================\n");
    getchar();
    do{
    printf("DIGITE A PLACA:\n");
    gets(carro.PLACA);
    }while(!valida(carro.PLACA));
    printf("DIGITE A MARCA/MODELO DO VEICULO:");
    gets(carro.MARCA);
    printf("DIGITE A COR DO VEICULO:");
    gets(carro.COR);
    fwrite(&carro, sizeof(struct veiculos), 1, arq);
	printf("\tVEICULO CADASTRADO COM SUCESSO\n");
	printf("\tPressione ENTER para continuar\n");
	getchar();
    }
    fclose(arq);
}

void estaciona(void){
FILE*arq;
arq=fopen("veiculos.txt","rb");
if(arq == NULL){
    printf("ERRO AO ABRIR O ARQUIVO");
}
    printf("===========================================================================\n");
    printf("======       SISTEMA DE CONTROLE DE FLUXO DE VEICULOS                ======\n");
    printf("===========================================================================\n");
    printf("===========================================================================\n");
    printf("======                      ESTACIONAMENTO                           ======\n");
    printf("===========================================================================\n");

while(!feof(arq)){
fread(&carro, sizeof(struct veiculos),1, arq);
if(!feof(arq))
printf("PLACA: %s\nMARCA/MODELO: %s\nCOR: %s\n=========\n ",carro.PLACA,carro.MARCA,carro.COR);
}
system("pause");
fclose(arq);

}



void saida(void){
    FILE*arq = fopen("veiculos.txt", "rw");
    FILE* novoArquivo = fopen("temp.txt", "w");
    char placa[50];
    printf("===========================================================================\n");
    printf("======       SISTEMA DE CONTROLE DE FLUXO DE VEICULOS                ======\n");
    printf("===========================================================================\n");
    printf("===========================================================================\n");
    printf("======                    SAIDA DE VEICULO                           ======\n");
    printf("===========================================================================\n");
    printf("DIGITE A PLACA : ");
    scanf("%s", placa);

    while(!feof(arq)){
        fread(&carro, sizeof(struct veiculos),1, arq);
        if(strcmp(placa, carro.PLACA)){
            fwrite(&carro, sizeof(struct veiculos), 1, novoArquivo);
        }
    }
    fclose(novoArquivo);
    fclose(arq);
    remove("veiculos.txt");
    rename("temp.txt", "veiculos.txt");
}

void editarveiculo(void){
printf("===========================================================================\n");
printf("======       SISTEMA DE CONTROLE DE FLUXO DE VEICULOS                ======\n");
printf("===========================================================================\n");
printf("===========================================================================\n");
printf("======                   ATUALIZAR DADOS                             ======\n");
printf("===========================================================================\n");
system("pause");
}

void entrada(void){
printf("===========================================================================\n");
printf("======       SISTEMA DE CONTROLE DE FLUXO DE VEICULOS                ======\n");
printf("===========================================================================\n");
printf("===========================================================================\n");
printf("======                   ENTARADA DE VEICULO                         ======\n");
printf("===========================================================================\n");
system("pause");
}

void exclveiculo(void){
printf("===========================================================================\n");
printf("======       SISTEMA DE CONTROLE DE FLUXO DE VEICULOS                ======\n");
printf("===========================================================================\n");
printf("===========================================================================\n");
printf("======                   EXCLUIR VEICULO                             ======\n");
printf("===========================================================================\n");
system("pause");
}
