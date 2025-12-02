#include <stdio.h>
#include <stdlib.h>
	int main(){
		int senha = 0;
		while(senha !=12345){
			printf("Digite a senha:\n");
			scanf("%d", &senha);
		}
		printf("Senha correta!\n");
		return 0;
	}
