#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int x;
    printf("Digite um valor para testarmos:\n");
    scanf_s("%i", &x);

    if(x % 2 ==0){
        printf("Numero par");
    }
    else{
        printf("Numero impar");
    }

    return 0;
}