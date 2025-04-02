#include <stdio.h>
#include <locale.h>
int main(){
    int x = 0;
    while (x <= 100)
    {
        if(x % 2 == 0)
        {
            printf("O numero %i é par!\n", x);
        }
        else
        {
            printf("O numero %i é impar!\n", x);
        }

        x++;
    }
    
}