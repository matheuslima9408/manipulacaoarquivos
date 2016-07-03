#include<stdio.h>
#include<stdlib.h>//para trabalhar com arquivos
#include<conio.h>
main(){
//Ponteiro especial para manipular arquvios - FILE
//ele controla o fluxo de leitura e escrita
//trabalhar com arquivos textos e binários
FILE *f;
f = fopen("arquivo2.txt","w");
if(f==NULL){
    printf("\nErro na abertura!\n");
    getche();
    exit(1);
}else{
   printf("\nArquivo2.txt aberto com sucesso!!!\n");
   getche();
}
char texto[30] = "Vou melhorar minha nota";
int i;
for(i=0;i<strlen(texto);i++){
    fputc(texto[i],f);
    //copiar caracter por caracter sera salvo em f
    fputc('-',f);
    //É o programador que dfine como sera salvo no arquivo
}
fclose(f);
printf("\nArquivo2.txt fechado com sucesso!!!\n");
getche();
}
