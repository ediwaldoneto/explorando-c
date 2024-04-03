#include <stdio.h>

void bubbleSortOtimizado(int array[], int tamanho)
{
  int houveTroca;
  do
  {
    houveTroca = 0; // Reseta a variável de controle para cada passagem
    for (int i = 0; i < tamanho - 1; i++)
    {
      if (array[i] > array[i + 1])
      {
        // Troca os elementos
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        houveTroca = 1; // Marca que houve uma troca
      }
    }
    tamanho--; // Decrementa o tamanho porque o maior elemento já está no lugar certo
  } while (houveTroca); // Se não houve trocas, o array está ordenado
}

int main()
{
  int numeros[] = {11, 5, 68, 79, 6, 2, 4, 8};
  int tamanho = sizeof(numeros) / sizeof(numeros[0]);

  bubbleSortOtimizado(numeros, tamanho);

  printf("Array ordenado: ");
  for (int i = 0; i < tamanho; i++)
  {
    printf("%d ", numeros[i]);
  }
  printf("\n");

  return 0;
}
