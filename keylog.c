#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main() {
	FILE *arq = fopen("KeyDados.txt", "a+");
	
	if (arq == NULL) {
		printf("Erro na criacao do arquivo\n");
		system("pause");
		exit(1);
		
	}
	
	char c;
	while(1) {
		
		if(kbhit()){
			fprintf(arq, "%c", c);
		}
		
	}
	
	fclose(arq);
	
	return 0;
}














