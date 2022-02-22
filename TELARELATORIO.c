#include <stdio.h>
#include <stdlib.h>
#include "TELARELATORIO.h"
#include "TELAVEICULO.h"

void relatorios(void){
char opcao;
do{
    opcao=menurelatorio();
    switch(opcao){
         case '1':listacidade();
                  break;
         case '2':listaestado();
                  break;
         case '3':listarcadastro();
                  break;
    }
}while(opcao != '0');

}


char menurelatorio(void){
    char op;
    system("cls");
printf("=============================================================================================\n");
printf("======                    SISTEMA DE CONTROLE DE FLUXO DE VEICULO                      ======\n");
printf("=============================================================================================\n");
printf("====== 1) LISTAR VEICULOS POR CIDADE                                                   ======\n");
printf("====== 2) LISTAR VEICULOS POR ESTADO                                                   ======\n");
printf("====== 3) EXIBIR VEICULOS CADASTRADOS                                                  ======\n");
printf("====== 0) VOLTAR AO MENU INICIAL                                                       ======\n");
printf("=============================================================================================\n");
scanf("%c",&op);

return op;
}
void listacidade(void){
     int j=0, retorno=1, cont=0,i=1;
     char cidade[50];
     FILE*arq;
     arq = fopen("veiculos.dat", "rb");
     if (arq == NULL){
         printf (" Erro!\nO arquivo da lista não pode ser aberto! \n");
         getch();
         exit(1);
     }
    printf("===========================================================================\n");
    printf("======       SISTEMA DE CONTROLE DE FLUXO DE VEICULOS                ======\n");
    printf("===========================================================================\n");
    printf("===========================================================================\n");
    printf("======                     VEICULOS CIDADE                           ======\n");
    printf("===========================================================================\n");
     printf (" DIGITE O NOME DA CIDADE:\n ");
     scanf("%s",cidade);
     strupr(cidade);
     retorno = fread(&veiculo, sizeof( struct tVeiculo), 1, arq);
     while (retorno == 1){
         if (strcmp(cidade, veiculo.cidade) == 0 ){
            printf("%d=PLACA: %s\nMARCA/MODELO: %s\nCIDADE: %s\nESTADO: %s\nNOME: %s\n=========\n ",i,veiculo.PLACA,veiculo.MARCA,veiculo.cidade,veiculo.estado,veiculo.NOME);
           cont++;
            i++;
         }
     j++;
     retorno = fread(&veiculo, sizeof(struct tVeiculo), 1, arq);
     }
     if(cont == 0){
        printf("Nao ha veiculo desta cidade!\n ");
     }
     getch();
     fclose(arq);
}

void listaestado(void){
     int  j=0, retorno=1, cont=0,i=1;
     char estado[50];
     FILE*arq;
     arq = fopen("veiculos.dat", "rb");
     if (arq == NULL){
         printf (" Erro!\nO arquivo da lista não pode ser aberto! \n");
         getch();
         exit(1);
     }
    printf("===========================================================================\n");
    printf("======       SISTEMA DE CONTROLE DE FLUXO DE VEICULOS                ======\n");
    printf("===========================================================================\n");
    printf("===========================================================================\n");
    printf("======                       VEICULOS ESTADO                         ======\n");
    printf("===========================================================================\n");
     printf (" DIGITE O NOME DO ESTADO(APENAS SIGLAS ex.RN,PB,SP...):\n ");
     scanf("%s",estado);
     strupr(estado);
     retorno = fread(&veiculo, sizeof( struct tVeiculo), 1, arq);
     while (retorno == 1){
         if (strcmp(estado, veiculo.estado) == 0 ){
            printf("%d=PLACA: %s\nMARCA/MODELO: %s\nCIDADE: %s\nESTADO: %s\nNOME: %s\n=========\n ",i,veiculo.PLACA,veiculo.MARCA,veiculo.cidade,veiculo.estado,veiculo.NOME);
            cont++;
            i++;
         }
     j++;
     retorno = fread(&veiculo, sizeof(struct tVeiculo), 1, arq);
     }
     if(cont == 0){
        printf("Nao ha veiculo desta cidade!\n ");
     }
     getch();
     fclose(arq);
}

void listarcadastro (void){
FILE*arq;
arq=fopen("veiculos.dat","rb");

int i=1;
if(arq == NULL){
    printf("ERRO AO ABRIR O ARQUIVO");
}
    printf("===========================================================================\n");
    printf("======       SISTEMA DE CONTROLE DE FLUXO DE VEICULOS                ======\n");
    printf("===========================================================================\n");
    printf("===========================================================================\n");
    printf("======                     VEICULOS CADASTRADOS                      ======\n");
    printf("===========================================================================\n");

while(!feof(arq)){
fread(&veiculo, sizeof(struct tVeiculo),1, arq);
if(!feof(arq))
printf("%d=PLACA: %s\nMARCA/MODELO: %s\nCIDADE: %s\nESTADO: %s\nNOME: %s\n=========\n ",i,veiculo.PLACA,veiculo.MARCA,veiculo.cidade,veiculo.estado,veiculo.NOME);
i++;
}
system("pause");
fclose(arq);

}

