#ifndef TELAVEICULO_H_INCLUDED
#define TELAVEICULO_H_INCLUDED

char menuveiculo(void);

void telaveiculo(void);
void cadastrar (void);
void veiculo_cad (void);
void saida(void);


typedef struct veiculos{

    char PLACA[8];
	char MARCA[20];
	char COR[15];

};
struct veiculos carro;

FILE*arq;
#endif // TELAVEICULO_H_INCLUDED
