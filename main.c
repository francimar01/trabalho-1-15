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
   system("cls");

	printf("\n");
	printf("==============================================================\n");
	printf("===  Universidade Federal do Rio Grande do Norte           ===\n");
	printf("===  Centro de Ensino Superior do Seridó                   ===\n");
	printf("===  Sistemas de Informação/ceres - Caicó - Bacharelado    ===\n");
	printf("===  disciplina - DCT 1106 programação                     ===\n");
	printf("===  Controle de Fluxo de Veiculos                         ===\n");
	printf("===  desenvolvido por Francimar Dantas                     ===\n");
	printf("==============================================================\n");
	printf("==============================================================\n");
	printf("===                SELECIONE UMA OPÇÃO                     ===\n");
	printf("==============================================================\n");
	printf("====== 1) MENU VEICULO                                  ======\n");
	printf("====== 2) RELATORIO                                     ======\n");
	printf("====== 3) EQUIPE                                        ======\n");
	printf("====== 4) SOBRE                                         ======\n");
	printf("====== 0) FECHAR PROGRAMA                               ======\n");
	printf("==============================================================\n");
	scanf("%d", &op);

	return op;
}

void credito(void){
	system ("cls");
	printf("===================================================\n");
	printf("======            EQUIPE                     ======\n");
	printf("===================================================\n");
	printf("===================================================\n");
	printf("======Francimar Alexandre de Oliveira Dantas ======\n");
	printf("===================================================\n");
    system("pause");

}
void sobre (void){
    system("cls");
printf("=======================================================================\n");
printf("======\t            SOBRE O PROJETO                               =====\n");
printf("=======================================================================\n");
printf("=== Projeto utilizado como forma de avaliação da disciplina DCT 1106===\n");
printf("=== -Programação UFRN.                                              ===\n");
printf("=== Sistema de controle de fluxo de veículos, administrar entrada   ===\n");
printf("=== e saida dos veículos do estacionamento.                         ===\n");
printf("=======================================================================\n");
system("pause");
}

