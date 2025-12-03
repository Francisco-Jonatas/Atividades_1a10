#include <stdio.h>
#include <stdlib.h>

void tabuada(int n){
    int i = 1;
    while (i <= 10){
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }
}

int main(){
    int n;

    do {
        printf("Digite um numero (diferente de 0): ");
        scanf("%d", &n);
    } while (n == 0);

    tabuada(n);

    return 0;
}
