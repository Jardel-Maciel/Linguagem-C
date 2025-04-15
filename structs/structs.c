#include <stdio.h>
#include <string.h>

struct Pessoa
{
    char nome[50];
    int idade;
};

int main(){

    struct  Pessoa pessoa1, pessoa2;
    
    strcpy(pessoa1.nome, "Jardel Maciel");
    pessoa1.idade = 29;

    memcpy(&pessoa2, &pessoa1, sizeof(struct Pessoa));
 

    printf("Nome, %s\n idade, %d\n", pessoa2.nome, pessoa2.idade);

}