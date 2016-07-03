#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10
int main () {
  int vetor[TAMANHO] = {0,1,2,3,4,5,6,7,8,9};
  int valor;
  int encontrado;
  int direita, esquerda, meio;
  printf("\n Informe um valor para ser localizado no sistema:");
  scanf("%d",&valor);
  encontrado = 0; /*Falso*/
  esquerda = 0;
  direita = TAMANHO - 1;
  while (esquerda <= direita && !encontrado) {
    meio = (direita + esquerda) / 2;
    if (vetor[meio] == valor)
      encontrado = 1; /*Verdadeiro*/
    else if (valor < vetor[meio])
      direita = meio - 1;
    else
      esquerda = meio + 1;
  }

  if (encontrado) {
    printf ("Valor %d encontrado na posicao %d\n",
             vetor[meio], meio);
  } else {
    printf ("Valor %d não encontrado\n", valor);
  }
  system("pause");
  return 0;
}
