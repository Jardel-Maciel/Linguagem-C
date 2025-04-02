#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int x, y;
    char op;

    printf("Digite a operação desejada:\n");
    scanf("%c", &op);

    printf("Digite o primeiro valor:\n");
    scanf("%i", &x);

    printf("Digite o segundo valor:\n");
    scanf("%i", &y);



    switch (op)
    {
    case '+':
        printf("%i + %i = %i \n", x, y, x + y);
        break;
    case '-':
        printf("%i - %i = %i \n", x, y, x - y);
        break;    
    case '*':
        printf("%i * %i = %i \n", x, y, x * y);
        break;
    case '/':
        printf("%i / %i = %i \n", x, y, x / y);
        break;
    default:
        printf("Opção invalida");
        break;
    }


    return 0;
}