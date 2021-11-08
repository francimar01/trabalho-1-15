// projeto de Controle de Fluxo de Ve�culos
//autor: Francimar Alexandre de Oliveira Dantas
//disciplina: DCT 1106 PROGRAMA��O
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <times.h>
//fun��es
void inicio (void);
void menu (void);
void localizar (void);
void cadastrar (void);
void entar (void);
void sair (void);
int main (void){
  inicio(); 
  menu();	
  cadastrar();
  localizar();
  entrar();
  sair();
	return 0;
}
void inicio (void){	
     system( " limpar || cls" );
     printf("\n");
	printf("//////////////////////////////////////////////////////////////////\n");
	printf("///\tUniversidade Federal do Rio Grande do Norte           ///\n");
	printf("///\tCentro de Ensino Superior do Serid�                  ///\n");
	printf("///\tSistemas de Informa��o/ceres - Caic� - Bacharelado  ///\n");
	printf("///\tdisciplina - DCT 1106 programa��o                  ///\n");
	printf("///\tControle de Fluxo de Ve�culos                     ///\n");
	printf("///\tdesenvolvido por Francimar Dantas                ///\n");
	printf("///////////////////////////////////////////////////////////\n");
	printf("\tPressione qualquer tecla para continuar\n");
	getchar();
}
void menu (void){
    int A;
    system("limpar || cls");
    printf("////////////////////////////////////////////////////////////\n");
    printf("///\t1-LOCALIZAR VEICULO                             ///\n");
    printf("///\t2-CADASTRAR                                    ///\n");
    printf("///\t3-ENTRADA DE VE�CULO                          ///\n");//incompleto
    printf("///\t4-SAIDA DE VE�CULO                           ///\n");//incompleto
    printf("///\t5-SAIR                                      ///\n");//incompleto
    printf("//////////////////////////////////////////////////////\n");
    printf("digete uma op��o:\t\n");
    scanf("%d", &A);
    getchar();
}
void cadastrar (void){
	char PLACA[8];
	char MARCA[20];
	char COR[15];
	system ("limpar || cls");
	printf("\tBEM VINDO A PARTE DE CADASTRO\n");
	system ("pause");
	printf("PLACA:\t\n");
	scanf("%[az-AZ-0-9]",PLACA);
	getchar();
	printf("MODELO:\t\n");
	scanf("%[a-z]", MARCA);
	getchar();
	printf("COR:\t\n");
	scanf("%c", COR);
	getchar();
	printf("\tPressione qualquer tecla para continuar\n");
	getchar();
}
void localizar (void){
	char PLACA[8];
	system ("limpar || cls");
	printf("\tTELA LOCALIZAR VEICULO\n");
	printf("\t======================\n");
	system ("pause");
	printf("\tDIGITE A PLACA DO VEICULO:\n");
	scanf("%[az-AZ-0-9]",PLACA);
	getchar();
	system ("pause");
}
void entar (void){
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
void sair (void){
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
