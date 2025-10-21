#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    int d;
    double a, o;
    double delta_a, delta_o;
    
    cin >> d;
    cin >> a >> o;
    cin >> delta_a >> delta_o;
    
    // Volumen inicial de alcohol y otros líquidos
    double vol_alcohol = a;
    double vol_otros = o;
    
    // Simular la evaporación durante d días
    for (int i = 0; i < d; i++) {
        vol_alcohol = max(0.0, vol_alcohol - delta_a);
        vol_otros = max(0.0, vol_otros - delta_o);
    }
    
    // Volumen total después de d días
    double vol_total = vol_alcohol + vol_otros;
    
    // Calcular porcentaje de alcohol
    double porcentaje;
    if (vol_total == 0) {
        porcentaje = 0;
    } else {
        porcentaje = (vol_alcohol / vol_total) * 100.0;
    }

    cout << fixed << setprecision(13) << porcentaje << endl;
    
    return 0;
}