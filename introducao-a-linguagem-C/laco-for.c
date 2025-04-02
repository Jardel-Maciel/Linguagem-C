#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    
    for(int x = 0 ; x <= 100; x++)
    {
        if(x % 2 == 0)
        {
            printf("O numero %i e par!\n", x);
        }
        else
        {
            printf("O numero %i e impar!\n", x);
        }

        x++;
    }
}