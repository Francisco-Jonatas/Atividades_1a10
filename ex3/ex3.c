#include <stdio.h>
int main(){
	int login,senha;
	printf("Digite seu login: ");
	scanf("%d",&login);
	printf("Digite sua senha: ");
	scanf("%d",&senha);

	if(login == 1234 && senha == 9999){
		printf("Acesso permiida");}
	else{
		printf("Acesso negado");}

}
