//Determinar si un number n es triangular o no

/*
Formato de entrada:
La entrada puede contener varios casos de prueba. Cada caso de prueba se presenta en una
línea independiente y contiene un entero n (1 <= n <= 16 * 10^18)
. La entrada finaliza con un caso
de prueba en el que n tiene el valor de 0, caso que no debe ser procesado.
Formato de salida:
Por cada caso de prueba de la entrada, se debe imprimir un YES o un NO dependiendo si el
número de la entrada es o no triangular. Cada caso valido de entrada debe generar una línea
de salida.


Ejemplo de entrada:
1
15
16
101
15999999994386249876
0
Ejemplo de salida:
YES
YES
NO
NO
YES

*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

    unsigned long long int n,i, triangular;


    while (scanf("%llu, &n") && (n>0))
    {
        triangular = 0;
        for ( i = 1; triangular < n; i++)
            triangular += 1;        
    
        if(triangular == n)
            printf("YES\n");
        else
            printf("NO\n");
    }
        
    
  
    



    return 0;

}