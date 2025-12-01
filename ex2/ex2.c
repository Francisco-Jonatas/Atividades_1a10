#include <stdio.h>
int main(){
	int num1,num2,num3;

	printf("Fale um numero: ");
	scanf("%d",&num1);

	printf("Fale outro: ");
	scanf("%d",&num2);

	printf("Fala mais um: ");
	scanf("%d",&num3);

	if(num1 >= num2 && num1 >= num3){
		printf("O maio numero e: %d\n", num1);
	}else if(num2 >= num1 && num2 >= num3){
		printf("O maio numero e: %d\n",num2);
	}else{
		printf("O maior numero e: %d\n");
	}
}

