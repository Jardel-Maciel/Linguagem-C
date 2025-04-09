#include <stdio.h>
#include <string.h>

int main(){
     char cinema[5][5];
     int i, j, fileira, coluna;
     char coomando [5], c;

     for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            cinema[i][j] = 0;
        }
     }

    while (1)
    {
        for(i = 0; i < 5; i++){
            for(j = 0; j < 5; j++ ){
                printf("%c", cinema[i][j]);
            }
            printf("\n");
        }
    }
    
}