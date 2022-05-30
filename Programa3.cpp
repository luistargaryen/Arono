#include <stdio.h>

int funcPotencia(int base,int exponente);

int main(){
	int a, b;
	
	printf("Digite la base ");
	scanf("%d", &a);
	printf("Digite el exponente ");
	scanf("%d", &b);
	printf("\nEl resultado es %d", funcPotencia(a,b));
	
	return 0;
}

int funcPotencia(int base,int exponente){
	int valor = 1;
	for(int i = 0; i<exponente; i++){
		valor *= base;
	}
	return valor;
}
