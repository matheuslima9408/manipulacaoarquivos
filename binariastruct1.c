//Lembrando que quando o usu�rio for entrar com as chaves (int),
// elas dever�o estar em ordem, ou a busca bin�ria n�o funcionar�.

#include<stdio.h>
struct TPessoa{
	int chave;
	char nome[40];
};
struct TPessoa v[10];


int buscaBin(int tam,struct TPessoa v[], int pesq)
{
	int ini=0,fim=tam-1,meio;
	while(ini<=fim)
	{
		meio=(ini+fim)/2;
		if(pesq==v[meio].chave) return meio;
		else if(v[meio].chave<pesq) ini=meio+1;
		else fim=meio-1;
	}
	return -1;

}
int main ()
{
	int busca, i;
	char ret;
	printf("Informe os dados a serem armazenados:\n");
	for(i=0;i<10;i++)
	{
		printf("\nChave: ");
		scanf("%d",&v[i].chave);
		getchar();
		printf("Nome: ");
		gets(v[i].nome);
	}
	printf("\nInforme a chave a ser encontrada: ");
	scanf("%d",&busca);
	ret=buscaBin(10,v,busca);
	if(ret==-1)
		printf("\nNao encontrado!\n\n");
	else
		printf("\nA chave foi encontrada e o indice correspondente: %d. O nome que se encontra neste indice: %s.\n\n",ret,v[ret].nome);

return 0;
}
