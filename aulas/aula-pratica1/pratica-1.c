#include <stdio.h>

int main() {

    int idade; 

    char nome[45];

    printf("Digite seu nome: ");

    gets_s(nome, 44);

    printf("Digite sua idade: ");

    scanf_s("%d", &idade);

    printf("Minha idade de %s eh %d", nome, idade);

    return 0;
} 