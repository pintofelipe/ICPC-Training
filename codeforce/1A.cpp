#include <iostream>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    
    // Calcular baldosas necesarias en cada dimensión
    // Formula: (dimension + a - 1) / a es equivalente a ceil(dimension / a)
    long long baldosas_n = (n + a - 1) / a;
    long long baldosas_m = (m + a - 1) / a;
    
    // Total de baldosas
    long long resultado = baldosas_n * baldosas_m;
    
    cout << resultado << endl;
    
    return 0;
}