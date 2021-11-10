// projeto de Controle de Fluxo de Veículos
//autor: Francimar Alexandre de Oliveira Dantas
//disciplina: DCT 1106 PROGRAMAÇÃO
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <times.h>
//funções
void inicio (void);
int menu (void);
void localizar (void);
void cadastrar (void);
void entrada (void);
void saida (void);
void sair(void);
void credito (void);
int main (void){
  int op;
  do {
   op = menu();
   switch (op){
  	case 1: localizar ();
  	        break;
  	case 2: cadastrar();
	        break;
     case 3: entrada();
	        break;
     case 4: saida();
	        break;
     case 5: sair();
	        break;	
     case 6: credito();
	        break;		   	   		   		           
  }	 	
  }
  while (op != 0);
 printf("selecione uma opção válida\n");
    return op;
}
int menu (void){
	int op;
	printf("\tselecione uma opção:\n");
	printf("1-localizar\n 2-cadastrar\n 3-entrada \n 4-saida\n 5-sair\n 6-credito\n");
	scanf("%d", &op);
	return 0;
}
void inicio (void){	
     system( " limpar || cls" );
     printf("\n");
	printf("//////////////////////////////////////////////////////////////////\n");
	printf("///\tUniversidade Federal do Rio Grande do Norte           ///\n");
	printf("///\tCentro de Ensino Superior do Seridó                  ///\n");
	printf("///\tSistemas de Informação/ceres - Caicó - Bacharelado  ///\n");
	printf("///\tdisciplina - DCT 1106 programação                  ///\n");
	printf("///\tControle de Fluxo de Veículos                     ///\n");
	printf("///\tdesenvolvido por Francimar Dantas                ///\n");
	printf("///////////////////////////////////////////////////////////\n");
	printf("\tPressione qualquer tecla para continuar\n");
	getchar();
}
void cadastrar (void){
	char PLACA[8];
	char MARCA[20];
	char COR[15];
	system ("limpar || cls");
	printf("\tBEM VINDO A PARTE DE CADASTRO\n");
     getchar();
	printf("PLACA:\t\n");
	scanf("%[az-AZ-0-9]",PLACA);
	getchar();
	printf("MODELO:\t\n");
	scanf("%[a-z]", MARCA);
	getchar();
	printf("COR:\t\n");
	scanf("%c", COR);
	getchar();
	printf("\tveiculo cadastrado com sucesso\n");
	printf("\tPressione qualquer tecla para continuar\n");
	getchar();
}
void localizar (void){
     char PLACA[8];
	system ("limpar || cls");
	printf("\tTELA LOCALIZAR VEICULO\n");
	printf("\t======================\n");
	getchar();
	printf("\tDIGITE A PLACA DO VEICULO:\n");
	scanf("%[az-AZ-0-9]",PLACA);
	getchar();
	system ("pause");
}
void entrada (void){
	char PLACA[8];
	char MARCA[20];
	system("limpar || cls");
	printf("\tENTRADA DE VEICULOS\n");
	printf("\t===================\n");
	printf("\t\n");
	printf("\tDIGITE A PLACA:\n");
	scanf("%[az-AZ-0-9]",PLACA);
	getchar();
	printf("\tDIGITE O MODELO:\n");
	scanf("%[a-z]", MARCA);
     getchar();
}
void saida (void){
	system("limpar || cls");
	char PLACA[8];
	char MARCA[20];
	printf("\t SAIDA DE VEICULO\n");
	printf("\t=================\n");
	printf("\tDIGITE A PLACA:\n");
	scanf("%[az-AZ-0-9]",PLACA);
	getchar();
	printf("\tDIGITE O MODELO:\n");
	scanf("%[a-z]", MARCA);
     getchar();
}
void credito(void){
	system ("limpar || cls");
	printf("\tequipe\n");
	printf("\t======\n");
	printf("Francimar Alexandre de Oliveira Dantas\n");
}
void sair (void){
	printf("fechar\n");
}
