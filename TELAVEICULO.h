#ifndef TELAVEICULO_H_INCLUDED
#define TELAVEICULO_H_INCLUDED

typedef struct tVeiculo{
  char NOME[90];
  char PLACA[8];
  char MARCA[20];
  char cidade[20];
  char estado[3];
};
struct tVeiculo veiculo;
void telaveiculo(void);
char menuveiculo(void);
int cont;

void cadastrar(void);
void editarveiculo(void);
void estaciona(void);
void entrada(void);
void saida(void);
void exclveiculo(void);

#endif // TELAVEICULO_H_INCLUDED
