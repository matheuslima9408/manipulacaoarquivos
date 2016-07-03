#include<stdio.h>
#include<stdlib.h>//para trabalhar com arquivos
main(){
//Ponteiro especial para manipular arquvios - FILE
//ele controla o fluxo de leitura e escrita
//trabalhar com arquivos textos e binários
FILE *f;
f = fopen("C:/Users/alunolab12/Desktop/teste.txt","r");
//se colocar w irá perder o conteúdo anteiror
if(f==NULL){
    printf("\nErro na abertura!\n");
    getche();
    exit(1);
}else{
   printf("\nAarquivo2.txt aberto com sucesso!!!\n");
   getche();
}
char c = fgetc(f);
//EOF FUNÇÃO QUE RETORNA O FIM DO MEU ARQUIVO
while(c != EOF){
    printf("%c",c);
    c = fgetc(f);
    //Imprimi o caracter na tela e ler o próximo
}
fclose(f);
printf("\nArquivo2.txt fechado com sucesso!!!\n");
getche();
}
