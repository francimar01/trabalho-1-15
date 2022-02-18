#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int menu (void);
void sobre(void);
void credito (void);
int main (void){
    setlocale(LC_ALL, "Portuguese");
  int op;
  do {
   op = menu();
   switch (op){
  	case 1: telaveiculo();
  	        break;
    case 2:relatorios();
            break;
    case 3: credito();
	        break;
	case 4: sobre();
            break;
	case 0: break;
	default: printf("opção invalida!\n");
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
	printf("///\tCentro de Ensino Superior do Seridó                  ///\n");
	printf("///\tSistemas de Informação/ceres - Caicó - Bacharelado  ///\n");
	printf("///\tdisciplina - DCT 1106 programação                  ///\n");
	printf("///\tControle de Fluxo de Veiculos                    ///\n");
	printf("///\tdesenvolvido por Francimar Dantas                ///\n");
	printf("///////////////////////////////////////////////////////////\n");
	printf("\t SELECIONE UMA OPÇÃO\n");
	printf("=============================================================\n");
	printf("====== 1) TELA VEICULO                                 ======\n");
	printf("====== 2) TELA RELATORIO                               ======\n");
	printf("====== 3) EQUIPE                                       ======\n");
	printf("====== 4) SOBRE                                        ======\n");
	printf("====== 0) FECHAR PROGRAMA                              ======\n");
	printf("=============================================================\n");
	scanf("%d", &op);

	return op;
}

void credito(void){
	system ("limpar || cls");
	printf("===================================================\n");
	printf("======        \tequipe                       ======\n");
	printf("===================================================\n");

	printf("===================================================\n");
	printf("======Francimar Alexandre de Oliveira Dantas ======\n");
	printf("===================================================\n");


}
void sobre (void){
printf("=============================================================\n");
printf("======\t            SOBRE O PROJETO                    ======\n");
printf("=============================================================\n");
printf("=== o programa tema funçao de administra o fluxo de       ===\n");
printf("=== entrada e saida de veiculos do estacionamento da UFRN.===\n");
printf("=============================================================\n");

}

