
#include <iostream>
#include <string>
#include <map>
using namespace std;

bool isDralinpome(string word) {
    // Contar frecuencia de cada letra
    map<char, int> freq;
    for (char c : word) {
        freq[c]++;
    }
    
    // Contar cuántas letras tienen frecuencia impar
    int oddCount = 0;
    for (auto p : freq) {
        if (p.second % 2 == 1) {
            oddCount++;
        }
    }
    
    return oddCount <= 1;
}

int main() {
    string word;
    cin >> word;
    
    if (isDralinpome(word)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    
    return 0;
}