//Alocação de memória dinâmica

#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ponteiro;

    ponteiro = (int*)calloc(5,sizeof(int));

    if (ponteiro == NULL){
        printf("FALHA NA ALOCAÇÃO DE MEMÓRIA.\n");

        return 1;
    }
    for (int i = 0; i<5;i++){
        printf("%d", ponteiro[i]);
    }

    free(ponteiro);

    return 0 
}
