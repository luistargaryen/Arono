#include <stdio.h>

//Operaciones aritmeticas basicas

int suma(int a,int b);
int resta(int a,int b);
int multiplicacion(int a,int b);
int division(float a, float b);

int main(){
	
	int opc, a = 0, b = 0;
	
	printf("Opciones\n");
	printf("1. Suma\n");
	printf("2. Resta\n");
	printf("3. Multiplicacion\n");
	printf("4. Division\n");
	printf("Opcion: ");
	scanf("%d", &opc);
	
	switch(opc){
		case 1:{
			printf("Digite el primer numero ");
			scanf("%d", &a);
			printf("Digite el segundo numero ");
			scanf("%d", &b);
			suma(a,b);
			break;
		}
		case 2:{
			printf("Digite el primer numero ");
			scanf("%d", &a);
			printf("Digite el segundo numero ");
			scanf("%d", &b);
			resta(a,b);
			break;
		}
		case 3:{
			printf("Digite el primer numero ");
			scanf("%d", &a);
			printf("Digite el segundo numero ");
			scanf("%d", &b);
			multiplicacion(a,b);
			break;
		}
		case 4:{
			printf("Digite el primer numero ");
			scanf("%d", &a);
			printf("Digite el segundo numero ");
			scanf("%d", &b);
			division(a,b);
			break;
		}
		default: printf("Lo sentimos no hay mas opciones!");
	}
	
	return 0;
}

int suma(int a,int b){
	printf("EL resultado es %d", a+b);
}
int resta(int a, int b){
	printf("EL resultado es %d", a-b);
}
int multiplicacion(int a,int b){
	printf("EL resultado es %d", a*b);
}
int division(float a, float b){
	if (b == 0) printf("No existe la division por cero!");
	else printf("El resultado es %d", a/b);
}
