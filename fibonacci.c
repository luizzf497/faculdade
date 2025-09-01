#include <stdio.h>

int main(void){
	int i, x[10];
	x[0] = 1;
	x[1] = 1;
	for (i = 0; i<8; i++){
		x[i+2] = x[i + 1] + x[i];
	}
	printf("soma do sétimo com o décimo = %d\n",x[6]+x[9]);
}