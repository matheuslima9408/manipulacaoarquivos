#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 1000

int main () {

  int vetor[TAMANHO];
  int i,valor,aux,j;
  int encontrado;

  printf("\n Informe um valor para ser localizado no sistema:");
  scanf("%d",&valor);

    //Preenche vetor com os valores de i
  for (i = 0; i < TAMANHO; i++){
    vetor[i] = i;
  }
    //Embaralha os elementos do vetor
  for (i = 0; i < TAMANHO; i++) {
    j = rand() % TAMANHO;
    aux = vetor[i];
    vetor[i] = vetor[j];
    vetor[j] = aux;
  }
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
