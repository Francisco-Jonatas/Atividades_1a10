#include <stdio.h>
#include <stdlib.h>
	int main(){
		float nota, soma = 0;
		int contador = 0;
		printf("Digite notas (-1 para parar):\n");
		while (1){
			scanf("%f", &nota);
			if(nota == -1)
				break;
			soma += nota;
			contador++;
		}
		if(contador > 0)
			printf("media = %.2f\n", soma / contador);
		else
			printf("Nenhuma nota valida foi digitada.\n");
		return 0;
	}
