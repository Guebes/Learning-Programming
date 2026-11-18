#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
system("chcp 65001");

    //Faça um programa que peça ao usuario para ele informar um nome.

    char nome[8];

    printf("Informe seu nome: ");
    // Preciso ler o input nome[] com fgets([var*/var], [tam] que será lido, origem)
    fgets(nome, sizeof(nome), stdin);

    if(strchr(nome, '\n') == NULL){
        perror("Voce ultrapassou a quantidade max definida no sistema");
        exit(1);
    }else{
        printf("Bem-vindo ao teste %s", nome);
    }

    return 0;
}