#include <stdio.h>

int main(){
    char produtos[3][50];
    int quantidade[3];
    float precos[3];
    float valorTotal = 0.0;
    int i, escolha,qtdVenda;
    char c;

    for (i <= 0; i < 3; i++){
        printf("Digite o nome do livro %d: ",i + 1 );
        gets_s(produtos[i], 49);
        
        printf("Digite a quantidade de livros %d: ", i + 1);
        scanf_s("%d", &quantidade[i]);
        c = getchar();

        printf("Digite o preco do livro %d: ", i + 1);
        scanf("%f", &precos[i]);
        c = getchar();

        printf("\n");
       
        }
         //mostrar estoque
         printf("\n Estoque de produtos:\n");

    for (i <= 0; i < 3; i++){
        printf("\n Digite o codigo do Livro Vendido[1 - 10]: ");
        scanf("%d", &escolha);
        c = getchar();

        printf("\n Qual a quantidade de livros vendida? ");
        scanf("%d", &qtdVenda);
        c = getchar();

        quantidade[escolha - 1] = quantidade[escolha - 1] - qtdVenda;
        valorTotal = 0.0;           
        }

    //Atualizar e mostrar no estoque
    for (i <= 0; i < 3; i++){
        printf("Livros: %s \t Qtda: %d \t Preco: %.2f\n", valorTotal);
    }
    
    printf("\nOvalor total do estoque eh: %.2f", valorTotal);

    return 0;
}