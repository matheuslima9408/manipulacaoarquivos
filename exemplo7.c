#include<stdio.h>
#include<stdlib.h>//para trabalhar com arquivos
struct cadastro{
 char nome[30];
 char endereco[30];
 int idade;
};
main(){

FILE *f;
f = fopen("struct.txt","wb");
if(f==NULL){
    printf("\nErro na abertura!\n");
    getche();
    exit(1);
}
struct cadastro cad = {"Pedro", "Rua 2",21};

fwrite(&cad,sizeof(struct cadastro),1,f);
fclose(f);
printf("\nArquivo: struct.txt fechado com sucesso!!!\n");
//por ser um arquivo binário não será clara as informações no txt
getche();
}
