#include <stdio.h>
#include <stdlib.h>
	int main(){
		float saldo = 1000, saque;
		while(saldo > 0){
			printf("saldo atual: R$ %.2f\n", saldo);
			printf("digite o valor de saque(0 para sair):\n");
			scanf("%f", &saque);

			if(saque == 0)
				break;
			if(saque <= saldo){
				saldo -=saque;
				printf("saque realizado:\n");
			}else {
				printf("Saldo insuficiente:\n");
			}
		}
		printf("operação encerrada.\n");
		return 0;
	}
