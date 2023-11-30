#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct dados_livros{
    char nome [200];
    char categoria[200];
    char autor [200];
    int preco;
    

};

int main(){

struct dados_livros livros[3];
int i;
for( i = 0; i < 3; i++)
{
    
setbuf (stdin,0);
printf (" Digite o nome do Livro:");
gets (livros[i].nome);

printf (" Digite a categoria do livro:");
gets(livros[i].categoria);

printf("digite o nome do autor:");
gets(livros[i].autor);

printf ("digite o preco do livro:");
scanf ("%d",&livros[i].preco);
setbuf (stdin,0);

}


for( i = 0; i < 3; i++)
{
printf ("nome do livro: %s \n",livros[i].nome);
printf ("nome da categoria: %s \n", livros[i].categoria);
printf ("nome do autor: %s \n", livros[i].autor);
printf ("preco do livro: %d \n", livros[i].preco);

}

return 0;
}
