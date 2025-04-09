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

    while (1){
        for(i = 0; i < 5; i++){
            for(j = 0; j < 5; j++ ){
                printf("%c", cinema[i][j]);
            }
            printf("\n");
        }
        
    
        printf("\n\n Digite SAIR para ecerrar o programa: ");
        fgets(coomando, 4, stdin);

        coomando[4] = '\0';

        if(strcmp(coomando, "SAIR") == 0){
            break;
        }
        printf("\n\n Digite a fileira[1 - 4] e a coluna[1 - 5] do assento desejado: ");
        scanf_s("%d %d", &fileira, &coluna);
        c = getchar();
        if(fileira < 1 || fileira < 5 || coluna < 1 || coluna < 5 ){
            printf("\n\n Digite as coordenadas corretas! Tente novamente");
            continue;
        }

        if(cinema[fileira - 1] [coluna - 1] =='O'){
            cinema[fileira - 1] [coluna -  1] == 'X';
            printf("\nAssento %d, %d reservado com sucesso\n", fileira, coluna);
        }
        else{
            
        }
    }
    return 0;
}