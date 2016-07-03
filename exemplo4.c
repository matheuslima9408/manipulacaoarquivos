#include<stdio.h>
#include<stdlib.h>//para trabalhar com arquivos
main(){
char str[50];
FILE *f;
f = fopen("arquivo4.txt","r");
if(f==NULL){
    printf("\nErro na abertura!\n");
    getche();
    exit(1);
}
//fgets é uma função que precisa receber 3 parâmetros
//a string, quantos caracteres vou ler da string, e o ponteiro do tipo FILE
char *resultado = fgets(str,50,f);
if(resultado == NULL){
     printf("\nErro de leitura!\n");
}else{
     printf("\n%s\n",str);
}
/* Dessa maneira só será impressa a primeira linha da string
   pois será lido até encontrar o /n no texto mesmo tendo
   mais caracteres na função fgets
fgets(str,50,f);
  printf("\n%s\n",str);
*/
fclose(f);
printf("\nArquivo: arquivo4.txt fechado com sucesso!!!\n");
getche();
}
