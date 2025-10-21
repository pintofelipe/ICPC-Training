#include <bits/stdc++.h>

using namespace std;

int main() {
    long long d;
    cin >> d;
    long long a, o;
    cin >> a >> o;
    long long delta_a, delta_o;
    cin >> delta_a >> delta_o;

    // Calcular evaporación con __int128 para evitar overflow
    __int128 evap_a = (__int128)d * delta_a;
    __int128 evap_o = (__int128)d * delta_o;

    // Calcular remanentes
    long long rem_a = (evap_a > a) ? 0LL : (a - (long long)evap_a);
    long long rem_o = (evap_o > o) ? 0LL : (o - (long long)evap_o);

    // Calcular porcentaje
    double total = (double)(rem_a + rem_o);
    double perc = 100.0 * (double)rem_a / total;

    // Imprimir con precisión
    cout << fixed << setprecision(15) << perc << endl;

    return 0;
}