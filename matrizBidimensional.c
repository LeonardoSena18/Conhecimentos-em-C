#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int valor;
	int i, j;
	
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			valor = matriz[i][j];
			printf("%d\n", valor);
			
		}
	}
}

