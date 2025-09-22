int main(void){

    int array;
    int size, i;
    

    printf("quantos números você deseja inserir");
    scanf(%d, $size);
    
    array = (int+) malloc(size*sizeof(int));

    if (array = null){
        printf("erro\n");
        return -1;
    }
for (i = 0;i<size;i++){
    printf("digite o numero %d:",i+1);
    scanf("%d", &array[i]);
}

}