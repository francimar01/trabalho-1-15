// projeto de Controle de Fluxo de Ve�culos
//autor: Francimar Alexandre de Oliveira Dantas
//disciplina: DCT 1106 PROGRAMA��O
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//fun��es
void inicio (void);
int menu (void);
void credito (void);
int main (void){
  int op;
  do {
   op = menu();
   switch (op){
  	case 1: veiculos_cad ();
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
	default: printf("Op��o inv�lida!\n");
  }
  }
  while (op != 0);
   printf("FIM\n");
    return 0;
}
int menu (void){
	int op;
	system ("limpar || cls");
	printf("\n");
	printf("//////////////////////////////////////////////////////////////////\n");
	printf("///\tUniversidade Federal do Rio Grande do Norte           ///\n");
	printf("///\tCentro de Ensino Superior do Serid�                  ///\n");
	printf("///\tSistemas de Informa��o/ceres - Caic� - Bacharelado  ///\n");
	printf("///\tdisciplina - DCT 1106 programa��o                  ///\n");
	printf("///\tControle de Fluxo de Ve�culos                     ///\n");
	printf("///\tdesenvolvido por Francimar Dantas                ///\n");
	printf("///////////////////////////////////////////////////////////\n");
	printf("\tselecione uma op��o:\n");
	printf("1-veiculos cadastrados\n 2-cadastrar\n 3-entrada \n 4-saida\n 5-credito \n6-remover \n 0-sair\n ");
	scanf("%d", &op);
	return op;
}

void remover (void){
	char PLACA[8];
	system("limpar || cls");
	printf("remover veiculo");
	printf("informe a placa do veiculo:\t\n");
	scanf("%[az-AZ-0-9]",PLACA);
}
