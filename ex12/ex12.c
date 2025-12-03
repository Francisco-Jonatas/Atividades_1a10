#include <stdio.h>
#include <stdlib.h>

float mediaPonderada(float n1, float p1, float n2, float p2, float n3, float p3){
    return (n1*p1 + n2*p2 + n3*p3) / (p1 + p2 + p3);
}

int main(){
    float n1, n2, n3;
    float p1, p2, p3;

    printf("Digite a nota 1 e seu peso: ");
    scanf("%f %f", &n1, &p1);

    printf("Digite a nota 2 e seu peso: ");
    scanf("%f %f", &n2, &p2);

    printf("Digite a nota 3 e seu peso: ");
    scanf("%f %f", &n3, &p3);

    float media = mediaPonderada(n1, p1, n2, p2, n3, p3);

    printf("MÃ©dia final: %.2f\n", media);

    if (media >= 7)
        printf("Aluno APROVADO\n");
    else
        printf("Aluno REPROVADO\n");

    return 0;
}
