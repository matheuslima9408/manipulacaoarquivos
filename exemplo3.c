#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>//fun��o toupper
main(){
FILE *f1, *f2;
f1 = fopen("minusculo.txt","r");
f2 = fopen("maiusculo.txt","w");
if(f1==NULL||f2==NULL){
    printf("\nErro na abertura!\n");
    getche();
    exit(1);
}
char c = fgetc(f1);

while(c != EOF){
    fputc(toupper(c),f2);
    c = fgetc(f1);
}
fclose(f1);
fclose(f2);
getche();
}
