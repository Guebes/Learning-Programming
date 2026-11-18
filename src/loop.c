#include <stdio.h>
#include <stdlib.h>

int main(){
system("chcp 65001");

    int num, sum = 0;

    printf("Escreva um numero inteiro e digite [0] para parar\n\n");

    //Escreva um programa que irá receber, do usuario, inteiros, somar eles e irá parar quando o mesmo digitar "0"
    
    do
    {
        scanf("%d", &num);
        sum += num;

    } while (num != 0);

    printf("A soma dos números informados é: %d", sum);
    

    return 0;

}