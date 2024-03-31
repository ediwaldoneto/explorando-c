#include <stdio.h>

#define MAX_TENTATIVAS 3
#define NUMERO_SECRETO 154

int main()
{

  int chute;

  printf("************************************\n");
  printf("* Bem-vindo ao Jogo de Adivinhacao *\n");
  printf("************************************\n");

  for (size_t i = 0; i < MAX_TENTATIVAS; i++)
  {
    printf("Qual o numero do chute? \n");
    scanf("%d", &chute);

    if (chute == NUMERO_SECRETO)
    {
      printf("Voce acertou!\n");
      break;
    }
    else
    {
      printf("Voce errou!\n");
    }
  }
  printf("Fim de Jogo!\n");
  getchar();

  return 0;
}