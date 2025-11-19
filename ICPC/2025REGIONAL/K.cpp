#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Calcula el COSTO MÍNIMO para que todas las filas/columnas
// estén contenidas en un rango de longitud L
ll minCostForLength(const vector<ll> &pos, ll L) {
    int n = pos.size();
    if (n == 0) return 0;
    
    // Prefix sums: pref[i] = sum(pos[0..i])
    vector<ll> pref(n);
    for (int i = 0; i < n; ++i) {
        pref[i] = pos[i];
        if (i > 0) pref[i] += pref[i-1];
    }
    
    ll minCost = LLONG_MAX;
    
    // Prueba cada rey como posible "extremo izquierdo" del rango
    for (int i = 0; i < n; ++i) {
        ll left = pos[i];
        ll right = left + L;
        
        // Encuentra el último rey que cabe en [left, right]
        int j = upper_bound(pos.begin(), pos.end(), right) - pos.begin() - 1;
        int inside = j - i + 1;  // Reyes que ya están dentro
        
        // Si todos caben, costo = 0
        if (inside == n) return 0;
        
        // **COSTO IZQUIERDA**: Mover reyes [0..i-1] a posiciones left-1, left-2, ...
        ll costLeft = 0;
        if (i > 0) {
            ll sumLeft = pref[i-1];  // Σ pos[k] para k < i
            // Suma deseada: (left-1) + (left-2) + ... + (left-i)
            ll targetSum = (ll)i * left - (ll)i * (i + 1) / 2;
            costLeft = targetSum - sumLeft;
        }
        
        // **COSTO DERECHA**: Mover reyes [j+1..n-1] a right+1, right+2, ...
        ll costRight = 0;
        if (j < n - 1) {
            ll sumRight = pref[n-1] - pref[j];  // Σ pos[k] para k > j
            int cntRight = n - j - 1;
            // Suma deseada: (right+1) + (right+2) + ... + (right+cntRight)
            ll targetSum = (ll)cntRight * right + (ll)cntRight * (cntRight + 1) / 2;
            costRight = sumRight - targetSum;
        }
        
        minCost = min(minCost, costLeft + costRight);
    }
    
    return minCost;
}

// Calcula la MÁXIMA LONGITUD alcanzable con k movimientos
ll maxLengthWithK(const vector<ll> &pos, ll k) {
    ll lo = 0, hi = 2e9;  // Búsqueda binaria en la longitud
    
    while (lo < hi) {
        ll mid = (lo + hi + 1) / 2;
        
        if (minCostForLength(pos, mid) <= k) {
            lo = mid;  // Podemos lograr longitud mid
        } else {
            hi = mid - 1;
        }
    }
    
    return lo;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    ll K;
    cin >> N >> K;
    
    vector<ll> rows(N), cols(N);
    for (int i = 0; i < N; ++i) {
        cin >> rows[i] >> cols[i];
    }
    
    // **PASO CRÍTICO**: Ordenar para aplicar prefix sums
    sort(rows.begin(), rows.end());
    sort(cols.begin(), cols.end());
    
    ll maxArea = 0;
    
    // **BÚSQUEDA TERNARIA** en la distribución de movimientos
    // Porque la función es convexa: hay un óptimo donde asignar más a filas o columnas
    ll lo = 0, hi = K;
    while (hi - lo > 10) {
        ll m1 = lo + (hi - lo) / 3;
        ll m2 = hi - (hi - lo) / 3;
        
        ll len1 = maxLengthWithK(rows, m1);
        ll len2 = maxLengthWithK(cols, K - m1);
        ll area1 = (len1 + 1) * (len2 + 1);
        
        ll len3 = maxLengthWithK(rows, m2);
        ll len4 = maxLengthWithK(cols, K - m2);
        ll area2 = (len3 + 1) * (len4 + 1);
        
        if (area1 < area2) lo = m1;
        else hi = m2;
    }
    
    // **EXHAUSTIVO** en el rango pequeño para precisión
    for (ll usedRows = lo; usedRows <= hi; ++usedRows) {
        ll rowsLen = maxLengthWithK(rows, usedRows);
        ll colsLen = maxLengthWithK(cols, K - usedRows);
        ll area = (rowsLen + 1) * (colsLen + 1);
        maxArea = max(maxArea, area);
    }
    
    cout << maxArea << "\n";
    
    return 0;
}