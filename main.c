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
	default: printf("op��o invalida!\n");
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
	printf("===  Centro de Ensino Superior do Serid�                   ===\n");
	printf("===  Sistemas de Informa��o/ceres - Caic� - Bacharelado    ===\n");
	printf("===  disciplina - DCT 1106 programa��o                     ===\n");
	printf("===  Controle de Fluxo de Veiculos                         ===\n");
	printf("===  desenvolvido por Francimar Dantas                     ===\n");
	printf("==============================================================\n");
	printf("==============================================================\n");
	printf("===                SELECIONE UMA OP��O                     ===\n");
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
printf("=== Projeto utilizado como forma de avalia��o da disciplina DCT 1106===\n");
printf("=== -Programa��o UFRN.                                              ===\n");
printf("=== Sistema de controle de fluxo de ve�culos, administrar entrada   ===\n");
printf("=== e saida dos ve�culos do estacionamento.                         ===\n");
printf("=======================================================================\n");
system("pause");
}

