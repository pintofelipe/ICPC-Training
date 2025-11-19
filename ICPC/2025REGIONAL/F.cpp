#include <bits/stdc++.h>
using namespace std;
using u64 = unsigned long long;
using u128 = __uint128_t; // Para multiplicaciones grandes si las necesitamos

// Función para convertir string a u64
u64 string_to_ull(const string& s) {
    u64 result = 0;
    for (char c : s) {
        result = result * 10 + (c - '0');
    }
    return result;
}

// Función para factorizar un número pequeño
vector<pair<u64, int>> factorize(u64 x) {
    vector<pair<u64, int>> factors;
    u64 temp = x;
    
    // Probar todos los divisores hasta sqrt(x)
    for (u64 i = 2; i * i <= temp; ++i) {
        if (temp % i == 0) {
            int cnt = 0;
            while (temp % i == 0) {
                temp /= i;
                cnt++;
            }
            factors.push_back({i, cnt});
        }
    }
    
    // Si queda algo > 1, es un número primo
    if (temp > 1) {
        factors.push_back({temp, 1});
    }
    
    return factors;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    if (!(cin >> s)) return 0;
    
    // Caso 1: X es gigante (más de 18 dígitos o mayor que 10^18)
    // Nota: 10^18 = 1000000000000000000 (19 dígitos)
    if (s.size() > 18) {
        // Solución simple: Y = 2^60
        // 2^60 = 1152921504606846976 (≈ 1.15e18) ≤ 10^18
        cout << 1 << "\n";
        cout << 2 << " " << 60 << "\n";
        return 0;
    }
    
    // Caso 2: Verificar si es exactamente 10^18
    if (s.size() == 18) {
        // Comparar con "1000000000000000000"
        if (s > "1000000000000000000") {
            cout << 1 << "\n";
            cout << 2 << " " << 60 << "\n";
            return 0;
        }
    }
    
    // Caso 3: X es pequeño, cabe en u64
    u64 x = string_to_ull(s);
    
    // Manejar el caso especial x = 1 (aunque el problema dice X ≥ 2)
    if (x == 1) {
        cout << 1 << "\n";
        cout << 2 << " " << 0 << "\n";
        return 0;
    }
    
    // Factorizar x
    vector<pair<u64, int>> factors = factorize(x);
    
    // Imprimir resultado
    cout << factors.size() << "\n";
    for (auto &factor : factors) {
        cout << factor.first << " " << factor.second << "\n";
    }
    
    return 0;
}