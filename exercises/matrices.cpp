#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m; // filas y columnas
    vector<vector<int>> mat(n, vector<int>(m));

    // Lectura
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mat[i][j];

    // Impresión
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << mat[i][j] << " ";
        cout << "\n";
    }
}
