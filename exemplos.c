#include <stdio.h>

int main()
{
    int A[10] = {0};
    short nuM =  sizeof(short);
    short B = sizeof(A);
    short total_elementos = B/nuM;

    printf("sizeof(short) = %2d bytes \n", nuM);
    printf("sizeof(A) = %2d bytes\n");
    printf("sizeof(A) = %2d elements\n", total_elementos);
    
    float comp[] = {1.0, 2.0, 3.0, 4.0, 3.0, 2.0, 1.0};

 
}