#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

void raices(float a, float b, float c);

void volumen(float r);

void posicion(float x, float v, float a, float t);

int main(){

	int opc;
	printf("Opciones\n");
	printf("1. Raices de un polinomio de 2do grado\n");
	printf("2. Volumen de una esfera\n");
	printf("3. Calculo de la posicion de una particula\n");
	printf("Opcion: ");
	scanf("%d", &opc);

	switch(opc){
        case 1:{

            float a, b, c;
            printf("La forma general de un polinomio de 2do grado es: ");
            printf("ax^2+bx+c\n");
            printf("Digite el valor de a: ");
            scanf("%f", &a);
            printf("\nDigite el valor de b: ");
            scanf("%f", &b);
            printf("\nDigite el valor de c: ");
            scanf("%f", &c);
            raices(a,b,c);
            break;
        }
        case 2:{

            float r;
            printf("Volumen de una esfera\n");
            printf("Digite el radio de la esfera: ");
            scanf("%f", &r);
            volumen(r);
            break;
        }
        case 3:{

            float x0, v0, a, t;
            printf("Movimiento uniformemente variado");
            printf("La posicion final de una particula viene dada por la formula: ");
            printf("xf = x0 + v + (a/2)*t^2");
            printf("\nDigite el valor de x0(posicion inicial): ");
            scanf("%f", &x0);
            printf("\nDigite el valor de v(velocidad inicial): ");
            scanf("%f", &v0);
            printf("\nDigite el valor de a(aceleracion): ");
            scanf("%f", &a);
            printf("\nDigite el valor del tiempo: ");
            scanf("%f", &t);
            posicion(x0, v0, a, t);
            break;
        }
        default: printf("\nNo hay mas opciones");
	}
	return 0;
}

void raices(float a, float b, float c){

	float xa, xb;
	if ((pow(b,2)-4*a*c) < 0) printf("\n ERROR: No tiene solucion en los numeros reales!");
	else{

		xa = (-b+pow(pow(b,2)-4*a*c,0.5))/(2*a);
		xb = (-b-pow(pow(b,2)-4*a*c,0.5))/(2*a);
		printf("\n Las raices de la ecuacion son x = %.4f y x = %.4f", xa, xb);

	}

}

void volumen(float r){

	if (r <= 0) printf("\n ERROR: Imposible tener en esta dimension una distancia de esa especie!");
	else printf("\n El volumen de una esfera con radio %f es %.4f", r, 1.3333*PI*pow(r,3));

}

void posicion(float x, float v, float a, float t){

	if (t==0) printf("\nPosicion %f", x);
	else printf("\nPosicion en el tiempo t: %f", x+v+(a/2)*pow(t,2));

}
