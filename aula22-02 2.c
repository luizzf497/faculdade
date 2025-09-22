#include<stdio.h>
#include<math.h>

int main(void){
    int x;
    int *p, **p2;
    x = 10;
    p = &x;
    p2 = &p;
    printf("conteudo de p2: %d\n", p2);
    printf("conteudo em que p2 aporta: %d\n", *p2);
    printf("conteudo em que p aporta: %d\n", **p2);



    return 0;
}