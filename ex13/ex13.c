#include <stdio.h>
#include <stdlib.h>

void classificarIdade(int idade){
    if (idade <= 12)
        printf("CrianÃ§a\n");
    else if (idade <= 17)
        printf("Adolescente\n");
    else if (idade <= 59)
        printf("Adulto\n");
    else
        printf("Idoso\n");
}

int main(){
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    classificarIdade(idade);

    return 0;
}
