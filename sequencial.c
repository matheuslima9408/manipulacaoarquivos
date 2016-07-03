#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 10

int main () {

  int vetor[TAMANHO] = {0,3,4,7,5,2,9,6,1,8};
  int i,valor;
  int encontrado;

  printf("\n Informe um valor para ser localizado no sistema:");
  scanf("%d",&valor);

  i = 0;
  encontrado = 0; /*Falso*/

  while (i < TAMANHO && !encontrado) {
    if (vetor[i] == valor) {
      encontrado = 1; /*Verdadeiro*/
    } else {
      i++;
    }
  }

  if (encontrado) {
    printf ("Valor %d encontrado na posicao %d\n", vetor[i], i);
  } else {
    printf ("Valor %d nao encontrado\n", valor);
  }

  system("pause");
  return 0;
}
