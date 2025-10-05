#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
            return false;

        sort(t.begin(), t.end());
        sort(s.begin(), s.end());

        return s == t;
    }
};

int main()
{

    Solution sol;

    string s = "racecar";
    string t = "carrace";

    bool result = sol.isAnagram(s, t);
    cout << (result ? "Es un anagrama " : "No es un anagrama") << "\n";

    return 0;
}