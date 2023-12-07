#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int registro()
{
	char arquivo[40];
	char identificacao[40];
	char nome[40];
	char numero[12];
	char marca[40];
	char aparelho[40];
	
	printf("Digite a identificação a ser cadastrada: ");
	scanf("%s", identificacao);
	
	strcpy(arquivo, identificacao);
	
	FILE *file;
	file = fopen(arquivo, "w");
	fprintf(file, identificacao);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ", ");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file =fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ", ");
	fclose(file);
	
	printf("Digite o numero a ser cadastrado: ");
	scanf("%s", numero);
	
	file = fopen(arquivo, "a");
	fprintf(file, numero);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ", ");
	fclose(file);
	
	printf("digite a marca do aparelho ");
	scanf("%s", marca);
	
	file = fopen(arquivo, "a");
	fprintf(file, marca);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ", ");
	fclose(file);
	
	printf("Digite o aparelho a ser cadastrado: ");
	scanf("%s", aparelho);
	
	file = fopen(arquivo, "a");
	fprintf(file,aparelho);
	fclose(file);
	
	system("pause");
}

int consultaclientes()
{
	setlocale(LC_ALL, "portuguese");
	
	char identificacao[40];
	char conteudo[200];
	
	printf("Digite a identificação a ser consultada ");
	scanf("%s", identificacao);
	
	FILE *file;
	file = fopen(identificacao, "r");
	
	if(file == NULL)
	{
		printf("Não foi possivel localizar esse usuario ");
	}
	
	while(fgets(conteudo, 200, file)!= NULL)
	{
		printf("\n Essas sao as informações do usuario: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
}

int consultavendas()
{
	
	setlocale(LC_ALL, "portuguese");
	
	char id[40];
	char conteudo[200];
	
	printf("Digite o id a ser consultado ");
	scanf("%s", id);
	
	FILE *file;
	file = fopen(id, "r");
	
	if(file == NULL)
	{
		printf("Não foi possivel localizar esse usuario ");
	}
	
	while(fgets(conteudo, 200, file)!= NULL)
	{
		printf("\n Essas sao as informações do usuario: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
}

int cadastro()
{
	char arquivo[40];
	char id[40];
	char marca[20]; 
	char aparelho[12];
	char data[12]; 
	char valor[12];
	char formapagamento[100];
	char prasogarantia[12];
	
	printf("Digite o id a ser cadastrado: ");
	scanf("%s", id);
	
	strcpy(arquivo, id);
	
	FILE *file;
	file = fopen(arquivo, "w");
	fprintf(file, id);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ", ");
	fclose(file);
	
	printf("Digite a marca a ser cadastrada: "); 
	scanf("%s",marca);
	
	file =fopen(arquivo, "a");
	fprintf(file,marca);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, " ");
	fclose(file);
	
	printf("Digite o aparelho a ser cadastrado: ");
	scanf("%s", aparelho);
	
	file = fopen(arquivo, "a");
	fprintf(file, aparelho);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ", ");
	fclose(file);
	
	printf("digite a data da venda \n");
	scanf("%s", data);
	
	file = fopen(arquivo, "a");
	fprintf(file, data);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ", ");
	fclose(file);
	
	printf("Digite o valor a ser cadastrado: ");
	scanf("%s", valor);
	
	file = fopen(arquivo, "a");
	fprintf(file,valor);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ", ");
	fclose(file);
	
	printf("Digite a data do vencimento da garantia: ");
	scanf("%s", prasogarantia);
	
	file =fopen(arquivo, "a");
	fprintf(file,prasogarantia);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ", ");
	fclose(file);
	
	printf("Digite a forma de pagamento: ");
	scanf("%s",formapagamento);
	
	file =fopen(arquivo, "a");
	fprintf(file,formapagamento);
	fclose(file);
	
	system("pause");

}

int main()
{
	
	int opcao=0;
	int laco=1;
	
	for(laco=1;laco=1;)
	{
		
	system("cls");
	
	setlocale(LC_ALL, "portuguese");
	printf("# sistema loja fertec # \n\n");
	printf("Escolha uma opção do menu\n\n");
	printf("\t1 - Registro de clientes. \n\n");
	printf("\t2 - Consulta de clientes. \n\n");
	printf("\t3 - Consulta de vendas. \n\n");
	printf("\t4 - Cadastro de vendas. \n\n");
	printf("opção: ");
	scanf("%d", &opcao);
	
	system("cls");
	
	switch(opcao)
	{
		case 1:
		registro();
		break;
		
		case 2:
		consultaclientes();
		break;
		
		case 3:
		consultavendas();
		break;
		
		case 4:
		cadastro();
		break;
		
		default:	
		printf("Essa opção nao esta disponivel. \n");
		system("pause");
		break;
	}
  }
}
