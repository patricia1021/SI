#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

struct lista {
int periodo;
int demanda;
struct lista *prox;
};
typedef struct lista* Lista;

Lista cria_Lista (void)
{
	return NULL;
}

void Retorna_soma_e_contador (Lista, int *, int *);
double Calculando_a_media (Lista, int *, int *);
double Calculando_a_variancia (Lista, double);
double Estoque_minimo (double, int);
double Ponto_de_ressuprimento (double, int, double);
double Estoque_maximo (double, )

int main (int argc, char *argv[])
{
	
	int var = 0, variancia = 0, *contador, *soma, PP, LT=2;
	double media, estoque_minimo, desvio_padrao;
	FILE *fb, *fp;

	if(argc!=3)
	{
	printf("Falta um arquivo. \n");
	exit(1);
	}

		
	
	Lista ponteiro = (Lista) malloc(sizeof(Lista));	
	ponteiro = cria_Lista (void);
	if ( ponteiro == NULL)
	{
		printf("O arquivo esta vazio.\n");
		exit(1);
	}
	
		media = Calculando_a_media (ponteiro, *soma, *contador);
		variancia = Calculando_a_variancia (ponteiro, media);
		desvio_padrao = sqrt ((variancia/(*contador-1)));
		estoque_minimo = Estoque_minimo (desvio_padrao, LT);
		ponto_ressuprimento = Ponto_de_ressuprimento(media, LT, estoque_minimo);

	fp = fopen("Relatorio.txt","w");
	if (fp==NULL)
	{
		printf("Falha.\n");
		exit(2);
	}
	
	fprintf(fp, "%s", __DATE__);
}	
	

void Retorna_soma_e_contador (Lista ponteiro, int *soma, int *contador)
{
	Lista aux = (Lista) malloc(sizeof(Lista));
	aux -> ponteiro;
	while (aux->prox->prox != NULL)
	{
		aux = aux->prox;
		*soma += aux->demanda;
		*contador++;
	}
	p = aux->prox;
} 

double Calculando_a_media (Lista ponteiro, int *contador, int *soma)
{
	double m;
	m = *soma/(*contador);
	return m;
}

double Calculando_a_variancia (Lista ponteiro,double media)
{
	int x;
	double var;

	Lista aux = (Lista) malloc(sizeof(Lista));
	aux -> ponteiro;	
	while (aux != NULL) 
		{
			//Subtraindo o valor da demanda pela média, elevando ao quadrado:
			x = aux->demanda;
			var += pow((x - media),2);
			aux = aux -> prox;
		}
	return var;
}

double Estoque_minimo (double desvio_padrao, int LT)
{
	double FS=1.6450, EM, PP= 1;

	EM = (FS * desvio_padrao) * (sqrt(LT)/PP);
	return EM;
}

double Ponto_de_ressuprimento (double m, int LT, double EM)
{
	double PR;
	
	PR = (m*LT)+EM
}
