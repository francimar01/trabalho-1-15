#ifndef CADASTRAR_H_INCLUDED
#define CADASTRAR_H_INCLUDED

void cadastrar (void);
int i;
typedef struct veiculos{

    char PLACA[8];
	char MARCA[20];
	char COR[15];
};
struct veiculos cadastro;
FILE*fp;


#endif // CADASTRAR_H_INCLUDED
