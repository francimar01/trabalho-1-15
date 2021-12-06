#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
int placa (void);
void lerPlaca(char placa[]);
void validaPlaca(char placa[]);
void isnum(char caracter);

int placa(){
	char placa[8];
	lerPlaca(placa);
	validaPlaca(placa);
	return 0;

}

void lerPlaca(char placa[]){
	int i=0;
	printf("Digite a placa, sendo os 3 primeiros caracteres letras e os 4 restantes numeros: \n\n");
	for(i=0;i<=6;i++){
		placa[i]=getche();
	}
	placa[8]='\0';
}

void validaPlaca(char placa[]){
	int i,k,j,correto=0;
	for(i=0;i<=2;i++){
        k=isalpha(placa[i]);
		if(k!=0 ){
            correto++;
		}else{
			break;
		}
	}
	for(i=3;i<=6;i++){
        j=isalnum(placa[i]);
		if(j!=0){
            correto++;
		}else{
			break;
		}
	}
		if(correto==7){
            printf("A placa %s eh valida!!\n", placa);
        }
        else{
            printf("A placa eh invalida\n");
        }
}
