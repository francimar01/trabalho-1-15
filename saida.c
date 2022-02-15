#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "saida.h"
#include "cadastrar.h"
// https://pt.stackoverflow.com/questions/305195/como-remover-um-struct-armazenado-em-arquivo-em-c Site de referência para o código
void saida(void){


    FILE* fp = fopen("veiculos.txt", "rw");
    FILE* novoArquivo = fopen("temp.txt", "w");
    char placa[50];

    printf("Digite a placa do veiculo a ser excluido: ");
    scanf("%s", placa);

    while(!feof(fp)){
        fread(&carro, sizeof(struct veiculos),1, fp);
        if(strcmp(placa, carro.PLACA)){
            fwrite(&carro, sizeof(struct veiculos), 1, novoArquivo);
        }
    }
    fclose(novoArquivo);
    fclose(fp);
    remove("veiculos.txt");
    rename("temp.txt", "veiculos.txt");
}

