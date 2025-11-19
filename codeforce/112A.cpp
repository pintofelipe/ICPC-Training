#include <bits/stdc++.h>

using namespace std;



int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string word1, word2;

    cin >> word1 >> word2;

    for (int i = 0; i < word1.length(); i++) {
        word1[i] = tolower(word1[i]);
        word2[i] = tolower(word2[i]);
    }

    if (word1 < word2) {
        cout<<-1<<endl;
    }else if (word1 > word2) {
        cout<<1<<endl;
    }else {
        cout<<0<<endl;
    }


    return 0;
}