#include<stdio.h>
#include<stdlib.h>//para trabalhar com arquivos
main(){

char str[50];
FILE *f;
f = fopen("vetor.txt","wb");
if(f==NULL){
    printf("\nErro na abertura!\n");
    getche();
    exit(1);
}
//fgets é uma função que precisa receber 3 parâmetros
//a string, quantos caracteres vou ler da string, e o ponteiro do tipo FILE
int total, v[5]={1,2,3,4,5};
total=fwrite(v,sizeof(int),5,f);
if(total != 5){
    printf("\nErro na escrita do arquivo!\n");
    getche();
    exit(1);
}
fclose(f);
printf("\nArquivo: vetor.txt fechado com sucesso!!!\n");
getche();
}
