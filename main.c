// projeto de Controle de Fluxo de Ve�culos
//autor: Francimar Alexandre de Oliveira Dantas
//disciplina: DCT 1106 PROGRAMA�O
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//funçoes
int validarplaca (void);
void inicio (void);
int menu (void);
void credito (void);
int main (void){
  int op;
  do {
   op = menu();
   switch (op){
  	case 1: veiculos_cad();
  	        break;
  	case 2: cadastrar();
	        break;
    case 3: entrada();
	        break;
    case 4: saida();
	        break;
    case 5: credito();
	        break;
	case 6: remover();
		   break;
	case 0: break;
	default: printf("opcao invalida!\n");
  }
  }
  while (op != 0);
   printf("FIM\n");
    return 0;
}
int menu (void){
	int op;
	printf("\n");
	printf("//////////////////////////////////////////////////////////////////\n");
	printf("///\tUniversidade Federal do Rio Grande do Norte           ///\n");
	printf("///\tCentro de Ensino Superior do Serido                  ///\n");
	printf("///\tSistemas de Informacao/ceres - Caico - Bacharelado  ///\n");
	printf("///\tdisciplina - DCT 1106 programacao                  ///\n");
	printf("///\tControle de Fluxo de Veiculos                     ///\n");
	printf("///\tdesenvolvido por Francimar Dantas                ///\n");
	printf("///////////////////////////////////////////////////////////\n");
	printf("\tselecione uma opcao:\n");
	printf(" 1-veiculos cadastrados\n 2-cadastrar\n 3-entrada \n 4-saida\n 5-credito \n 6-remover \n 0-sair\n ");
	scanf("%d", &op);

	return op;
}

void credito(void){
	system ("limpar || cls");
	printf("\tequipe\n");
	printf("\t======\n");
	printf("Francimar Alexandre de Oliveira Dantas\n");

}
