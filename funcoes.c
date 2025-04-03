#include <stdio.h>
#include <locale.h>

int parImpar(int x);

int main(){
    setlocale(LC_ALL, "Portuguese");
   
    int valor, res;
   
    printf("Digite um valor: \n");
    scanf("%d", &valor);//no linux usar scanf não scanf_s

    res = parImpar(valor);
    

    return 0;
}

int parImpar(int x)
{
    if(x % 2 == 0)
    {
        printf("O numero %i é par!\n", x);
    }
    else
    {
        printf("O numero %i é impar!\n", x);
    }
}
