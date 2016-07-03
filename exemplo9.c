#include<stdio.h>
#include<stdlib.h>//para trabalhar com arquivos
main(){

FILE *f;
f = fopen("dados.txt","rb");
if(f==NULL){
    printf("\nErro na abertura!\n");
    getche();
    exit(1);
}
char str[30];
float x;
int v[5],i;
fread(str,sizeof(char),30,f);
fread(&x,sizeof(float),1,f);
fread(v,sizeof(int),5,f);
printf("\n%s\n%f",str,x);
for(i=0;i<5;i++){
    printf("\n%d",v[i]);
}
fclose(f);
getche();
}
