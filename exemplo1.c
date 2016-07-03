#include<stdio.h>
#include<stdlib.h>//para trabalhar com arquivos
main(){
//Ponteiro especial para manipular arquvios - FILE
//ele controla o fluxo de leitura e escrita
//trabalhar com arquivos textos e binários
FILE *f;
f = fopen("arquivo1.txt","w");
if(f==NULL){
    printf("\nErro na abertura!\n");
    getche();
    exit(1);
}else{
   printf("\nA1.txt aberto com sucesso!!!\n");
   getche();
}
//Sempre terminamos qualquer tarefa com o arquivo
//é preciso fechar o arquivo.
fclose(f);
printf("\nArquivo1.txt fechado com sucesso!!!\n");
getche();
}
