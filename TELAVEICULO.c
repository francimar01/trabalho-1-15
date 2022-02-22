#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
FILE*arq;
arq=fopen("veiculos.dat","ab");
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
    gets(veiculo.PLACA);
    strupr(veiculo.PLACA);
    }while(!valida(veiculo.PLACA));
    printf("DIGITE A MARCA DO VEICULO:\n");
    gets(veiculo.MARCA);
    strupr(veiculo.MARCA);
    do{
    printf("DIGITE SEU NOME:\n");
    gets(veiculo.NOME);
    strupr(veiculo.NOME);
    }while(!validarNome(veiculo.NOME));
    printf("DIGITE SUA CIDADE:\n");
    gets(veiculo.cidade);
    strupr(veiculo.cidade);
    printf("DIGITE SEU ESTADO (APENAS SIGLAS ex. RN,PB,SP...)\n");
    gets(veiculo.estado);
    strupr(veiculo.estado);
    fwrite(&veiculo, sizeof(struct tVeiculo), 1, arq);
	printf("\tVEICULO CADASTRADO COM SUCESSO\n");
	printf("\tPressione ENTER para continuar\n");
	getchar();
    }
    fclose(arq);
}

void estaciona(void){

FILE*estacio;
estacio=fopen("estaciona.dat","rb");
int i=1;
	system("cls");

	printf("===========================================================================\n");
    printf("======       SISTEMA DE CONTROLE DE FLUXO DE VEICULOS                ======\n");
    printf("===========================================================================\n");
    printf("===========================================================================\n");
    printf("======                        ESTACIONAMENTO                         ======\n");
    printf("===========================================================================\n");

while(!feof(estacio)){
fread(&veiculo, sizeof(struct tVeiculo),1, estacio);
if(!feof(estacio))
printf("%d=PLACA: %s\nMARCA/MODELO: %s\nCIDADE: %s\nESTADO: %s\nNOME: %s\n=========\n ",i,veiculo.PLACA,veiculo.MARCA,veiculo.cidade,veiculo.estado,veiculo.NOME);
i++;
}
system("pause");
fclose(estacio);
}

void entrada(void){
FILE*arq;
FILE*estacio;
    int i=1;
    int id;
arq=fopen("veiculos.dat","rb");
estacio=fopen("estaciona.dat","a");

	system("cls");
	printf("===========================================================================\n");
    printf("======       SISTEMA DE CONTROLE DE FLUXO DE VEICULOS                ======\n");
    printf("===========================================================================\n");
    printf("===========================================================================\n");
    printf("======                    ENTRADA DE VEICULOS                        ======\n");
    printf("===========================================================================\n");
       while(fread(&veiculo,sizeof(struct tVeiculo),1,arq)){
if(!feof(arq))
printf("%d=PLACA: %s\nMARCA/MODELO: %s\nCIDADE: %s\nESTADO: %s\nNOME: %s\n=========\n ",i,veiculo.PLACA,veiculo.MARCA,veiculo.cidade,veiculo.estado,veiculo.NOME);
i++;
}
      printf("DIGITE O INDICE DO VEICULO:\n");
      scanf("%d",&id);
      getchar();
      id--;
      if(id>=0&&id<i-1){
             fseek(arq,id*sizeof(struct tVeiculo),SEEK_SET);
        fwrite(&veiculo,sizeof(struct tVeiculo),1,estacio);
      }
      fclose(arq);
      fclose(estacio);
}

void saida(void){
    FILE*estacio;
    FILE*tempo;
    estacio=fopen("estaciona.dat","rb");
    tempo=fopen("tempo.dat","wb");
    int i=1;
    int id;
    system("cls");
	printf("===========================================================================\n");
    printf("======       SISTEMA DE CONTROLE DE FLUXO DE VEICULOS                ======\n");
    printf("===========================================================================\n");
    printf("===========================================================================\n");
    printf("======                     SAIDA DE VEICULOS                         ======\n");
    printf("===========================================================================\n");

while(!feof(estacio)){
fread(&veiculo, sizeof(struct tVeiculo),1, estacio);
if(!feof(estacio))
printf("%d=PLACA: %s\nMARCA/MODELO: %s\nCIDADE: %s\nESTADO: %s\nNOME: %s\n=========\n ",i,veiculo.PLACA,veiculo.MARCA,veiculo.cidade,veiculo.estado,veiculo.NOME);
i++;
}
      printf("DIGITE O INDICE DO VEICULO:\n");
      scanf("%d",&id);
      getchar();
      id--;
        while(!feof(estacio)){
            if(id>=0&&id<i-1){
        fread(&veiculo,sizeof(struct tVeiculo),1,estacio);
         if(strcmp(id,&i)){
            fwrite(&veiculo,sizeof(struct tVeiculo),1,tempo);
         }
    }
      }
      fclose(tempo);
      fclose(estacio);
      remove("estaciona.dat");
      rename("tempo.dat","estaciona.dat");
}

void exclveiculo(void){
FILE*arq;
FILE*tempo;
arq=fopen("veiculos.dat","rb");
tempo=fopen("tempo.dat","wb");
int i=1;
int id;
char placa[12];
    system("cls");
	printf("===========================================================================\n");
    printf("======       SISTEMA DE CONTROLE DE FLUXO DE VEICULOS                ======\n");
    printf("===========================================================================\n");
    printf("===========================================================================\n");
    printf("======                      EXCLUIR VEICULOS                         ======\n");
    printf("===========================================================================\n");
while(!feof(arq)){
fread(&veiculo, sizeof(struct tVeiculo),1, arq);
if(!feof(arq))
printf("%d=PLACA: %s\nMARCA/MODELO: %s\nCIDADE: %s\nESTADO: %s\nNOME: %s\n=========\n ",i,veiculo.PLACA,veiculo.MARCA,veiculo.cidade,veiculo.estado,veiculo.NOME);
i++;
}
      printf("DIGITE O INDICE DO VEICULO:\n");
      scanf("%d",&id);

    while(!feof(arq)){
            if(id>=0&&id<i-1){
        fread(&veiculo,sizeof(struct tVeiculo),1,arq);
         if(strcmp(id,&i)){
            fwrite(&veiculo,sizeof(struct tVeiculo),1,tempo);
         }
    }
    }
    fclose(arq);
    fclose(tempo);
    remove("veiculos.dat");
    rename("tempo.dat","veiculos.dat");
}

void editarveiculo(void){
    FILE*arq;
    arq=fopen("veiculos.dat","rb+");

    int i=1;
    int id;
    if(arq){
    system("cls");
	printf("===========================================================================\n");
    printf("======       SISTEMA DE CONTROLE DE FLUXO DE VEICULOS                ======\n");
    printf("===========================================================================\n");
    printf("===========================================================================\n");
    printf("======                      EDITAR VEICULOS                          ======\n");
    printf("===========================================================================\n");
    while(fread(&veiculo,sizeof(struct tVeiculo),1,arq)){
if(!feof(arq))
printf("%d=PLACA: %s\nMARCA/MODELO: %s\nCIDADE: %s\nESTADO: %s\nNOME: %s\n=========\n ",i,veiculo.PLACA,veiculo.MARCA,veiculo.cidade,veiculo.estado,veiculo.NOME);
i++;
}
      printf("DIGITE O INDICE DO VEICULO QUE DESEJA EDITAR:");
      scanf("%d",&id);
      getchar();
      id--;
      if(id>=0&&id<i-1){
        printf("DIGITE A PLACA:\n");
        scanf("%s",veiculo.PLACA);
        strupr(veiculo.PLACA);
        printf("DIGITE O MODELO:\n");
        scanf("%s",veiculo.MARCA);
        strupr(veiculo.MARCA);
        printf("DIGITE SEU NOME:\n");
        scanf("%s",veiculo.NOME);
        strupr(veiculo.NOME);
        printf("DIGITE A CIDADE:\n");
        scanf("%s",veiculo.cidade);
        strupr(veiculo.cidade);
        printf("DIGITE SEU ESTADO:\n");
        scanf("%s",veiculo.estado);
        strupr(veiculo.estado);
        fseek(arq,id*sizeof(struct tVeiculo),SEEK_SET);
        fwrite(&veiculo,sizeof(struct tVeiculo),1,arq);
      }
      fclose(arq);
    }

    else
        printf("ERRO AO ABRIR O ARQUIVO!");
}
