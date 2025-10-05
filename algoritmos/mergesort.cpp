// divide y venceras
//  ordenar 9 1 3 5 10 4 6

#include <iostream>
#include <vector>
using namespace std;

void mergesort(double a[], int primero, int ultimo)
{
    int central;

    if (primero < ultimo)
    {
        central = (primero + ultimo) / 2;
        mergesort(a, primero, central);
        mergesort(a, central + 1, ultimo);
        mezcla(a, primero, central, ultimo);
    }
}

void mezcla(double a[], int izda, int medio, int drcha)
{
    double *tmp;
    int i, k, z;

    tmp = new double[drcha - izda + 1];
    i = z = izda;
    k = medio + 1;
    // bucle para la mezcla, utiliza tmp[] como array auxiliar
    while (i <= medio && k <= drcha)
    {
        if (a[i] <= a[k])
            tmp[z++] = a[i++];
        else
            tmp[z++] = a[k++];
    }
    // se mueve elementos no mezclados de sublistas
    while (i <= medio)
        tmp[z++] = a[i++];
    while (k <= drcha)
        tmp[z++] = a[k++];
    // Copia de elementos de tmp[] al array a[]
    for (i = izda; i <= drcha; i++)
        a[i] = tmp[i];
    delete tmp;
}

int main()
{
    vector<double> a = {9, 1, 3, 5, 10, 4, 6};

    
    return 0;
}