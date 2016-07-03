#include<stdio.h>
#include<stdlib.h>//para trabalhar com arquivos
main(){

FILE *f;
//para armazenamento em blocos o tipo binário é mais aconselhavél
//por ocupar menos bytes e por ser mais rápido
f = fopen("dados.txt","wb");
if(f==NULL){
    printf("\nErro na abertura!\n");
    getche();
    exit(1);
}
char str[30]="So os fortes sobrevivem!";
float x = 5;
int v[5] = {1,2,3,4,5};


fwrite(str,sizeof(char),30,f);
fwrite(&x,sizeof(float),1,f);
fwrite(v,sizeof(int),5,f);

fclose(f);
printf("\nArquivo: dados.txt fechado com sucesso!!!\n");
//por ser um arquivo binário não será clara as informações no txt
getche();
return 0;//importante usar o retorno, exigencia da função fwrite
}
