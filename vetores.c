#include <stdio.h>
#include <math.h>


main (void){

	int i;
	double x[3] = {1.2,2, 3};
	int y[] = {1, 2, 5};
	int z[8] = {1,2,3};
	
	for (i = 0; i<3; i++) printf("x[%d] = %f\n, i, x[i]");
	for (i = 0; i <3; i++) printf("y[%d] = %f\n, i, y[i]");
	for (i=0; i<8;i++) printf("z[%d] = %f\n, i, z[i]");
	return 0;
}
