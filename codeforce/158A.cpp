#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    if (!(cin >> n >> k)) return 0;

    vector<int> a(n);

    for(int i=0; i<n; ++i){
        cin>>a[i];
    }

    int threshold = a[k-1]; 
    int advancers = 0;

    for(int i=0; i<n; ++i){
        if(a[i] > 0 && a[i] >= threshold){
            ++advancers;
        }
    }

    cout << advancers << "\n";
    return 0;
}
