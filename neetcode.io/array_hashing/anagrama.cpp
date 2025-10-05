#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;

        vector<int> count(26, 0);

        for (char c : s)
            count[c - 'a']++;

        for (char c : t)
            count[c - 'a']--;

        for (int x : count)
        {
            if (x != 0)
                return false;
        }

        return true;
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