#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &str) {
    auto it = find_if(str.begin(), str.end(), [](unsigned char ch){ return !isspace(ch); });
    return string(it, str.end());
}

string rtrim(const string &str) {
    auto it = find_if(str.rbegin(), str.rend(), [](unsigned char ch){ return !isspace(ch); });
    return string(str.begin(), it.base());
}

vector<string> split(const string &str) {
    vector<string> tokens;
    string::size_type start = 0, end = 0;
    while ((end = str.find(' ', start)) != string::npos) {
        if (end > start) tokens.push_back(str.substr(start, end - start));
        start = end + 1;
    }
    if (start < str.size()) tokens.push_back(str.substr(start));
    return tokens;
}

long long aVeryBigSum(const vector<long long> &ar) {
    long long s = 0;
    for (auto num : ar) s += num;
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string ar_count_temp;
    if (!getline(cin, ar_count_temp)) return 0;
    int ar_count = stoi(ltrim(rtrim(ar_count_temp)));

    string ar_temp_temp;
    getline(cin, ar_temp_temp);

    vector<string> ar_temp = split(rtrim(ar_temp_temp));
    vector<long long> ar(ar_count);

    for (int i = 0; i < ar_count; ++i) {
        ar[i] = stoll(ar_temp[i]);
    }

    long long result = aVeryBigSum(ar);
    cout << result << '\n';
    return 0;
}
