#include <stdio.h>


int main(){
    
    
    float preco1, preco2 , preco3;

    printf("Digite o preco do primeiro produto : ");
    scanf_s("%f", &preco1);// lembrar sempre do & 

    printf("Digite o preco do segundo produto: ");
    scanf_s("%f", &preco2);

    printf("Digite o preco do terceiro produto: ");
    scanf_s("%f", &preco3);

    if((preco1 < preco2) && (preco1 < preco3)){
        printf("\n\n O produto 1 eh mais barato.\n\n");
    }
    else if((preco2 < preco1) && (preco2 < preco3)){
        printf("\n\n O produto 2 eh mais barato.\n\n");
    }
    else{
        printf("\n\n O produto 3 eh mais barato.\n\n");
    }    
    return 0;
}