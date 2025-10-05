#include <iostream>
using namespace std;

void duplicar(int &x) {
    x = x * 2;
}

int main() {
    int n = 10;
    duplicar(n);
    cout << n; // 
}
