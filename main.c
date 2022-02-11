#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//funçoes

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
    case 3: saida();
	        break;
    case 4: relatorio();
	        break;
    case 5: credito();
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
	printf("\t SELECIONE UMA OPCAO\n");
	printf("=============================================================\n");
	printf("====== 1) ESTACIONAMENTO                               ======\n");
	printf("====== 2) ENTRADA DE VEICULO                           ======\n");
	printf("====== 3) SAIDA DE VEICULO                             ======\n");
	printf("====== 4) RELATORIO                                    ======\n");
	printf("====== 5) EQUIPE                                       ======\n");
	printf("====== 0) FECHAR PROGRAMA                              ======\n");
	printf("=============================================================\n");
	scanf("%d", &op);

	return op;
}

void credito(void){
	system ("limpar || cls");
	printf("\tequipe\n");
	printf("\t======\n");
	printf("Francimar Alexandre de Oliveira Dantas\n");

}
