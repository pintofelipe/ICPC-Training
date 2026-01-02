#include <bits/stdc++.h>

// 17:40
using namespace std;

int main()
{

    ios::sync_with_stdio;
    cin.tie(0);

    int n;

    cin >> n;

    if (n > 2)
    {

        if (n % 2 == 0)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    else
    {
        cout << "NO" << "\n";
    }

    return 0;
}