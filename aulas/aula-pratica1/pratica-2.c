#include <stdio.h>

int main() {

    int numero1, numero2;
    

    printf("Digite um numero:");
    scanf("%d", &numero1);

    printf("Digite outro numero:");
    scanf("%d", &numero2);   
    if(numero1 > numero2) {
        printf("\n\n Numero 1 é maior que o numero 2");
    }
    else
    {
        printf("Numero 2 e maior que numero 1");
    }
    
    return 0;
}