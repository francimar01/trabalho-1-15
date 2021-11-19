// projeto de Controle de Fluxo de Veículos
//autor: Francimar Alexandre de Oliveira Dantas
//disciplina: DCT 1106 PROGRAMAÇÃO
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//funções
void inicio (void);
int menu (void);
void remover (void);
void localizar (void);
void cadastrar (void);
void entrada (void);
void saida (void);
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
     case 5: credito();
	        break;	
	case 6: remover();
		   break;   	        
	case 0: break;	
	default: printf("Opção inválida!\n");	        	   	   		   		           
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
	printf("///\tCentro de Ensino Superior do Seridó                  ///\n");
	printf("///\tSistemas de Informação/ceres - Caicó - Bacharelado  ///\n");
	printf("///\tdisciplina - DCT 1106 programação                  ///\n");
	printf("///\tControle de Fluxo de Veículos                     ///\n");
	printf("///\tdesenvolvido por Francimar Dantas                ///\n");
	printf("///////////////////////////////////////////////////////////\n");
	printf("\tselecione uma opção:\n");
	printf("1-veiculos cadastrados\n 2-cadastrar\n 3-entrada \n 4-saida\n 5-credito \n6-remover \n 0-sair\n ");
	scanf("%d", &op);
	return op;
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
	getchar();
	printf("\tDIGITE A PLACA:\n");
	scanf("%[az-AZ-0-9]",PLACA);
	getchar();
	system ("pause");
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
	getchar();
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
void remover (void){
	char PLACA[8];
	system("limpar || cls");
	printf("remover veiculo");
	printf("informe a placa do veiculo:\t\n");
	scanf("%[az-AZ-0-9]",PLACA);
}
