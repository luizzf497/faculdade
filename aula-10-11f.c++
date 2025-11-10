#include<stdio.h>
#include<ptrhead.h>


void * funcaoThread(Void *arg){
    printf("Olá, sou uma nova thread!\n")
}


int main(){
    
    pthread_t thread_id;

    pthread_create(&thread_id, NULL, funcaoThread, NULL);

    pthread_join(thread_id, NULL);

    printf("Thread principal finalizada.\n");


    return 0 
}
