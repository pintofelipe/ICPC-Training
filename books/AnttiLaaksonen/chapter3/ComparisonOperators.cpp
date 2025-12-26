#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<pair<int, int>> v;
    v.push_back({1, 5});
    v.push_back({2, 3});
    v.push_back({1, 2});
    sort(v.begin(), v.end());

    vector<tuple<int, int, int>> v1;
    v1.push_back({2, 1, 4});
    v1.push_back({1, 5, 3});
    v1.push_back({2, 1, 3});
    sort(v1.begin(), v1.end());

    return 0;
}