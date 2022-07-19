#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//#define NUMERO_DE_TENTATIVAS 5

int main()
{
	int t = time(0);
	srand(t);
	int numero = rand() % 100;
	short numerosecreto = numero;

	short chute;
	short tentativas = 1;
	int ganhou = 0;
	double pontos = 1000;

	int dificuldade;

	printf("\nBem vindo ao jogo de adivinhacao.\n\n");

	printf("Escolha a dificuldade que voce deseja jogar\n");
	printf("    [1] Facil  [2] Medio  [3] Dificil\n\n");
	printf("Escolha: ");
	scanf("%d", &dificuldade);

	int numerodetentativas;

	switch (dificuldade)
	{

	case 1:
		numerodetentativas = 12;
		break;

	case 2:
		numerodetentativas = 8;
		break;

	default:
		numerodetentativas = 5;
		break;
	}

	for (int i = 1; i <= numerodetentativas; i++)
	{
		printf("\n\nTentativa %d de %d\n", i, numerodetentativas);
		printf("Insira seu chute: ");
		scanf("%d", &chute);

		if (chute < 0)
		{
			printf("Voce nao pode chutar numeros negativos!");
			i--;
			continue;
		}

		short acertou = (chute == numerosecreto);
		short maior = (numerosecreto > chute);
		short menor = (numerosecreto < chute);

		if (acertou)
		{
			ganhou = 1;
			break;
		}
		else if (maior)
		{
			printf("Voce errou, o numero secreto eh maior!");
		}
		else if (menor)
		{
			printf("Voce errou, o numero secreto eh menor!");
		}

		pontos = pontos - abs(chute - numerosecreto) / (double)2;
	}

	if (ganhou == 1)
	{
		printf("\nParabens, voce acertou!");
		printf("\nTotal de pontos: %.1f", pontos);
	}
	else
	{
		printf("\n\nFim de jogo, voce perdeu.\n");
		printf("O numero secreto era %d", numerosecreto);
	}
}