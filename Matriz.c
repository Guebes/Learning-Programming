#include <stdio.h>
#include <stdlib.h>

int main(){

    char nome [3][10], temp;
    int i, j;

    printf("Escreva 3 nomes\n\n");

    for(i = 0; i <= 2; i++){
        for(j = 0; j < 9; j++){

            temp = getchar();
            
                if(temp == '\n' || temp == EOF){ // "\n" se refere a tecla ENTER. "EOF" se refere ao ultimo slot da coluna da matriz. 
                    break;
                }else{
                    nome[i][j] = temp;
                }
        }
        nome[i][j] = '\0';
    }
        printf("\nNomes digitados\n\n");
            for(i = 0; i <= 2; i++){
                    printf("%s\n", nome[i]);
                }

    return 0;
}