#include <stdio.h>
#include <stdlib.h>
#include "TELARELATORIO.h"
#include "TELAVEICULO.h"

void relatorios(void){
char opcao;
do{
    opcao=menurelatorio();
    switch(opcao){
         case '1':listacor();
                  break;
         case '2':listamarca();
                  break;
    }
}while(opcao != '0');

}


char menurelatorio(void){
    char op;
    system("cls");
printf("==============================================================\n");
printf("======               TELA RELATORIO                     ======\n");
printf("==============================================================\n");
printf("====== 1) LISTAR VEICULOS POR  COR                      ======\n");
printf("====== 2) LISTAR VEICULOS POR MARCA/MODELO              ======\n");
printf("====== 0) VOLTAR AO MENU INICIAL                        ======\n");
printf("==============================================================\n");
scanf("%c",&op);

return op;
}

void listacor(void){
     int i=0, retorno=1, cont=0;
     char cor[50],op;

     arq = fopen("veiculos.txt", "r");
     if (arq == NULL){
         printf (" Erro!\nO arquivo da lista não pode ser aberto! \n");
         getch();
         exit(1);
     }
     printf (" Digite a cor: ");
     scanf("%s",cor);
     retorno = fread(&carro, sizeof( struct veiculos), 1, arq);
     while (retorno == 1){
         if (strcmp(cor, carro.COR) == 0 ){
            printf("\n placa....: %s",carro.PLACA);
            printf("\n marca....: %s",carro.MARCA);
            printf("\n cor..: %s\n ",carro.COR);
            cont++;
         }
     i++;
     retorno = fread(&carro, sizeof(struct veiculos), 1, arq);
     }
     if(cont == 0){
        printf("Nao ha veiculo com esta cor!\n ");
     }
     getch();
     fclose(arq);
}




void listamarca(void){
     int i=0, retorno=1, cont=0;
     char marca[50],op;

     arq = fopen("veiculos.txt", "r");
     if (arq == NULL){
         printf (" Erro!\nO arquivo da lista não pode ser aberto! \n");
         getch();
         exit(1);
     }
     printf (" Digite o modelo: ");
     scanf("%s",marca);
     retorno = fread(&carro, sizeof( struct veiculos), 1, arq);
     while (retorno == 1){
         if (strcmp(marca, carro.MARCA) == 0 ){
            printf("\n placa....: %s",carro.PLACA);
            printf("\n marca....: %s",carro.MARCA);
            printf("\n cor..: %s\n ",carro.COR);
            cont++;
         }
     i++;
     retorno = fread(&carro, sizeof(struct veiculos), 1, arq);
     }
     if(cont == 0){
        printf("Nao ha veiculos desta marca!\n ");
     }
     getch();
     fclose(arq);

}
