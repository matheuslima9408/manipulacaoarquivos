#include<stdio.h>
#include<stdlib.h>//para trabalhar com arquivos
main(){

FILE *f;
f = fopen("vetor.txt","rb");
if(f==NULL){
    printf("\nErro na abertura!\n");
    getche();
    exit(1);
}
int i,total,v[5];
total= fread(v,sizeof(int),5,f);
if(total != 5){
    printf("\nErro na leitura!\n");
    getche();
    exit(1);
}
fclose(f);
for(i=0;i<5;i++){
    printf("\n%d",v[i]);
}
getche();
}
