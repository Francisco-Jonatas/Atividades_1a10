#include <stdio.h>
#include <stdlib.h>

float calcular(float peso, float altura){
    return peso / (altura * altura);
}

void classificar(float imc){
    printf("IMC: %.2f - ", imc);

    if (imc < 18.5)
        printf("Magreza (Grau 0)\n");
    else if (imc < 25.0)
        printf("Normal (Grau 0)\n");
    else if (imc < 30.0)
        printf("Sobrepeso (Grau I)\n");
    else if (imc < 40.0)
        printf("Obesidade (Grau II)\n");
    else
        printf("Obesidade Grave (Grau III)\n");
}

int main() {
    float peso, altura;

    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);

    printf("Digite sua altura (m): ");
    scanf("%f", &altura);

    float imc = calcular(peso, altura);
    classificar(imc);

    return 0;
}

