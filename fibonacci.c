#include <stdlib.h>
// Nota: n es el n-esimo termino de la sucesion.
// Entonces, la funcion devuelve la suma hasta el n-esimo termino.
int fibonacci(int n){
    if (n>=0){
        if (n==0) return 0;
        else if (n==1) return 1;
        else return fibonacci(n-2)+fibonacci(n-1);
    }
}

int main(){

    printf("\n %d", fibonacci(10));
    return 0;

}

