#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int x, y, res;
    printf("Digite um valor:\n");
    scanf_s("%i", &x);

    printf("Digite um valor:\n");
    scanf_s("%i", &y);

    res = x + y;
    printf("Resultado da soma de %i com %i e %i. ", x, y, res );


    return 0;
}