/*realloc(): É usado para laterar o tamanho de um bloco de memória previamente alocado.*/


#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ponteiro;

    ponteiro = (int*)malloc(size 5*sizeof(int));

    if (ponteiro == NULL){
        printf("FALHA NA ALOCAÇÃO DE MEMÓRIA.\n");

        return 1;
    }
    for (int i = 0; i<5;i++){
        printf("%d", ponteiro[i]);
    }
    ponteiro = (int*)realloc(ponteiro,10*sizeof(int));
    if (ponteiro == NULL){
        printf("FALHA NA REALOCAÇÃO DE MEMÓRIA.\n");

        return 1;}
     for (int i = 5; i<10;i++){
        ponteiro[i] = i + 1;
    }
    for (int i = 0; i<10;i++){
        printf("%d", ponteiro)
    }



    free(ponteiro);

    return 0 
}
