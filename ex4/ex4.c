#include <stdio.h>
#include <stdlib.h>
int triangulo (float a, float b, float c){
	if(a < b+c && b < a+c && c < a+b)
		return 1;
	return 0;
}
int main (){
	float a, b, c;
	printf("Digite três valores:\n");
	scanf("%f %f %f", &a, &b, &c);
	if(triangulo(a,b,b))
	printf("Os valores formam um triangulo.\n");
	else
	printf("Os valores não formam um triangulo.\n");
	return 0;
	}
