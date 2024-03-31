#include <stdio.h>

void bubbleSort(int array[], int tamanho)
{

  for (int passagem = 0; passagem < tamanho - 1; passagem++)
  {
    for (int i = 0; i < tamanho - passagem - 1; i++)
    {
      if (array[i] > array[i + 1])
      {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

int main()
{
  int num[] = {11, 5, 68, 79, 6, 2, 4, 8};
  int tamanho = sizeof(num) / sizeof(num[0]);

  bubbleSort(num, tamanho);

  printf("Array ordenado: ");
  for (int i = 0; i < tamanho; i++)
  {
    printf("%d ", num[i]);
  }
  printf("\n");

  return 0;
}
