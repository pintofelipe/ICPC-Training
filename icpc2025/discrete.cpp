#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
ull binom[61][61];

void precompute() {
    memset(binom, 0, sizeof(binom));
    for (int i = 0; i <= 60; i++) {
        binom[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            binom[i][j] = binom[i-1][j-1] + binom[i-1][j];
        }
    }
}

ull get_id(int n, int k, vector<int>& a) {
    ull rank = 0;
    int prev = 0;
    for (int i = 0; i < k; i++) {
        for (int x = prev + 1; x < a[i]; x++) {
            int rem = k - 1 - i;
            if (rem >= 0) {
                rank += binom[n - x][rem];
            }
        }
        prev = a[i];
    }
    return rank;
}

int main() {
    precompute();
    int n, k;
    while (cin >> n >> k) {
        vector<int> a(k);
        for (int i = 0; i < k; i++) {
            cin >> a[i];
        }
        cout << get_id(n, k, a) << endl;
    }
    return 0;
}