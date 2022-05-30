#include <stdio.h>

//Operaciones aritmeticas basicas

float partedecimal(float real);

int main(){
	float num;
	printf("Digite el numero ");
	scanf("%f", &num);
	partedecimal(num);
	
	return 0;	
}

float partedecimal(float real){
	int entero = real;
	printf("\nLa parte decimal es %f ",real-entero);
}

