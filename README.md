# struct-base
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct dados_endereco{
    char nome[200];
    int idade;
    char bairro [200];
    int cep;

};

int main(){

struct dados_endereco endereco;
//char nome[200];
//int idade; 

printf("\n Solicitando seus dados....\n");
printf("digite seu nome:");
gets(endereco.nome);



printf("digite sua idade:");
scanf("%d", &endereco.idade);
setbuf (stdin,0);

printf ("digite seu bairro:");
gets (endereco.bairro);

printf (" digite seu cep:\n");
scanf ("%d",&endereco.cep);
setbuf (stdin,0);

printf("\n Exibindo seus dados...\n");
printf("Nome: %s \n", endereco.nome);
printf("Idade: %d \n", endereco.idade);
printf("bairro: %s \n", endereco.bairro);
printf("cep: %d \n", endereco.cep);

return 0;
}
